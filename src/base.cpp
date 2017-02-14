/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2017 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */

#include "occa/base.hpp"
#include "occa/mode.hpp"
#include "occa/tools/sys.hpp"

namespace occa {
  //---[ Globals & Flags ]--------------
  properties& settings() {
    static properties settings_;
    return settings_;
  }
  //====================================


  //---[ Memory ]-----------------------
  //====================================


  //---[ Device Functions ]-------------
  device host() {
    static device _host;
    if (_host.getDHandle() == NULL) {
      _host = occa::device(newModeDevice(occa::properties("mode: 'Serial'")));
    }
    return _host;
  }

  device& currentDevice() {
    static device cdev;
    if (cdev.getDHandle() == NULL) {
      cdev = host();
    }
    return cdev;
  }

  void setDevice(device d) {
    currentDevice() = d;
  }

  void setDevice(const properties &props) {
    currentDevice() = device(props);
  }

  const properties& deviceProperties() {
    return currentDevice().properties();
  }

  void finish() {
    currentDevice().finish();
  }

  void waitFor(streamTag tag) {
    currentDevice().waitFor(tag);
  }

  stream createStream() {
    return currentDevice().createStream();
  }

  stream getStream() {
    return currentDevice().getStream();
  }

  void setStream(stream s) {
    currentDevice().setStream(s);
  }

  stream wrapStream(void *handle_) {
    return currentDevice().wrapStream(handle_);
  }

  streamTag tagStream() {
    return currentDevice().tagStream();
  }

  //---[ Kernel Functions ]-------------
  kernel buildKernel(const std::string &filename,
                     const std::string &kernelName,
                     const properties &props) {

    return currentDevice().buildKernel(filename,
                                       kernelName,
                                       props);
  }

  kernel buildKernelFromString(const std::string &content,
                               const std::string &kernelName,
                               const occa::properties &props) {

    return currentDevice().buildKernelFromString(content, kernelName, props);
  }

  kernel buildKernelFromBinary(const std::string &filename,
                               const std::string &kernelName,
                               const occa::properties &props) {

    return currentDevice().buildKernelFromBinary(filename, kernelName, props);
  }

  //---[ Memory Functions ]-------------
  occa::memory malloc(const dim_t bytes,
                      void *src,
                      const properties &props) {

    return currentDevice().malloc(bytes, src, props);
  }

  void* uvaAlloc(const dim_t bytes,
                 void *src,
                 const properties &props) {

    return currentDevice().uvaAlloc(bytes, src, props);
  }

  occa::memory wrapMemory(void *handle_,
                          const dim_t bytes,
                          const occa::properties &props) {

    return currentDevice().wrapMemory(handle_, bytes, props);
  }

  void memcpy(void *dest, const void *src,
              const dim_t bytes,
              const properties &props) {

    ptrRangeMap_t::iterator srcIt  = uvaMap.find(const_cast<void*>(src));
    ptrRangeMap_t::iterator destIt = uvaMap.find(dest);

    occa::memory_v *srcMem  = ((srcIt  != uvaMap.end()) ? (srcIt->second)  : NULL);
    occa::memory_v *destMem = ((destIt != uvaMap.end()) ? (destIt->second) : NULL);

    const udim_t srcOff  = (srcMem  ? (((char*) src)  - ((char*) srcMem->uvaPtr))  : 0);
    const udim_t destOff = (destMem ? (((char*) dest) - ((char*) destMem->uvaPtr)) : 0);

    const bool usingSrcPtr  = ((srcMem  == NULL) || srcMem->isManaged());
    const bool usingDestPtr = ((destMem == NULL) || destMem->isManaged());

    if (usingSrcPtr && usingDestPtr) {
      ::memcpy(dest, src, bytes);
    } else if (usingSrcPtr) {
      destMem->copyFrom(src, bytes, destOff, props);
    } else if (usingDestPtr) {
      srcMem->copyTo(dest, bytes, srcOff, props);
    } else {
      // Auto-detects peer-to-peer stuff
      occa::memory srcMemory(srcMem);
      occa::memory destMemory(destMem);
      destMemory.copyFrom(srcMemory, bytes, destOff, srcOff, props);
    }
  }

  void memcpy(memory dest, const void *src,
              const dim_t bytes,
              const dim_t offset,
              const properties &props) {

    dest.copyFrom(src, bytes, offset, props);
  }

  void memcpy(void *dest, memory src,
              const dim_t bytes,
              const dim_t offset,
              const properties &props) {

    src.copyTo(dest, bytes, offset, props);
  }

  void memcpy(memory dest, memory src,
              const dim_t bytes,
              const dim_t destOffset,
              const dim_t srcOffset,
              const properties &props) {

    dest.copyFrom(src, bytes, destOffset, srcOffset, props);
  }
  //====================================

  //---[ Free Functions ]---------------
  void free(device d) {
    d.free();
  }

  void free(stream s) {
    currentDevice().freeStream(s);
  }

  void free(kernel k) {
    k.free();
  }

  void free(memory m) {
    m.free();
  }
  //====================================

  void printModeInfo() {
    strToModeMap_t &modes = modeMap();
    strToModeMapIterator it = modes.begin();
    styling::table table;
    int serialIdx = 0;
    int idx = 0;
    while (it != modes.end()) {
      if (it->first == "Serial") {
        serialIdx = idx;
      }
      table.add(it->second->getDescription());
      ++it;
      ++idx;
    }
    styling::section serialSection = table.sections[serialIdx];
    table.sections[serialIdx] = table.sections[0];
    table.sections[0] = serialSection;
    std::cout << table.toString();
  }
}
