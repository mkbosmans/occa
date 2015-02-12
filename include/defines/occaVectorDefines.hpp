#if (!OCCA_USING_OPENCL)
#  if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
#    include <iostream>
#  endif

//---[ bool2 ]--------------------------
#  define bool2_CONSTRUCTOR(...) bool2(__VA_ARGS__)
class bool2{
public:
  union { bool s0, x; };
  union { bool s1, y; };

  inline bool2() : 
    x(0),
    y(0) {}

  inline bool2(const bool &x_) : 
    x(x_),
    y(0) {}

  inline bool2(const bool &x_,
               const bool &y_) : 
    x(x_),
    y(y_) {}
};

inline bool2 operator + (const bool2 &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y);
}

inline bool2 operator + (const bool &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a + b.x,
                           a + b.y);
}

inline bool2 operator + (const bool2 &a, const bool &b){
  return bool2_CONSTRUCTOR(a.x + b,
                           a.y + b);
}

inline bool2& operator += (bool2 &a, const bool2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline bool2& operator += (bool2 &a, const bool &b){
  a.x += b;
  a.y += b;
  return a;
}
inline bool2 operator - (const bool2 &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y);
}

inline bool2 operator - (const bool &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a - b.x,
                           a - b.y);
}

inline bool2 operator - (const bool2 &a, const bool &b){
  return bool2_CONSTRUCTOR(a.x - b,
                           a.y - b);
}

inline bool2& operator -= (bool2 &a, const bool2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline bool2& operator -= (bool2 &a, const bool &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline bool2 operator * (const bool2 &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y);
}

inline bool2 operator * (const bool &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a * b.x,
                           a * b.y);
}

inline bool2 operator * (const bool2 &a, const bool &b){
  return bool2_CONSTRUCTOR(a.x * b,
                           a.y * b);
}

inline bool2& operator *= (bool2 &a, const bool2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline bool2& operator *= (bool2 &a, const bool &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline bool2 operator / (const bool2 &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y);
}

inline bool2 operator / (const bool &a, const bool2 &b){
  return bool2_CONSTRUCTOR(a / b.x,
                           a / b.y);
}

inline bool2 operator / (const bool2 &a, const bool &b){
  return bool2_CONSTRUCTOR(a.x / b,
                           a.y / b);
}

inline bool2& operator /= (bool2 &a, const bool2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline bool2& operator /= (bool2 &a, const bool &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const bool2& a){
  out << "[" << (a.x ? "true" : "false") << ", "
             << (a.y ? "true" : "false")
      << "]\n";

  return out;
}
#endif

//======================================


//---[ bool3 ]--------------------------
#  define bool3_CONSTRUCTOR(...) bool3(__VA_ARGS__)
class bool3{
public:
  union { bool s0, x; };
  union { bool s1, y; };
  union { bool s2, z; };

  inline bool3() : 
    x(0),
    y(0),
    z(0) {}

  inline bool3(const bool &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline bool3(const bool &x_,
               const bool &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline bool3(const bool &x_,
               const bool &y_,
               const bool &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};

inline bool3 operator + (const bool3 &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z);
}

inline bool3 operator + (const bool &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z);
}

inline bool3 operator + (const bool3 &a, const bool &b){
  return bool3_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b);
}

inline bool3& operator += (bool3 &a, const bool3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline bool3& operator += (bool3 &a, const bool &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline bool3 operator - (const bool3 &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z);
}

inline bool3 operator - (const bool &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z);
}

inline bool3 operator - (const bool3 &a, const bool &b){
  return bool3_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b);
}

inline bool3& operator -= (bool3 &a, const bool3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline bool3& operator -= (bool3 &a, const bool &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline bool3 operator * (const bool3 &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z);
}

inline bool3 operator * (const bool &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z);
}

inline bool3 operator * (const bool3 &a, const bool &b){
  return bool3_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b);
}

inline bool3& operator *= (bool3 &a, const bool3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline bool3& operator *= (bool3 &a, const bool &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline bool3 operator / (const bool3 &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z);
}

inline bool3 operator / (const bool &a, const bool3 &b){
  return bool3_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z);
}

inline bool3 operator / (const bool3 &a, const bool &b){
  return bool3_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b);
}

inline bool3& operator /= (bool3 &a, const bool3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline bool3& operator /= (bool3 &a, const bool &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const bool3& a){
  out << "[" << (a.x ? "true" : "false") << ", "
             << (a.y ? "true" : "false") << ", "
             << (a.z ? "true" : "false")
      << "]\n";

  return out;
}
#endif

//======================================


//---[ bool4 ]--------------------------
#  define bool4_CONSTRUCTOR(...) bool4(__VA_ARGS__)
class bool4{
public:
  union { bool s0, x; };
  union { bool s1, y; };
  union { bool s2, z; };
  union { bool s3, w; };

  inline bool4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline bool4(const bool &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline bool4(const bool &x_,
               const bool &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline bool4(const bool &x_,
               const bool &y_,
               const bool &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline bool4(const bool &x_,
               const bool &y_,
               const bool &z_,
               const bool &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};

inline bool4 operator + (const bool4 &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w);
}

inline bool4 operator + (const bool &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w);
}

inline bool4 operator + (const bool4 &a, const bool &b){
  return bool4_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b);
}

inline bool4& operator += (bool4 &a, const bool4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline bool4& operator += (bool4 &a, const bool &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline bool4 operator - (const bool4 &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w);
}

inline bool4 operator - (const bool &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w);
}

inline bool4 operator - (const bool4 &a, const bool &b){
  return bool4_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b);
}

inline bool4& operator -= (bool4 &a, const bool4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline bool4& operator -= (bool4 &a, const bool &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline bool4 operator * (const bool4 &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w);
}

inline bool4 operator * (const bool &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w);
}

inline bool4 operator * (const bool4 &a, const bool &b){
  return bool4_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b);
}

inline bool4& operator *= (bool4 &a, const bool4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline bool4& operator *= (bool4 &a, const bool &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline bool4 operator / (const bool4 &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w);
}

inline bool4 operator / (const bool &a, const bool4 &b){
  return bool4_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w);
}

inline bool4 operator / (const bool4 &a, const bool &b){
  return bool4_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b);
}

inline bool4& operator /= (bool4 &a, const bool4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline bool4& operator /= (bool4 &a, const bool &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const bool4& a){
  out << "[" << (a.x ? "true" : "false") << ", "
             << (a.y ? "true" : "false") << ", "
             << (a.z ? "true" : "false") << ", "
             << (a.w ? "true" : "false")
      << "]\n";

  return out;
}
#endif

//======================================


//---[ bool8 ]--------------------------
#  define bool8_CONSTRUCTOR(...) bool8(__VA_ARGS__)
class bool8{
public:
  union { bool s0, x; };
  union { bool s1, y; };
  union { bool s2, z; };
  union { bool s3, w; };
  bool s4;
  bool s5;
  bool s6;
  bool s7;

  inline bool8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_,
               const bool &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_,
               const bool &z_,
               const bool &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_,
               const bool &z_,
               const bool &w_,
               const bool &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_,
               const bool &z_,
               const bool &w_,
               const bool &s4_,
               const bool &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_,
               const bool &z_,
               const bool &w_,
               const bool &s4_,
               const bool &s5_,
               const bool &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline bool8(const bool &x_,
               const bool &y_,
               const bool &z_,
               const bool &w_,
               const bool &s4_,
               const bool &s5_,
               const bool &s6_,
               const bool &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline bool8 operator + (const bool8 &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w,
                           a.s4 + b.s4,
                           a.s5 + b.s5,
                           a.s6 + b.s6,
                           a.s7 + b.s7);
}

inline bool8 operator + (const bool &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w,
                           a + b.s4,
                           a + b.s5,
                           a + b.s6,
                           a + b.s7);
}

inline bool8 operator + (const bool8 &a, const bool &b){
  return bool8_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b,
                           a.s4 + b,
                           a.s5 + b,
                           a.s6 + b,
                           a.s7 + b);
}

inline bool8& operator += (bool8 &a, const bool8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline bool8& operator += (bool8 &a, const bool &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline bool8 operator - (const bool8 &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w,
                           a.s4 - b.s4,
                           a.s5 - b.s5,
                           a.s6 - b.s6,
                           a.s7 - b.s7);
}

inline bool8 operator - (const bool &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w,
                           a - b.s4,
                           a - b.s5,
                           a - b.s6,
                           a - b.s7);
}

inline bool8 operator - (const bool8 &a, const bool &b){
  return bool8_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b,
                           a.s4 - b,
                           a.s5 - b,
                           a.s6 - b,
                           a.s7 - b);
}

inline bool8& operator -= (bool8 &a, const bool8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline bool8& operator -= (bool8 &a, const bool &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline bool8 operator * (const bool8 &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w,
                           a.s4 * b.s4,
                           a.s5 * b.s5,
                           a.s6 * b.s6,
                           a.s7 * b.s7);
}

inline bool8 operator * (const bool &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w,
                           a * b.s4,
                           a * b.s5,
                           a * b.s6,
                           a * b.s7);
}

inline bool8 operator * (const bool8 &a, const bool &b){
  return bool8_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b,
                           a.s4 * b,
                           a.s5 * b,
                           a.s6 * b,
                           a.s7 * b);
}

inline bool8& operator *= (bool8 &a, const bool8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline bool8& operator *= (bool8 &a, const bool &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline bool8 operator / (const bool8 &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w,
                           a.s4 / b.s4,
                           a.s5 / b.s5,
                           a.s6 / b.s6,
                           a.s7 / b.s7);
}

inline bool8 operator / (const bool &a, const bool8 &b){
  return bool8_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w,
                           a / b.s4,
                           a / b.s5,
                           a / b.s6,
                           a / b.s7);
}

inline bool8 operator / (const bool8 &a, const bool &b){
  return bool8_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b,
                           a.s4 / b,
                           a.s5 / b,
                           a.s6 / b,
                           a.s7 / b);
}

inline bool8& operator /= (bool8 &a, const bool8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline bool8& operator /= (bool8 &a, const bool &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const bool8& a){
  out << "[" << (a.x ? "true" : "false") << ", "
             << (a.y ? "true" : "false") << ", "
             << (a.z ? "true" : "false") << ", "
             << (a.w ? "true" : "false") << ", "
             << (a.s4 ? "true" : "false") << ", "
             << (a.s5 ? "true" : "false") << ", "
             << (a.s6 ? "true" : "false") << ", "
             << (a.s7 ? "true" : "false")
      << "]\n";

  return out;
}
#endif

//======================================


//---[ bool16 ]-------------------------
#  define bool16_CONSTRUCTOR(...) bool16(__VA_ARGS__)
class bool16{
public:
  union { bool s0, x; };
  union { bool s1, y; };
  union { bool s2, z; };
  union { bool s3, w; };
  bool s4;
  bool s5;
  bool s6;
  bool s7;
  bool s8;
  bool s9;
  bool s10;
  bool s11;
  bool s12;
  bool s13;
  bool s14;
  bool s15;

  inline bool16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_,
                const bool &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_,
                const bool &s10_,
                const bool &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_,
                const bool &s10_,
                const bool &s11_,
                const bool &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_,
                const bool &s10_,
                const bool &s11_,
                const bool &s12_,
                const bool &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_,
                const bool &s10_,
                const bool &s11_,
                const bool &s12_,
                const bool &s13_,
                const bool &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline bool16(const bool &x_,
                const bool &y_,
                const bool &z_,
                const bool &w_,
                const bool &s4_,
                const bool &s5_,
                const bool &s6_,
                const bool &s7_,
                const bool &s8_,
                const bool &s9_,
                const bool &s10_,
                const bool &s11_,
                const bool &s12_,
                const bool &s13_,
                const bool &s14_,
                const bool &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline bool16 operator + (const bool16 &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w,
                            a.s4 + b.s4,
                            a.s5 + b.s5,
                            a.s6 + b.s6,
                            a.s7 + b.s7,
                            a.s8 + b.s8,
                            a.s9 + b.s9,
                            a.s10 + b.s10,
                            a.s11 + b.s11,
                            a.s12 + b.s12,
                            a.s13 + b.s13,
                            a.s14 + b.s14,
                            a.s15 + b.s15);
}

inline bool16 operator + (const bool &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w,
                            a + b.s4,
                            a + b.s5,
                            a + b.s6,
                            a + b.s7,
                            a + b.s8,
                            a + b.s9,
                            a + b.s10,
                            a + b.s11,
                            a + b.s12,
                            a + b.s13,
                            a + b.s14,
                            a + b.s15);
}

inline bool16 operator + (const bool16 &a, const bool &b){
  return bool16_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b,
                            a.s4 + b,
                            a.s5 + b,
                            a.s6 + b,
                            a.s7 + b,
                            a.s8 + b,
                            a.s9 + b,
                            a.s10 + b,
                            a.s11 + b,
                            a.s12 + b,
                            a.s13 + b,
                            a.s14 + b,
                            a.s15 + b);
}

inline bool16& operator += (bool16 &a, const bool16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline bool16& operator += (bool16 &a, const bool &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline bool16 operator - (const bool16 &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w,
                            a.s4 - b.s4,
                            a.s5 - b.s5,
                            a.s6 - b.s6,
                            a.s7 - b.s7,
                            a.s8 - b.s8,
                            a.s9 - b.s9,
                            a.s10 - b.s10,
                            a.s11 - b.s11,
                            a.s12 - b.s12,
                            a.s13 - b.s13,
                            a.s14 - b.s14,
                            a.s15 - b.s15);
}

inline bool16 operator - (const bool &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w,
                            a - b.s4,
                            a - b.s5,
                            a - b.s6,
                            a - b.s7,
                            a - b.s8,
                            a - b.s9,
                            a - b.s10,
                            a - b.s11,
                            a - b.s12,
                            a - b.s13,
                            a - b.s14,
                            a - b.s15);
}

inline bool16 operator - (const bool16 &a, const bool &b){
  return bool16_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b,
                            a.s4 - b,
                            a.s5 - b,
                            a.s6 - b,
                            a.s7 - b,
                            a.s8 - b,
                            a.s9 - b,
                            a.s10 - b,
                            a.s11 - b,
                            a.s12 - b,
                            a.s13 - b,
                            a.s14 - b,
                            a.s15 - b);
}

inline bool16& operator -= (bool16 &a, const bool16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline bool16& operator -= (bool16 &a, const bool &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline bool16 operator * (const bool16 &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w,
                            a.s4 * b.s4,
                            a.s5 * b.s5,
                            a.s6 * b.s6,
                            a.s7 * b.s7,
                            a.s8 * b.s8,
                            a.s9 * b.s9,
                            a.s10 * b.s10,
                            a.s11 * b.s11,
                            a.s12 * b.s12,
                            a.s13 * b.s13,
                            a.s14 * b.s14,
                            a.s15 * b.s15);
}

inline bool16 operator * (const bool &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w,
                            a * b.s4,
                            a * b.s5,
                            a * b.s6,
                            a * b.s7,
                            a * b.s8,
                            a * b.s9,
                            a * b.s10,
                            a * b.s11,
                            a * b.s12,
                            a * b.s13,
                            a * b.s14,
                            a * b.s15);
}

inline bool16 operator * (const bool16 &a, const bool &b){
  return bool16_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b,
                            a.s4 * b,
                            a.s5 * b,
                            a.s6 * b,
                            a.s7 * b,
                            a.s8 * b,
                            a.s9 * b,
                            a.s10 * b,
                            a.s11 * b,
                            a.s12 * b,
                            a.s13 * b,
                            a.s14 * b,
                            a.s15 * b);
}

inline bool16& operator *= (bool16 &a, const bool16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline bool16& operator *= (bool16 &a, const bool &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline bool16 operator / (const bool16 &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w,
                            a.s4 / b.s4,
                            a.s5 / b.s5,
                            a.s6 / b.s6,
                            a.s7 / b.s7,
                            a.s8 / b.s8,
                            a.s9 / b.s9,
                            a.s10 / b.s10,
                            a.s11 / b.s11,
                            a.s12 / b.s12,
                            a.s13 / b.s13,
                            a.s14 / b.s14,
                            a.s15 / b.s15);
}

inline bool16 operator / (const bool &a, const bool16 &b){
  return bool16_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w,
                            a / b.s4,
                            a / b.s5,
                            a / b.s6,
                            a / b.s7,
                            a / b.s8,
                            a / b.s9,
                            a / b.s10,
                            a / b.s11,
                            a / b.s12,
                            a / b.s13,
                            a / b.s14,
                            a / b.s15);
}

inline bool16 operator / (const bool16 &a, const bool &b){
  return bool16_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b,
                            a.s4 / b,
                            a.s5 / b,
                            a.s6 / b,
                            a.s7 / b,
                            a.s8 / b,
                            a.s9 / b,
                            a.s10 / b,
                            a.s11 / b,
                            a.s12 / b,
                            a.s13 / b,
                            a.s14 / b,
                            a.s15 / b);
}

inline bool16& operator /= (bool16 &a, const bool16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline bool16& operator /= (bool16 &a, const bool &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const bool16& a){
  out << "[" << (a.x ? "true" : "false") << ", "
             << (a.y ? "true" : "false") << ", "
             << (a.z ? "true" : "false") << ", "
             << (a.w ? "true" : "false") << ", "
             << (a.s4 ? "true" : "false") << ", "
             << (a.s5 ? "true" : "false") << ", "
             << (a.s6 ? "true" : "false") << ", "
             << (a.s7 ? "true" : "false") << ", "
             << (a.s8 ? "true" : "false") << ", "
             << (a.s9 ? "true" : "false") << ", "
             << (a.s10 ? "true" : "false") << ", "
             << (a.s11 ? "true" : "false") << ", "
             << (a.s12 ? "true" : "false") << ", "
             << (a.s13 ? "true" : "false") << ", "
             << (a.s14 ? "true" : "false") << ", "
             << (a.s15 ? "true" : "false")
      << "]\n";

  return out;
}
#endif

//======================================


//---[ char2 ]--------------------------
#if (OCCA_USING_CUDA == 0)
#  define char2_CONSTRUCTOR(...) char2(__VA_ARGS__)
#else
#  define char2_CONSTRUCTOR(...) make_char2(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class char2{
public:
  union { char s0, x; };
  union { char s1, y; };

  inline char2() : 
    x(0),
    y(0) {}

  inline char2(const char &x_) : 
    x(x_),
    y(0) {}

  inline char2(const char &x_,
               const char &y_) : 
    x(x_),
    y(y_) {}
};
#endif

inline char2 operator + (const char2 &a){
  return char2_CONSTRUCTOR(+a.x,
                           +a.y);
}

inline char2 operator ++ (char2 &a, int unused){
  return char2_CONSTRUCTOR(a.x++,
                           a.y++);
}

inline char2& operator ++ (char2 &a){
  ++a.x;
  ++a.y;
  return a;
}
inline char2 operator - (const char2 &a){
  return char2_CONSTRUCTOR(-a.x,
                           -a.y);
}

inline char2 operator -- (char2 &a, int unused){
  return char2_CONSTRUCTOR(a.x--,
                           a.y--);
}

inline char2& operator -- (char2 &a){
  --a.x;
  --a.y;
  return a;
}
inline char2 operator + (const char2 &a, const char2 &b){
  return char2_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y);
}

inline char2 operator + (const char &a, const char2 &b){
  return char2_CONSTRUCTOR(a + b.x,
                           a + b.y);
}

inline char2 operator + (const char2 &a, const char &b){
  return char2_CONSTRUCTOR(a.x + b,
                           a.y + b);
}

inline char2& operator += (char2 &a, const char2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline char2& operator += (char2 &a, const char &b){
  a.x += b;
  a.y += b;
  return a;
}
inline char2 operator - (const char2 &a, const char2 &b){
  return char2_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y);
}

inline char2 operator - (const char &a, const char2 &b){
  return char2_CONSTRUCTOR(a - b.x,
                           a - b.y);
}

inline char2 operator - (const char2 &a, const char &b){
  return char2_CONSTRUCTOR(a.x - b,
                           a.y - b);
}

inline char2& operator -= (char2 &a, const char2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline char2& operator -= (char2 &a, const char &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline char2 operator * (const char2 &a, const char2 &b){
  return char2_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y);
}

inline char2 operator * (const char &a, const char2 &b){
  return char2_CONSTRUCTOR(a * b.x,
                           a * b.y);
}

inline char2 operator * (const char2 &a, const char &b){
  return char2_CONSTRUCTOR(a.x * b,
                           a.y * b);
}

inline char2& operator *= (char2 &a, const char2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline char2& operator *= (char2 &a, const char &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline char2 operator / (const char2 &a, const char2 &b){
  return char2_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y);
}

inline char2 operator / (const char &a, const char2 &b){
  return char2_CONSTRUCTOR(a / b.x,
                           a / b.y);
}

inline char2 operator / (const char2 &a, const char &b){
  return char2_CONSTRUCTOR(a.x / b,
                           a.y / b);
}

inline char2& operator /= (char2 &a, const char2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline char2& operator /= (char2 &a, const char &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const char2& a){
  out << "[" << a.x << ", "
             << a.y
      << "]\n";

  return out;
}
#endif

//======================================


//---[ char3 ]--------------------------
#if (OCCA_USING_CUDA == 0)
#  define char3_CONSTRUCTOR(...) char3(__VA_ARGS__)
#else
#  define char3_CONSTRUCTOR(...) make_char3(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class char3{
public:
  union { char s0, x; };
  union { char s1, y; };
  union { char s2, z; };

  inline char3() : 
    x(0),
    y(0),
    z(0) {}

  inline char3(const char &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline char3(const char &x_,
               const char &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline char3(const char &x_,
               const char &y_,
               const char &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};
#endif

inline char3 operator + (const char3 &a){
  return char3_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z);
}

inline char3 operator ++ (char3 &a, int unused){
  return char3_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++);
}

inline char3& operator ++ (char3 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  return a;
}
inline char3 operator - (const char3 &a){
  return char3_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z);
}

inline char3 operator -- (char3 &a, int unused){
  return char3_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--);
}

inline char3& operator -- (char3 &a){
  --a.x;
  --a.y;
  --a.z;
  return a;
}
inline char3 operator + (const char3 &a, const char3 &b){
  return char3_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z);
}

inline char3 operator + (const char &a, const char3 &b){
  return char3_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z);
}

inline char3 operator + (const char3 &a, const char &b){
  return char3_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b);
}

inline char3& operator += (char3 &a, const char3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline char3& operator += (char3 &a, const char &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline char3 operator - (const char3 &a, const char3 &b){
  return char3_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z);
}

inline char3 operator - (const char &a, const char3 &b){
  return char3_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z);
}

inline char3 operator - (const char3 &a, const char &b){
  return char3_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b);
}

inline char3& operator -= (char3 &a, const char3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline char3& operator -= (char3 &a, const char &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline char3 operator * (const char3 &a, const char3 &b){
  return char3_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z);
}

inline char3 operator * (const char &a, const char3 &b){
  return char3_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z);
}

inline char3 operator * (const char3 &a, const char &b){
  return char3_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b);
}

inline char3& operator *= (char3 &a, const char3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline char3& operator *= (char3 &a, const char &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline char3 operator / (const char3 &a, const char3 &b){
  return char3_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z);
}

inline char3 operator / (const char &a, const char3 &b){
  return char3_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z);
}

inline char3 operator / (const char3 &a, const char &b){
  return char3_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b);
}

inline char3& operator /= (char3 &a, const char3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline char3& operator /= (char3 &a, const char &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const char3& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z
      << "]\n";

  return out;
}
#endif

//======================================


//---[ char4 ]--------------------------
#if (OCCA_USING_CUDA == 0)
#  define char4_CONSTRUCTOR(...) char4(__VA_ARGS__)
#else
#  define char4_CONSTRUCTOR(...) make_char4(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class char4{
public:
  union { char s0, x; };
  union { char s1, y; };
  union { char s2, z; };
  union { char s3, w; };

  inline char4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline char4(const char &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline char4(const char &x_,
               const char &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline char4(const char &x_,
               const char &y_,
               const char &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline char4(const char &x_,
               const char &y_,
               const char &z_,
               const char &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};
#endif

inline char4 operator + (const char4 &a){
  return char4_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z,
                           +a.w);
}

inline char4 operator ++ (char4 &a, int unused){
  return char4_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++,
                           a.w++);
}

inline char4& operator ++ (char4 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  return a;
}
inline char4 operator - (const char4 &a){
  return char4_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z,
                           -a.w);
}

inline char4 operator -- (char4 &a, int unused){
  return char4_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--,
                           a.w--);
}

inline char4& operator -- (char4 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  return a;
}
inline char4 operator + (const char4 &a, const char4 &b){
  return char4_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w);
}

inline char4 operator + (const char &a, const char4 &b){
  return char4_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w);
}

inline char4 operator + (const char4 &a, const char &b){
  return char4_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b);
}

inline char4& operator += (char4 &a, const char4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline char4& operator += (char4 &a, const char &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline char4 operator - (const char4 &a, const char4 &b){
  return char4_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w);
}

inline char4 operator - (const char &a, const char4 &b){
  return char4_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w);
}

inline char4 operator - (const char4 &a, const char &b){
  return char4_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b);
}

inline char4& operator -= (char4 &a, const char4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline char4& operator -= (char4 &a, const char &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline char4 operator * (const char4 &a, const char4 &b){
  return char4_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w);
}

inline char4 operator * (const char &a, const char4 &b){
  return char4_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w);
}

inline char4 operator * (const char4 &a, const char &b){
  return char4_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b);
}

inline char4& operator *= (char4 &a, const char4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline char4& operator *= (char4 &a, const char &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline char4 operator / (const char4 &a, const char4 &b){
  return char4_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w);
}

inline char4 operator / (const char &a, const char4 &b){
  return char4_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w);
}

inline char4 operator / (const char4 &a, const char &b){
  return char4_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b);
}

inline char4& operator /= (char4 &a, const char4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline char4& operator /= (char4 &a, const char &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const char4& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w
      << "]\n";

  return out;
}
#endif

//======================================


//---[ char8 ]--------------------------
#  define char8_CONSTRUCTOR(...) char8(__VA_ARGS__)
class char8{
public:
  union { char s0, x; };
  union { char s1, y; };
  union { char s2, z; };
  union { char s3, w; };
  char s4;
  char s5;
  char s6;
  char s7;

  inline char8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline char8(const char &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_,
               const char &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_,
               const char &z_,
               const char &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_,
               const char &z_,
               const char &w_,
               const char &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_,
               const char &z_,
               const char &w_,
               const char &s4_,
               const char &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_,
               const char &z_,
               const char &w_,
               const char &s4_,
               const char &s5_,
               const char &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline char8(const char &x_,
               const char &y_,
               const char &z_,
               const char &w_,
               const char &s4_,
               const char &s5_,
               const char &s6_,
               const char &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline char8 operator + (const char8 &a){
  return char8_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z,
                           +a.w,
                           +a.s4,
                           +a.s5,
                           +a.s6,
                           +a.s7);
}

inline char8 operator ++ (char8 &a, int unused){
  return char8_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++,
                           a.w++,
                           a.s4++,
                           a.s5++,
                           a.s6++,
                           a.s7++);
}

inline char8& operator ++ (char8 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  return a;
}
inline char8 operator - (const char8 &a){
  return char8_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z,
                           -a.w,
                           -a.s4,
                           -a.s5,
                           -a.s6,
                           -a.s7);
}

inline char8 operator -- (char8 &a, int unused){
  return char8_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--,
                           a.w--,
                           a.s4--,
                           a.s5--,
                           a.s6--,
                           a.s7--);
}

inline char8& operator -- (char8 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  return a;
}
inline char8 operator + (const char8 &a, const char8 &b){
  return char8_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w,
                           a.s4 + b.s4,
                           a.s5 + b.s5,
                           a.s6 + b.s6,
                           a.s7 + b.s7);
}

inline char8 operator + (const char &a, const char8 &b){
  return char8_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w,
                           a + b.s4,
                           a + b.s5,
                           a + b.s6,
                           a + b.s7);
}

inline char8 operator + (const char8 &a, const char &b){
  return char8_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b,
                           a.s4 + b,
                           a.s5 + b,
                           a.s6 + b,
                           a.s7 + b);
}

inline char8& operator += (char8 &a, const char8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline char8& operator += (char8 &a, const char &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline char8 operator - (const char8 &a, const char8 &b){
  return char8_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w,
                           a.s4 - b.s4,
                           a.s5 - b.s5,
                           a.s6 - b.s6,
                           a.s7 - b.s7);
}

inline char8 operator - (const char &a, const char8 &b){
  return char8_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w,
                           a - b.s4,
                           a - b.s5,
                           a - b.s6,
                           a - b.s7);
}

inline char8 operator - (const char8 &a, const char &b){
  return char8_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b,
                           a.s4 - b,
                           a.s5 - b,
                           a.s6 - b,
                           a.s7 - b);
}

inline char8& operator -= (char8 &a, const char8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline char8& operator -= (char8 &a, const char &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline char8 operator * (const char8 &a, const char8 &b){
  return char8_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w,
                           a.s4 * b.s4,
                           a.s5 * b.s5,
                           a.s6 * b.s6,
                           a.s7 * b.s7);
}

inline char8 operator * (const char &a, const char8 &b){
  return char8_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w,
                           a * b.s4,
                           a * b.s5,
                           a * b.s6,
                           a * b.s7);
}

inline char8 operator * (const char8 &a, const char &b){
  return char8_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b,
                           a.s4 * b,
                           a.s5 * b,
                           a.s6 * b,
                           a.s7 * b);
}

inline char8& operator *= (char8 &a, const char8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline char8& operator *= (char8 &a, const char &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline char8 operator / (const char8 &a, const char8 &b){
  return char8_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w,
                           a.s4 / b.s4,
                           a.s5 / b.s5,
                           a.s6 / b.s6,
                           a.s7 / b.s7);
}

inline char8 operator / (const char &a, const char8 &b){
  return char8_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w,
                           a / b.s4,
                           a / b.s5,
                           a / b.s6,
                           a / b.s7);
}

inline char8 operator / (const char8 &a, const char &b){
  return char8_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b,
                           a.s4 / b,
                           a.s5 / b,
                           a.s6 / b,
                           a.s7 / b);
}

inline char8& operator /= (char8 &a, const char8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline char8& operator /= (char8 &a, const char &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const char8& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7
      << "]\n";

  return out;
}
#endif

//======================================


//---[ char16 ]-------------------------
#  define char16_CONSTRUCTOR(...) char16(__VA_ARGS__)
class char16{
public:
  union { char s0, x; };
  union { char s1, y; };
  union { char s2, z; };
  union { char s3, w; };
  char s4;
  char s5;
  char s6;
  char s7;
  char s8;
  char s9;
  char s10;
  char s11;
  char s12;
  char s13;
  char s14;
  char s15;

  inline char16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_,
                const char &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_,
                const char &s10_,
                const char &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_,
                const char &s10_,
                const char &s11_,
                const char &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_,
                const char &s10_,
                const char &s11_,
                const char &s12_,
                const char &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_,
                const char &s10_,
                const char &s11_,
                const char &s12_,
                const char &s13_,
                const char &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline char16(const char &x_,
                const char &y_,
                const char &z_,
                const char &w_,
                const char &s4_,
                const char &s5_,
                const char &s6_,
                const char &s7_,
                const char &s8_,
                const char &s9_,
                const char &s10_,
                const char &s11_,
                const char &s12_,
                const char &s13_,
                const char &s14_,
                const char &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline char16 operator + (const char16 &a){
  return char16_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z,
                            +a.w,
                            +a.s4,
                            +a.s5,
                            +a.s6,
                            +a.s7,
                            +a.s8,
                            +a.s9,
                            +a.s10,
                            +a.s11,
                            +a.s12,
                            +a.s13,
                            +a.s14,
                            +a.s15);
}

inline char16 operator ++ (char16 &a, int unused){
  return char16_CONSTRUCTOR(a.x++,
                            a.y++,
                            a.z++,
                            a.w++,
                            a.s4++,
                            a.s5++,
                            a.s6++,
                            a.s7++,
                            a.s8++,
                            a.s9++,
                            a.s10++,
                            a.s11++,
                            a.s12++,
                            a.s13++,
                            a.s14++,
                            a.s15++);
}

inline char16& operator ++ (char16 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  ++a.s8;
  ++a.s9;
  ++a.s10;
  ++a.s11;
  ++a.s12;
  ++a.s13;
  ++a.s14;
  ++a.s15;
  return a;
}
inline char16 operator - (const char16 &a){
  return char16_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z,
                            -a.w,
                            -a.s4,
                            -a.s5,
                            -a.s6,
                            -a.s7,
                            -a.s8,
                            -a.s9,
                            -a.s10,
                            -a.s11,
                            -a.s12,
                            -a.s13,
                            -a.s14,
                            -a.s15);
}

inline char16 operator -- (char16 &a, int unused){
  return char16_CONSTRUCTOR(a.x--,
                            a.y--,
                            a.z--,
                            a.w--,
                            a.s4--,
                            a.s5--,
                            a.s6--,
                            a.s7--,
                            a.s8--,
                            a.s9--,
                            a.s10--,
                            a.s11--,
                            a.s12--,
                            a.s13--,
                            a.s14--,
                            a.s15--);
}

inline char16& operator -- (char16 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  --a.s8;
  --a.s9;
  --a.s10;
  --a.s11;
  --a.s12;
  --a.s13;
  --a.s14;
  --a.s15;
  return a;
}
inline char16 operator + (const char16 &a, const char16 &b){
  return char16_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w,
                            a.s4 + b.s4,
                            a.s5 + b.s5,
                            a.s6 + b.s6,
                            a.s7 + b.s7,
                            a.s8 + b.s8,
                            a.s9 + b.s9,
                            a.s10 + b.s10,
                            a.s11 + b.s11,
                            a.s12 + b.s12,
                            a.s13 + b.s13,
                            a.s14 + b.s14,
                            a.s15 + b.s15);
}

inline char16 operator + (const char &a, const char16 &b){
  return char16_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w,
                            a + b.s4,
                            a + b.s5,
                            a + b.s6,
                            a + b.s7,
                            a + b.s8,
                            a + b.s9,
                            a + b.s10,
                            a + b.s11,
                            a + b.s12,
                            a + b.s13,
                            a + b.s14,
                            a + b.s15);
}

inline char16 operator + (const char16 &a, const char &b){
  return char16_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b,
                            a.s4 + b,
                            a.s5 + b,
                            a.s6 + b,
                            a.s7 + b,
                            a.s8 + b,
                            a.s9 + b,
                            a.s10 + b,
                            a.s11 + b,
                            a.s12 + b,
                            a.s13 + b,
                            a.s14 + b,
                            a.s15 + b);
}

inline char16& operator += (char16 &a, const char16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline char16& operator += (char16 &a, const char &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline char16 operator - (const char16 &a, const char16 &b){
  return char16_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w,
                            a.s4 - b.s4,
                            a.s5 - b.s5,
                            a.s6 - b.s6,
                            a.s7 - b.s7,
                            a.s8 - b.s8,
                            a.s9 - b.s9,
                            a.s10 - b.s10,
                            a.s11 - b.s11,
                            a.s12 - b.s12,
                            a.s13 - b.s13,
                            a.s14 - b.s14,
                            a.s15 - b.s15);
}

inline char16 operator - (const char &a, const char16 &b){
  return char16_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w,
                            a - b.s4,
                            a - b.s5,
                            a - b.s6,
                            a - b.s7,
                            a - b.s8,
                            a - b.s9,
                            a - b.s10,
                            a - b.s11,
                            a - b.s12,
                            a - b.s13,
                            a - b.s14,
                            a - b.s15);
}

inline char16 operator - (const char16 &a, const char &b){
  return char16_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b,
                            a.s4 - b,
                            a.s5 - b,
                            a.s6 - b,
                            a.s7 - b,
                            a.s8 - b,
                            a.s9 - b,
                            a.s10 - b,
                            a.s11 - b,
                            a.s12 - b,
                            a.s13 - b,
                            a.s14 - b,
                            a.s15 - b);
}

inline char16& operator -= (char16 &a, const char16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline char16& operator -= (char16 &a, const char &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline char16 operator * (const char16 &a, const char16 &b){
  return char16_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w,
                            a.s4 * b.s4,
                            a.s5 * b.s5,
                            a.s6 * b.s6,
                            a.s7 * b.s7,
                            a.s8 * b.s8,
                            a.s9 * b.s9,
                            a.s10 * b.s10,
                            a.s11 * b.s11,
                            a.s12 * b.s12,
                            a.s13 * b.s13,
                            a.s14 * b.s14,
                            a.s15 * b.s15);
}

inline char16 operator * (const char &a, const char16 &b){
  return char16_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w,
                            a * b.s4,
                            a * b.s5,
                            a * b.s6,
                            a * b.s7,
                            a * b.s8,
                            a * b.s9,
                            a * b.s10,
                            a * b.s11,
                            a * b.s12,
                            a * b.s13,
                            a * b.s14,
                            a * b.s15);
}

inline char16 operator * (const char16 &a, const char &b){
  return char16_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b,
                            a.s4 * b,
                            a.s5 * b,
                            a.s6 * b,
                            a.s7 * b,
                            a.s8 * b,
                            a.s9 * b,
                            a.s10 * b,
                            a.s11 * b,
                            a.s12 * b,
                            a.s13 * b,
                            a.s14 * b,
                            a.s15 * b);
}

inline char16& operator *= (char16 &a, const char16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline char16& operator *= (char16 &a, const char &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline char16 operator / (const char16 &a, const char16 &b){
  return char16_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w,
                            a.s4 / b.s4,
                            a.s5 / b.s5,
                            a.s6 / b.s6,
                            a.s7 / b.s7,
                            a.s8 / b.s8,
                            a.s9 / b.s9,
                            a.s10 / b.s10,
                            a.s11 / b.s11,
                            a.s12 / b.s12,
                            a.s13 / b.s13,
                            a.s14 / b.s14,
                            a.s15 / b.s15);
}

inline char16 operator / (const char &a, const char16 &b){
  return char16_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w,
                            a / b.s4,
                            a / b.s5,
                            a / b.s6,
                            a / b.s7,
                            a / b.s8,
                            a / b.s9,
                            a / b.s10,
                            a / b.s11,
                            a / b.s12,
                            a / b.s13,
                            a / b.s14,
                            a / b.s15);
}

inline char16 operator / (const char16 &a, const char &b){
  return char16_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b,
                            a.s4 / b,
                            a.s5 / b,
                            a.s6 / b,
                            a.s7 / b,
                            a.s8 / b,
                            a.s9 / b,
                            a.s10 / b,
                            a.s11 / b,
                            a.s12 / b,
                            a.s13 / b,
                            a.s14 / b,
                            a.s15 / b);
}

inline char16& operator /= (char16 &a, const char16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline char16& operator /= (char16 &a, const char &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const char16& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7 << ", "
             << a.s8 << ", "
             << a.s9 << ", "
             << a.s10 << ", "
             << a.s11 << ", "
             << a.s12 << ", "
             << a.s13 << ", "
             << a.s14 << ", "
             << a.s15
      << "]\n";

  return out;
}
#endif

//======================================


//---[ short2 ]-------------------------
#if (OCCA_USING_CUDA == 0)
#  define short2_CONSTRUCTOR(...) short2(__VA_ARGS__)
#else
#  define short2_CONSTRUCTOR(...) make_short2(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class short2{
public:
  union { short s0, x; };
  union { short s1, y; };

  inline short2() : 
    x(0),
    y(0) {}

  inline short2(const short &x_) : 
    x(x_),
    y(0) {}

  inline short2(const short &x_,
                const short &y_) : 
    x(x_),
    y(y_) {}
};
#endif

inline short2 operator + (const short2 &a){
  return short2_CONSTRUCTOR(+a.x,
                            +a.y);
}

inline short2 operator ++ (short2 &a, int unused){
  return short2_CONSTRUCTOR(a.x++,
                            a.y++);
}

inline short2& operator ++ (short2 &a){
  ++a.x;
  ++a.y;
  return a;
}
inline short2 operator - (const short2 &a){
  return short2_CONSTRUCTOR(-a.x,
                            -a.y);
}

inline short2 operator -- (short2 &a, int unused){
  return short2_CONSTRUCTOR(a.x--,
                            a.y--);
}

inline short2& operator -- (short2 &a){
  --a.x;
  --a.y;
  return a;
}
inline short2 operator + (const short2 &a, const short2 &b){
  return short2_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y);
}

inline short2 operator + (const short &a, const short2 &b){
  return short2_CONSTRUCTOR(a + b.x,
                            a + b.y);
}

inline short2 operator + (const short2 &a, const short &b){
  return short2_CONSTRUCTOR(a.x + b,
                            a.y + b);
}

inline short2& operator += (short2 &a, const short2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline short2& operator += (short2 &a, const short &b){
  a.x += b;
  a.y += b;
  return a;
}
inline short2 operator - (const short2 &a, const short2 &b){
  return short2_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y);
}

inline short2 operator - (const short &a, const short2 &b){
  return short2_CONSTRUCTOR(a - b.x,
                            a - b.y);
}

inline short2 operator - (const short2 &a, const short &b){
  return short2_CONSTRUCTOR(a.x - b,
                            a.y - b);
}

inline short2& operator -= (short2 &a, const short2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline short2& operator -= (short2 &a, const short &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline short2 operator * (const short2 &a, const short2 &b){
  return short2_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y);
}

inline short2 operator * (const short &a, const short2 &b){
  return short2_CONSTRUCTOR(a * b.x,
                            a * b.y);
}

inline short2 operator * (const short2 &a, const short &b){
  return short2_CONSTRUCTOR(a.x * b,
                            a.y * b);
}

inline short2& operator *= (short2 &a, const short2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline short2& operator *= (short2 &a, const short &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline short2 operator / (const short2 &a, const short2 &b){
  return short2_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y);
}

inline short2 operator / (const short &a, const short2 &b){
  return short2_CONSTRUCTOR(a / b.x,
                            a / b.y);
}

inline short2 operator / (const short2 &a, const short &b){
  return short2_CONSTRUCTOR(a.x / b,
                            a.y / b);
}

inline short2& operator /= (short2 &a, const short2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline short2& operator /= (short2 &a, const short &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const short2& a){
  out << "[" << a.x << ", "
             << a.y
      << "]\n";

  return out;
}
#endif

//======================================


//---[ short3 ]-------------------------
#if (OCCA_USING_CUDA == 0)
#  define short3_CONSTRUCTOR(...) short3(__VA_ARGS__)
#else
#  define short3_CONSTRUCTOR(...) make_short3(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class short3{
public:
  union { short s0, x; };
  union { short s1, y; };
  union { short s2, z; };

  inline short3() : 
    x(0),
    y(0),
    z(0) {}

  inline short3(const short &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline short3(const short &x_,
                const short &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline short3(const short &x_,
                const short &y_,
                const short &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};
#endif

inline short3 operator + (const short3 &a){
  return short3_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z);
}

inline short3 operator ++ (short3 &a, int unused){
  return short3_CONSTRUCTOR(a.x++,
                            a.y++,
                            a.z++);
}

inline short3& operator ++ (short3 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  return a;
}
inline short3 operator - (const short3 &a){
  return short3_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z);
}

inline short3 operator -- (short3 &a, int unused){
  return short3_CONSTRUCTOR(a.x--,
                            a.y--,
                            a.z--);
}

inline short3& operator -- (short3 &a){
  --a.x;
  --a.y;
  --a.z;
  return a;
}
inline short3 operator + (const short3 &a, const short3 &b){
  return short3_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z);
}

inline short3 operator + (const short &a, const short3 &b){
  return short3_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z);
}

inline short3 operator + (const short3 &a, const short &b){
  return short3_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b);
}

inline short3& operator += (short3 &a, const short3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline short3& operator += (short3 &a, const short &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline short3 operator - (const short3 &a, const short3 &b){
  return short3_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z);
}

inline short3 operator - (const short &a, const short3 &b){
  return short3_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z);
}

inline short3 operator - (const short3 &a, const short &b){
  return short3_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b);
}

inline short3& operator -= (short3 &a, const short3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline short3& operator -= (short3 &a, const short &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline short3 operator * (const short3 &a, const short3 &b){
  return short3_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z);
}

inline short3 operator * (const short &a, const short3 &b){
  return short3_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z);
}

inline short3 operator * (const short3 &a, const short &b){
  return short3_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b);
}

inline short3& operator *= (short3 &a, const short3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline short3& operator *= (short3 &a, const short &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline short3 operator / (const short3 &a, const short3 &b){
  return short3_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z);
}

inline short3 operator / (const short &a, const short3 &b){
  return short3_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z);
}

inline short3 operator / (const short3 &a, const short &b){
  return short3_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b);
}

inline short3& operator /= (short3 &a, const short3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline short3& operator /= (short3 &a, const short &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const short3& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z
      << "]\n";

  return out;
}
#endif

//======================================


//---[ short4 ]-------------------------
#if (OCCA_USING_CUDA == 0)
#  define short4_CONSTRUCTOR(...) short4(__VA_ARGS__)
#else
#  define short4_CONSTRUCTOR(...) make_short4(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class short4{
public:
  union { short s0, x; };
  union { short s1, y; };
  union { short s2, z; };
  union { short s3, w; };

  inline short4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline short4(const short &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline short4(const short &x_,
                const short &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline short4(const short &x_,
                const short &y_,
                const short &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline short4(const short &x_,
                const short &y_,
                const short &z_,
                const short &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};
#endif

inline short4 operator + (const short4 &a){
  return short4_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z,
                            +a.w);
}

inline short4 operator ++ (short4 &a, int unused){
  return short4_CONSTRUCTOR(a.x++,
                            a.y++,
                            a.z++,
                            a.w++);
}

inline short4& operator ++ (short4 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  return a;
}
inline short4 operator - (const short4 &a){
  return short4_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z,
                            -a.w);
}

inline short4 operator -- (short4 &a, int unused){
  return short4_CONSTRUCTOR(a.x--,
                            a.y--,
                            a.z--,
                            a.w--);
}

inline short4& operator -- (short4 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  return a;
}
inline short4 operator + (const short4 &a, const short4 &b){
  return short4_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w);
}

inline short4 operator + (const short &a, const short4 &b){
  return short4_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w);
}

inline short4 operator + (const short4 &a, const short &b){
  return short4_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b);
}

inline short4& operator += (short4 &a, const short4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline short4& operator += (short4 &a, const short &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline short4 operator - (const short4 &a, const short4 &b){
  return short4_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w);
}

inline short4 operator - (const short &a, const short4 &b){
  return short4_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w);
}

inline short4 operator - (const short4 &a, const short &b){
  return short4_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b);
}

inline short4& operator -= (short4 &a, const short4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline short4& operator -= (short4 &a, const short &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline short4 operator * (const short4 &a, const short4 &b){
  return short4_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w);
}

inline short4 operator * (const short &a, const short4 &b){
  return short4_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w);
}

inline short4 operator * (const short4 &a, const short &b){
  return short4_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b);
}

inline short4& operator *= (short4 &a, const short4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline short4& operator *= (short4 &a, const short &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline short4 operator / (const short4 &a, const short4 &b){
  return short4_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w);
}

inline short4 operator / (const short &a, const short4 &b){
  return short4_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w);
}

inline short4 operator / (const short4 &a, const short &b){
  return short4_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b);
}

inline short4& operator /= (short4 &a, const short4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline short4& operator /= (short4 &a, const short &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const short4& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w
      << "]\n";

  return out;
}
#endif

//======================================


//---[ short8 ]-------------------------
#  define short8_CONSTRUCTOR(...) short8(__VA_ARGS__)
class short8{
public:
  union { short s0, x; };
  union { short s1, y; };
  union { short s2, z; };
  union { short s3, w; };
  short s4;
  short s5;
  short s6;
  short s7;

  inline short8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline short8(const short &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_,
                const short &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_,
                const short &z_,
                const short &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_,
                const short &z_,
                const short &w_,
                const short &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_,
                const short &z_,
                const short &w_,
                const short &s4_,
                const short &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_,
                const short &z_,
                const short &w_,
                const short &s4_,
                const short &s5_,
                const short &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline short8(const short &x_,
                const short &y_,
                const short &z_,
                const short &w_,
                const short &s4_,
                const short &s5_,
                const short &s6_,
                const short &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline short8 operator + (const short8 &a){
  return short8_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z,
                            +a.w,
                            +a.s4,
                            +a.s5,
                            +a.s6,
                            +a.s7);
}

inline short8 operator ++ (short8 &a, int unused){
  return short8_CONSTRUCTOR(a.x++,
                            a.y++,
                            a.z++,
                            a.w++,
                            a.s4++,
                            a.s5++,
                            a.s6++,
                            a.s7++);
}

inline short8& operator ++ (short8 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  return a;
}
inline short8 operator - (const short8 &a){
  return short8_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z,
                            -a.w,
                            -a.s4,
                            -a.s5,
                            -a.s6,
                            -a.s7);
}

inline short8 operator -- (short8 &a, int unused){
  return short8_CONSTRUCTOR(a.x--,
                            a.y--,
                            a.z--,
                            a.w--,
                            a.s4--,
                            a.s5--,
                            a.s6--,
                            a.s7--);
}

inline short8& operator -- (short8 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  return a;
}
inline short8 operator + (const short8 &a, const short8 &b){
  return short8_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w,
                            a.s4 + b.s4,
                            a.s5 + b.s5,
                            a.s6 + b.s6,
                            a.s7 + b.s7);
}

inline short8 operator + (const short &a, const short8 &b){
  return short8_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w,
                            a + b.s4,
                            a + b.s5,
                            a + b.s6,
                            a + b.s7);
}

inline short8 operator + (const short8 &a, const short &b){
  return short8_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b,
                            a.s4 + b,
                            a.s5 + b,
                            a.s6 + b,
                            a.s7 + b);
}

inline short8& operator += (short8 &a, const short8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline short8& operator += (short8 &a, const short &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline short8 operator - (const short8 &a, const short8 &b){
  return short8_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w,
                            a.s4 - b.s4,
                            a.s5 - b.s5,
                            a.s6 - b.s6,
                            a.s7 - b.s7);
}

inline short8 operator - (const short &a, const short8 &b){
  return short8_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w,
                            a - b.s4,
                            a - b.s5,
                            a - b.s6,
                            a - b.s7);
}

inline short8 operator - (const short8 &a, const short &b){
  return short8_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b,
                            a.s4 - b,
                            a.s5 - b,
                            a.s6 - b,
                            a.s7 - b);
}

inline short8& operator -= (short8 &a, const short8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline short8& operator -= (short8 &a, const short &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline short8 operator * (const short8 &a, const short8 &b){
  return short8_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w,
                            a.s4 * b.s4,
                            a.s5 * b.s5,
                            a.s6 * b.s6,
                            a.s7 * b.s7);
}

inline short8 operator * (const short &a, const short8 &b){
  return short8_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w,
                            a * b.s4,
                            a * b.s5,
                            a * b.s6,
                            a * b.s7);
}

inline short8 operator * (const short8 &a, const short &b){
  return short8_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b,
                            a.s4 * b,
                            a.s5 * b,
                            a.s6 * b,
                            a.s7 * b);
}

inline short8& operator *= (short8 &a, const short8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline short8& operator *= (short8 &a, const short &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline short8 operator / (const short8 &a, const short8 &b){
  return short8_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w,
                            a.s4 / b.s4,
                            a.s5 / b.s5,
                            a.s6 / b.s6,
                            a.s7 / b.s7);
}

inline short8 operator / (const short &a, const short8 &b){
  return short8_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w,
                            a / b.s4,
                            a / b.s5,
                            a / b.s6,
                            a / b.s7);
}

inline short8 operator / (const short8 &a, const short &b){
  return short8_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b,
                            a.s4 / b,
                            a.s5 / b,
                            a.s6 / b,
                            a.s7 / b);
}

inline short8& operator /= (short8 &a, const short8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline short8& operator /= (short8 &a, const short &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const short8& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7
      << "]\n";

  return out;
}
#endif

//======================================


//---[ short16 ]------------------------
#  define short16_CONSTRUCTOR(...) short16(__VA_ARGS__)
class short16{
public:
  union { short s0, x; };
  union { short s1, y; };
  union { short s2, z; };
  union { short s3, w; };
  short s4;
  short s5;
  short s6;
  short s7;
  short s8;
  short s9;
  short s10;
  short s11;
  short s12;
  short s13;
  short s14;
  short s15;

  inline short16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_,
                 const short &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_,
                 const short &s10_,
                 const short &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_,
                 const short &s10_,
                 const short &s11_,
                 const short &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_,
                 const short &s10_,
                 const short &s11_,
                 const short &s12_,
                 const short &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_,
                 const short &s10_,
                 const short &s11_,
                 const short &s12_,
                 const short &s13_,
                 const short &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline short16(const short &x_,
                 const short &y_,
                 const short &z_,
                 const short &w_,
                 const short &s4_,
                 const short &s5_,
                 const short &s6_,
                 const short &s7_,
                 const short &s8_,
                 const short &s9_,
                 const short &s10_,
                 const short &s11_,
                 const short &s12_,
                 const short &s13_,
                 const short &s14_,
                 const short &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline short16 operator + (const short16 &a){
  return short16_CONSTRUCTOR(+a.x,
                             +a.y,
                             +a.z,
                             +a.w,
                             +a.s4,
                             +a.s5,
                             +a.s6,
                             +a.s7,
                             +a.s8,
                             +a.s9,
                             +a.s10,
                             +a.s11,
                             +a.s12,
                             +a.s13,
                             +a.s14,
                             +a.s15);
}

inline short16 operator ++ (short16 &a, int unused){
  return short16_CONSTRUCTOR(a.x++,
                             a.y++,
                             a.z++,
                             a.w++,
                             a.s4++,
                             a.s5++,
                             a.s6++,
                             a.s7++,
                             a.s8++,
                             a.s9++,
                             a.s10++,
                             a.s11++,
                             a.s12++,
                             a.s13++,
                             a.s14++,
                             a.s15++);
}

inline short16& operator ++ (short16 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  ++a.s8;
  ++a.s9;
  ++a.s10;
  ++a.s11;
  ++a.s12;
  ++a.s13;
  ++a.s14;
  ++a.s15;
  return a;
}
inline short16 operator - (const short16 &a){
  return short16_CONSTRUCTOR(-a.x,
                             -a.y,
                             -a.z,
                             -a.w,
                             -a.s4,
                             -a.s5,
                             -a.s6,
                             -a.s7,
                             -a.s8,
                             -a.s9,
                             -a.s10,
                             -a.s11,
                             -a.s12,
                             -a.s13,
                             -a.s14,
                             -a.s15);
}

inline short16 operator -- (short16 &a, int unused){
  return short16_CONSTRUCTOR(a.x--,
                             a.y--,
                             a.z--,
                             a.w--,
                             a.s4--,
                             a.s5--,
                             a.s6--,
                             a.s7--,
                             a.s8--,
                             a.s9--,
                             a.s10--,
                             a.s11--,
                             a.s12--,
                             a.s13--,
                             a.s14--,
                             a.s15--);
}

inline short16& operator -- (short16 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  --a.s8;
  --a.s9;
  --a.s10;
  --a.s11;
  --a.s12;
  --a.s13;
  --a.s14;
  --a.s15;
  return a;
}
inline short16 operator + (const short16 &a, const short16 &b){
  return short16_CONSTRUCTOR(a.x + b.x,
                             a.y + b.y,
                             a.z + b.z,
                             a.w + b.w,
                             a.s4 + b.s4,
                             a.s5 + b.s5,
                             a.s6 + b.s6,
                             a.s7 + b.s7,
                             a.s8 + b.s8,
                             a.s9 + b.s9,
                             a.s10 + b.s10,
                             a.s11 + b.s11,
                             a.s12 + b.s12,
                             a.s13 + b.s13,
                             a.s14 + b.s14,
                             a.s15 + b.s15);
}

inline short16 operator + (const short &a, const short16 &b){
  return short16_CONSTRUCTOR(a + b.x,
                             a + b.y,
                             a + b.z,
                             a + b.w,
                             a + b.s4,
                             a + b.s5,
                             a + b.s6,
                             a + b.s7,
                             a + b.s8,
                             a + b.s9,
                             a + b.s10,
                             a + b.s11,
                             a + b.s12,
                             a + b.s13,
                             a + b.s14,
                             a + b.s15);
}

inline short16 operator + (const short16 &a, const short &b){
  return short16_CONSTRUCTOR(a.x + b,
                             a.y + b,
                             a.z + b,
                             a.w + b,
                             a.s4 + b,
                             a.s5 + b,
                             a.s6 + b,
                             a.s7 + b,
                             a.s8 + b,
                             a.s9 + b,
                             a.s10 + b,
                             a.s11 + b,
                             a.s12 + b,
                             a.s13 + b,
                             a.s14 + b,
                             a.s15 + b);
}

inline short16& operator += (short16 &a, const short16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline short16& operator += (short16 &a, const short &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline short16 operator - (const short16 &a, const short16 &b){
  return short16_CONSTRUCTOR(a.x - b.x,
                             a.y - b.y,
                             a.z - b.z,
                             a.w - b.w,
                             a.s4 - b.s4,
                             a.s5 - b.s5,
                             a.s6 - b.s6,
                             a.s7 - b.s7,
                             a.s8 - b.s8,
                             a.s9 - b.s9,
                             a.s10 - b.s10,
                             a.s11 - b.s11,
                             a.s12 - b.s12,
                             a.s13 - b.s13,
                             a.s14 - b.s14,
                             a.s15 - b.s15);
}

inline short16 operator - (const short &a, const short16 &b){
  return short16_CONSTRUCTOR(a - b.x,
                             a - b.y,
                             a - b.z,
                             a - b.w,
                             a - b.s4,
                             a - b.s5,
                             a - b.s6,
                             a - b.s7,
                             a - b.s8,
                             a - b.s9,
                             a - b.s10,
                             a - b.s11,
                             a - b.s12,
                             a - b.s13,
                             a - b.s14,
                             a - b.s15);
}

inline short16 operator - (const short16 &a, const short &b){
  return short16_CONSTRUCTOR(a.x - b,
                             a.y - b,
                             a.z - b,
                             a.w - b,
                             a.s4 - b,
                             a.s5 - b,
                             a.s6 - b,
                             a.s7 - b,
                             a.s8 - b,
                             a.s9 - b,
                             a.s10 - b,
                             a.s11 - b,
                             a.s12 - b,
                             a.s13 - b,
                             a.s14 - b,
                             a.s15 - b);
}

inline short16& operator -= (short16 &a, const short16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline short16& operator -= (short16 &a, const short &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline short16 operator * (const short16 &a, const short16 &b){
  return short16_CONSTRUCTOR(a.x * b.x,
                             a.y * b.y,
                             a.z * b.z,
                             a.w * b.w,
                             a.s4 * b.s4,
                             a.s5 * b.s5,
                             a.s6 * b.s6,
                             a.s7 * b.s7,
                             a.s8 * b.s8,
                             a.s9 * b.s9,
                             a.s10 * b.s10,
                             a.s11 * b.s11,
                             a.s12 * b.s12,
                             a.s13 * b.s13,
                             a.s14 * b.s14,
                             a.s15 * b.s15);
}

inline short16 operator * (const short &a, const short16 &b){
  return short16_CONSTRUCTOR(a * b.x,
                             a * b.y,
                             a * b.z,
                             a * b.w,
                             a * b.s4,
                             a * b.s5,
                             a * b.s6,
                             a * b.s7,
                             a * b.s8,
                             a * b.s9,
                             a * b.s10,
                             a * b.s11,
                             a * b.s12,
                             a * b.s13,
                             a * b.s14,
                             a * b.s15);
}

inline short16 operator * (const short16 &a, const short &b){
  return short16_CONSTRUCTOR(a.x * b,
                             a.y * b,
                             a.z * b,
                             a.w * b,
                             a.s4 * b,
                             a.s5 * b,
                             a.s6 * b,
                             a.s7 * b,
                             a.s8 * b,
                             a.s9 * b,
                             a.s10 * b,
                             a.s11 * b,
                             a.s12 * b,
                             a.s13 * b,
                             a.s14 * b,
                             a.s15 * b);
}

inline short16& operator *= (short16 &a, const short16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline short16& operator *= (short16 &a, const short &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline short16 operator / (const short16 &a, const short16 &b){
  return short16_CONSTRUCTOR(a.x / b.x,
                             a.y / b.y,
                             a.z / b.z,
                             a.w / b.w,
                             a.s4 / b.s4,
                             a.s5 / b.s5,
                             a.s6 / b.s6,
                             a.s7 / b.s7,
                             a.s8 / b.s8,
                             a.s9 / b.s9,
                             a.s10 / b.s10,
                             a.s11 / b.s11,
                             a.s12 / b.s12,
                             a.s13 / b.s13,
                             a.s14 / b.s14,
                             a.s15 / b.s15);
}

inline short16 operator / (const short &a, const short16 &b){
  return short16_CONSTRUCTOR(a / b.x,
                             a / b.y,
                             a / b.z,
                             a / b.w,
                             a / b.s4,
                             a / b.s5,
                             a / b.s6,
                             a / b.s7,
                             a / b.s8,
                             a / b.s9,
                             a / b.s10,
                             a / b.s11,
                             a / b.s12,
                             a / b.s13,
                             a / b.s14,
                             a / b.s15);
}

inline short16 operator / (const short16 &a, const short &b){
  return short16_CONSTRUCTOR(a.x / b,
                             a.y / b,
                             a.z / b,
                             a.w / b,
                             a.s4 / b,
                             a.s5 / b,
                             a.s6 / b,
                             a.s7 / b,
                             a.s8 / b,
                             a.s9 / b,
                             a.s10 / b,
                             a.s11 / b,
                             a.s12 / b,
                             a.s13 / b,
                             a.s14 / b,
                             a.s15 / b);
}

inline short16& operator /= (short16 &a, const short16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline short16& operator /= (short16 &a, const short &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const short16& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7 << ", "
             << a.s8 << ", "
             << a.s9 << ", "
             << a.s10 << ", "
             << a.s11 << ", "
             << a.s12 << ", "
             << a.s13 << ", "
             << a.s14 << ", "
             << a.s15
      << "]\n";

  return out;
}
#endif

//======================================


//---[ int2 ]---------------------------
#if (OCCA_USING_CUDA == 0)
#  define int2_CONSTRUCTOR(...) int2(__VA_ARGS__)
#else
#  define int2_CONSTRUCTOR(...) make_int2(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class int2{
public:
  union { int s0, x; };
  union { int s1, y; };

  inline int2() : 
    x(0),
    y(0) {}

  inline int2(const int &x_) : 
    x(x_),
    y(0) {}

  inline int2(const int &x_,
              const int &y_) : 
    x(x_),
    y(y_) {}
};
#endif

inline int2 operator + (const int2 &a){
  return int2_CONSTRUCTOR(+a.x,
                          +a.y);
}

inline int2 operator ++ (int2 &a, int unused){
  return int2_CONSTRUCTOR(a.x++,
                          a.y++);
}

inline int2& operator ++ (int2 &a){
  ++a.x;
  ++a.y;
  return a;
}
inline int2 operator - (const int2 &a){
  return int2_CONSTRUCTOR(-a.x,
                          -a.y);
}

inline int2 operator -- (int2 &a, int unused){
  return int2_CONSTRUCTOR(a.x--,
                          a.y--);
}

inline int2& operator -- (int2 &a){
  --a.x;
  --a.y;
  return a;
}
inline int2 operator + (const int2 &a, const int2 &b){
  return int2_CONSTRUCTOR(a.x + b.x,
                          a.y + b.y);
}

inline int2 operator + (const int &a, const int2 &b){
  return int2_CONSTRUCTOR(a + b.x,
                          a + b.y);
}

inline int2 operator + (const int2 &a, const int &b){
  return int2_CONSTRUCTOR(a.x + b,
                          a.y + b);
}

inline int2& operator += (int2 &a, const int2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline int2& operator += (int2 &a, const int &b){
  a.x += b;
  a.y += b;
  return a;
}
inline int2 operator - (const int2 &a, const int2 &b){
  return int2_CONSTRUCTOR(a.x - b.x,
                          a.y - b.y);
}

inline int2 operator - (const int &a, const int2 &b){
  return int2_CONSTRUCTOR(a - b.x,
                          a - b.y);
}

inline int2 operator - (const int2 &a, const int &b){
  return int2_CONSTRUCTOR(a.x - b,
                          a.y - b);
}

inline int2& operator -= (int2 &a, const int2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline int2& operator -= (int2 &a, const int &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline int2 operator * (const int2 &a, const int2 &b){
  return int2_CONSTRUCTOR(a.x * b.x,
                          a.y * b.y);
}

inline int2 operator * (const int &a, const int2 &b){
  return int2_CONSTRUCTOR(a * b.x,
                          a * b.y);
}

inline int2 operator * (const int2 &a, const int &b){
  return int2_CONSTRUCTOR(a.x * b,
                          a.y * b);
}

inline int2& operator *= (int2 &a, const int2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline int2& operator *= (int2 &a, const int &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline int2 operator / (const int2 &a, const int2 &b){
  return int2_CONSTRUCTOR(a.x / b.x,
                          a.y / b.y);
}

inline int2 operator / (const int &a, const int2 &b){
  return int2_CONSTRUCTOR(a / b.x,
                          a / b.y);
}

inline int2 operator / (const int2 &a, const int &b){
  return int2_CONSTRUCTOR(a.x / b,
                          a.y / b);
}

inline int2& operator /= (int2 &a, const int2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline int2& operator /= (int2 &a, const int &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const int2& a){
  out << "[" << a.x << ", "
             << a.y
      << "]\n";

  return out;
}
#endif

//======================================


//---[ int3 ]---------------------------
#if (OCCA_USING_CUDA == 0)
#  define int3_CONSTRUCTOR(...) int3(__VA_ARGS__)
#else
#  define int3_CONSTRUCTOR(...) make_int3(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class int3{
public:
  union { int s0, x; };
  union { int s1, y; };
  union { int s2, z; };

  inline int3() : 
    x(0),
    y(0),
    z(0) {}

  inline int3(const int &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline int3(const int &x_,
              const int &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline int3(const int &x_,
              const int &y_,
              const int &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};
#endif

inline int3 operator + (const int3 &a){
  return int3_CONSTRUCTOR(+a.x,
                          +a.y,
                          +a.z);
}

inline int3 operator ++ (int3 &a, int unused){
  return int3_CONSTRUCTOR(a.x++,
                          a.y++,
                          a.z++);
}

inline int3& operator ++ (int3 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  return a;
}
inline int3 operator - (const int3 &a){
  return int3_CONSTRUCTOR(-a.x,
                          -a.y,
                          -a.z);
}

inline int3 operator -- (int3 &a, int unused){
  return int3_CONSTRUCTOR(a.x--,
                          a.y--,
                          a.z--);
}

inline int3& operator -- (int3 &a){
  --a.x;
  --a.y;
  --a.z;
  return a;
}
inline int3 operator + (const int3 &a, const int3 &b){
  return int3_CONSTRUCTOR(a.x + b.x,
                          a.y + b.y,
                          a.z + b.z);
}

inline int3 operator + (const int &a, const int3 &b){
  return int3_CONSTRUCTOR(a + b.x,
                          a + b.y,
                          a + b.z);
}

inline int3 operator + (const int3 &a, const int &b){
  return int3_CONSTRUCTOR(a.x + b,
                          a.y + b,
                          a.z + b);
}

inline int3& operator += (int3 &a, const int3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline int3& operator += (int3 &a, const int &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline int3 operator - (const int3 &a, const int3 &b){
  return int3_CONSTRUCTOR(a.x - b.x,
                          a.y - b.y,
                          a.z - b.z);
}

inline int3 operator - (const int &a, const int3 &b){
  return int3_CONSTRUCTOR(a - b.x,
                          a - b.y,
                          a - b.z);
}

inline int3 operator - (const int3 &a, const int &b){
  return int3_CONSTRUCTOR(a.x - b,
                          a.y - b,
                          a.z - b);
}

inline int3& operator -= (int3 &a, const int3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline int3& operator -= (int3 &a, const int &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline int3 operator * (const int3 &a, const int3 &b){
  return int3_CONSTRUCTOR(a.x * b.x,
                          a.y * b.y,
                          a.z * b.z);
}

inline int3 operator * (const int &a, const int3 &b){
  return int3_CONSTRUCTOR(a * b.x,
                          a * b.y,
                          a * b.z);
}

inline int3 operator * (const int3 &a, const int &b){
  return int3_CONSTRUCTOR(a.x * b,
                          a.y * b,
                          a.z * b);
}

inline int3& operator *= (int3 &a, const int3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline int3& operator *= (int3 &a, const int &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline int3 operator / (const int3 &a, const int3 &b){
  return int3_CONSTRUCTOR(a.x / b.x,
                          a.y / b.y,
                          a.z / b.z);
}

inline int3 operator / (const int &a, const int3 &b){
  return int3_CONSTRUCTOR(a / b.x,
                          a / b.y,
                          a / b.z);
}

inline int3 operator / (const int3 &a, const int &b){
  return int3_CONSTRUCTOR(a.x / b,
                          a.y / b,
                          a.z / b);
}

inline int3& operator /= (int3 &a, const int3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline int3& operator /= (int3 &a, const int &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const int3& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z
      << "]\n";

  return out;
}
#endif

//======================================


//---[ int4 ]---------------------------
#if (OCCA_USING_CUDA == 0)
#  define int4_CONSTRUCTOR(...) int4(__VA_ARGS__)
#else
#  define int4_CONSTRUCTOR(...) make_int4(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class int4{
public:
  union { int s0, x; };
  union { int s1, y; };
  union { int s2, z; };
  union { int s3, w; };

  inline int4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline int4(const int &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline int4(const int &x_,
              const int &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline int4(const int &x_,
              const int &y_,
              const int &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline int4(const int &x_,
              const int &y_,
              const int &z_,
              const int &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};
#endif

inline int4 operator + (const int4 &a){
  return int4_CONSTRUCTOR(+a.x,
                          +a.y,
                          +a.z,
                          +a.w);
}

inline int4 operator ++ (int4 &a, int unused){
  return int4_CONSTRUCTOR(a.x++,
                          a.y++,
                          a.z++,
                          a.w++);
}

inline int4& operator ++ (int4 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  return a;
}
inline int4 operator - (const int4 &a){
  return int4_CONSTRUCTOR(-a.x,
                          -a.y,
                          -a.z,
                          -a.w);
}

inline int4 operator -- (int4 &a, int unused){
  return int4_CONSTRUCTOR(a.x--,
                          a.y--,
                          a.z--,
                          a.w--);
}

inline int4& operator -- (int4 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  return a;
}
inline int4 operator + (const int4 &a, const int4 &b){
  return int4_CONSTRUCTOR(a.x + b.x,
                          a.y + b.y,
                          a.z + b.z,
                          a.w + b.w);
}

inline int4 operator + (const int &a, const int4 &b){
  return int4_CONSTRUCTOR(a + b.x,
                          a + b.y,
                          a + b.z,
                          a + b.w);
}

inline int4 operator + (const int4 &a, const int &b){
  return int4_CONSTRUCTOR(a.x + b,
                          a.y + b,
                          a.z + b,
                          a.w + b);
}

inline int4& operator += (int4 &a, const int4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline int4& operator += (int4 &a, const int &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline int4 operator - (const int4 &a, const int4 &b){
  return int4_CONSTRUCTOR(a.x - b.x,
                          a.y - b.y,
                          a.z - b.z,
                          a.w - b.w);
}

inline int4 operator - (const int &a, const int4 &b){
  return int4_CONSTRUCTOR(a - b.x,
                          a - b.y,
                          a - b.z,
                          a - b.w);
}

inline int4 operator - (const int4 &a, const int &b){
  return int4_CONSTRUCTOR(a.x - b,
                          a.y - b,
                          a.z - b,
                          a.w - b);
}

inline int4& operator -= (int4 &a, const int4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline int4& operator -= (int4 &a, const int &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline int4 operator * (const int4 &a, const int4 &b){
  return int4_CONSTRUCTOR(a.x * b.x,
                          a.y * b.y,
                          a.z * b.z,
                          a.w * b.w);
}

inline int4 operator * (const int &a, const int4 &b){
  return int4_CONSTRUCTOR(a * b.x,
                          a * b.y,
                          a * b.z,
                          a * b.w);
}

inline int4 operator * (const int4 &a, const int &b){
  return int4_CONSTRUCTOR(a.x * b,
                          a.y * b,
                          a.z * b,
                          a.w * b);
}

inline int4& operator *= (int4 &a, const int4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline int4& operator *= (int4 &a, const int &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline int4 operator / (const int4 &a, const int4 &b){
  return int4_CONSTRUCTOR(a.x / b.x,
                          a.y / b.y,
                          a.z / b.z,
                          a.w / b.w);
}

inline int4 operator / (const int &a, const int4 &b){
  return int4_CONSTRUCTOR(a / b.x,
                          a / b.y,
                          a / b.z,
                          a / b.w);
}

inline int4 operator / (const int4 &a, const int &b){
  return int4_CONSTRUCTOR(a.x / b,
                          a.y / b,
                          a.z / b,
                          a.w / b);
}

inline int4& operator /= (int4 &a, const int4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline int4& operator /= (int4 &a, const int &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const int4& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w
      << "]\n";

  return out;
}
#endif

//======================================


//---[ int8 ]---------------------------
#  define int8_CONSTRUCTOR(...) int8(__VA_ARGS__)
class int8{
public:
  union { int s0, x; };
  union { int s1, y; };
  union { int s2, z; };
  union { int s3, w; };
  int s4;
  int s5;
  int s6;
  int s7;

  inline int8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline int8(const int &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_,
              const int &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_,
              const int &z_,
              const int &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_,
              const int &z_,
              const int &w_,
              const int &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_,
              const int &z_,
              const int &w_,
              const int &s4_,
              const int &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_,
              const int &z_,
              const int &w_,
              const int &s4_,
              const int &s5_,
              const int &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline int8(const int &x_,
              const int &y_,
              const int &z_,
              const int &w_,
              const int &s4_,
              const int &s5_,
              const int &s6_,
              const int &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline int8 operator + (const int8 &a){
  return int8_CONSTRUCTOR(+a.x,
                          +a.y,
                          +a.z,
                          +a.w,
                          +a.s4,
                          +a.s5,
                          +a.s6,
                          +a.s7);
}

inline int8 operator ++ (int8 &a, int unused){
  return int8_CONSTRUCTOR(a.x++,
                          a.y++,
                          a.z++,
                          a.w++,
                          a.s4++,
                          a.s5++,
                          a.s6++,
                          a.s7++);
}

inline int8& operator ++ (int8 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  return a;
}
inline int8 operator - (const int8 &a){
  return int8_CONSTRUCTOR(-a.x,
                          -a.y,
                          -a.z,
                          -a.w,
                          -a.s4,
                          -a.s5,
                          -a.s6,
                          -a.s7);
}

inline int8 operator -- (int8 &a, int unused){
  return int8_CONSTRUCTOR(a.x--,
                          a.y--,
                          a.z--,
                          a.w--,
                          a.s4--,
                          a.s5--,
                          a.s6--,
                          a.s7--);
}

inline int8& operator -- (int8 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  return a;
}
inline int8 operator + (const int8 &a, const int8 &b){
  return int8_CONSTRUCTOR(a.x + b.x,
                          a.y + b.y,
                          a.z + b.z,
                          a.w + b.w,
                          a.s4 + b.s4,
                          a.s5 + b.s5,
                          a.s6 + b.s6,
                          a.s7 + b.s7);
}

inline int8 operator + (const int &a, const int8 &b){
  return int8_CONSTRUCTOR(a + b.x,
                          a + b.y,
                          a + b.z,
                          a + b.w,
                          a + b.s4,
                          a + b.s5,
                          a + b.s6,
                          a + b.s7);
}

inline int8 operator + (const int8 &a, const int &b){
  return int8_CONSTRUCTOR(a.x + b,
                          a.y + b,
                          a.z + b,
                          a.w + b,
                          a.s4 + b,
                          a.s5 + b,
                          a.s6 + b,
                          a.s7 + b);
}

inline int8& operator += (int8 &a, const int8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline int8& operator += (int8 &a, const int &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline int8 operator - (const int8 &a, const int8 &b){
  return int8_CONSTRUCTOR(a.x - b.x,
                          a.y - b.y,
                          a.z - b.z,
                          a.w - b.w,
                          a.s4 - b.s4,
                          a.s5 - b.s5,
                          a.s6 - b.s6,
                          a.s7 - b.s7);
}

inline int8 operator - (const int &a, const int8 &b){
  return int8_CONSTRUCTOR(a - b.x,
                          a - b.y,
                          a - b.z,
                          a - b.w,
                          a - b.s4,
                          a - b.s5,
                          a - b.s6,
                          a - b.s7);
}

inline int8 operator - (const int8 &a, const int &b){
  return int8_CONSTRUCTOR(a.x - b,
                          a.y - b,
                          a.z - b,
                          a.w - b,
                          a.s4 - b,
                          a.s5 - b,
                          a.s6 - b,
                          a.s7 - b);
}

inline int8& operator -= (int8 &a, const int8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline int8& operator -= (int8 &a, const int &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline int8 operator * (const int8 &a, const int8 &b){
  return int8_CONSTRUCTOR(a.x * b.x,
                          a.y * b.y,
                          a.z * b.z,
                          a.w * b.w,
                          a.s4 * b.s4,
                          a.s5 * b.s5,
                          a.s6 * b.s6,
                          a.s7 * b.s7);
}

inline int8 operator * (const int &a, const int8 &b){
  return int8_CONSTRUCTOR(a * b.x,
                          a * b.y,
                          a * b.z,
                          a * b.w,
                          a * b.s4,
                          a * b.s5,
                          a * b.s6,
                          a * b.s7);
}

inline int8 operator * (const int8 &a, const int &b){
  return int8_CONSTRUCTOR(a.x * b,
                          a.y * b,
                          a.z * b,
                          a.w * b,
                          a.s4 * b,
                          a.s5 * b,
                          a.s6 * b,
                          a.s7 * b);
}

inline int8& operator *= (int8 &a, const int8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline int8& operator *= (int8 &a, const int &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline int8 operator / (const int8 &a, const int8 &b){
  return int8_CONSTRUCTOR(a.x / b.x,
                          a.y / b.y,
                          a.z / b.z,
                          a.w / b.w,
                          a.s4 / b.s4,
                          a.s5 / b.s5,
                          a.s6 / b.s6,
                          a.s7 / b.s7);
}

inline int8 operator / (const int &a, const int8 &b){
  return int8_CONSTRUCTOR(a / b.x,
                          a / b.y,
                          a / b.z,
                          a / b.w,
                          a / b.s4,
                          a / b.s5,
                          a / b.s6,
                          a / b.s7);
}

inline int8 operator / (const int8 &a, const int &b){
  return int8_CONSTRUCTOR(a.x / b,
                          a.y / b,
                          a.z / b,
                          a.w / b,
                          a.s4 / b,
                          a.s5 / b,
                          a.s6 / b,
                          a.s7 / b);
}

inline int8& operator /= (int8 &a, const int8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline int8& operator /= (int8 &a, const int &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const int8& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7
      << "]\n";

  return out;
}
#endif

//======================================


//---[ int16 ]--------------------------
#  define int16_CONSTRUCTOR(...) int16(__VA_ARGS__)
class int16{
public:
  union { int s0, x; };
  union { int s1, y; };
  union { int s2, z; };
  union { int s3, w; };
  int s4;
  int s5;
  int s6;
  int s7;
  int s8;
  int s9;
  int s10;
  int s11;
  int s12;
  int s13;
  int s14;
  int s15;

  inline int16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_,
               const int &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_,
               const int &s10_,
               const int &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_,
               const int &s10_,
               const int &s11_,
               const int &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_,
               const int &s10_,
               const int &s11_,
               const int &s12_,
               const int &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_,
               const int &s10_,
               const int &s11_,
               const int &s12_,
               const int &s13_,
               const int &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline int16(const int &x_,
               const int &y_,
               const int &z_,
               const int &w_,
               const int &s4_,
               const int &s5_,
               const int &s6_,
               const int &s7_,
               const int &s8_,
               const int &s9_,
               const int &s10_,
               const int &s11_,
               const int &s12_,
               const int &s13_,
               const int &s14_,
               const int &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline int16 operator + (const int16 &a){
  return int16_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z,
                           +a.w,
                           +a.s4,
                           +a.s5,
                           +a.s6,
                           +a.s7,
                           +a.s8,
                           +a.s9,
                           +a.s10,
                           +a.s11,
                           +a.s12,
                           +a.s13,
                           +a.s14,
                           +a.s15);
}

inline int16 operator ++ (int16 &a, int unused){
  return int16_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++,
                           a.w++,
                           a.s4++,
                           a.s5++,
                           a.s6++,
                           a.s7++,
                           a.s8++,
                           a.s9++,
                           a.s10++,
                           a.s11++,
                           a.s12++,
                           a.s13++,
                           a.s14++,
                           a.s15++);
}

inline int16& operator ++ (int16 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  ++a.s8;
  ++a.s9;
  ++a.s10;
  ++a.s11;
  ++a.s12;
  ++a.s13;
  ++a.s14;
  ++a.s15;
  return a;
}
inline int16 operator - (const int16 &a){
  return int16_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z,
                           -a.w,
                           -a.s4,
                           -a.s5,
                           -a.s6,
                           -a.s7,
                           -a.s8,
                           -a.s9,
                           -a.s10,
                           -a.s11,
                           -a.s12,
                           -a.s13,
                           -a.s14,
                           -a.s15);
}

inline int16 operator -- (int16 &a, int unused){
  return int16_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--,
                           a.w--,
                           a.s4--,
                           a.s5--,
                           a.s6--,
                           a.s7--,
                           a.s8--,
                           a.s9--,
                           a.s10--,
                           a.s11--,
                           a.s12--,
                           a.s13--,
                           a.s14--,
                           a.s15--);
}

inline int16& operator -- (int16 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  --a.s8;
  --a.s9;
  --a.s10;
  --a.s11;
  --a.s12;
  --a.s13;
  --a.s14;
  --a.s15;
  return a;
}
inline int16 operator + (const int16 &a, const int16 &b){
  return int16_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w,
                           a.s4 + b.s4,
                           a.s5 + b.s5,
                           a.s6 + b.s6,
                           a.s7 + b.s7,
                           a.s8 + b.s8,
                           a.s9 + b.s9,
                           a.s10 + b.s10,
                           a.s11 + b.s11,
                           a.s12 + b.s12,
                           a.s13 + b.s13,
                           a.s14 + b.s14,
                           a.s15 + b.s15);
}

inline int16 operator + (const int &a, const int16 &b){
  return int16_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w,
                           a + b.s4,
                           a + b.s5,
                           a + b.s6,
                           a + b.s7,
                           a + b.s8,
                           a + b.s9,
                           a + b.s10,
                           a + b.s11,
                           a + b.s12,
                           a + b.s13,
                           a + b.s14,
                           a + b.s15);
}

inline int16 operator + (const int16 &a, const int &b){
  return int16_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b,
                           a.s4 + b,
                           a.s5 + b,
                           a.s6 + b,
                           a.s7 + b,
                           a.s8 + b,
                           a.s9 + b,
                           a.s10 + b,
                           a.s11 + b,
                           a.s12 + b,
                           a.s13 + b,
                           a.s14 + b,
                           a.s15 + b);
}

inline int16& operator += (int16 &a, const int16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline int16& operator += (int16 &a, const int &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline int16 operator - (const int16 &a, const int16 &b){
  return int16_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w,
                           a.s4 - b.s4,
                           a.s5 - b.s5,
                           a.s6 - b.s6,
                           a.s7 - b.s7,
                           a.s8 - b.s8,
                           a.s9 - b.s9,
                           a.s10 - b.s10,
                           a.s11 - b.s11,
                           a.s12 - b.s12,
                           a.s13 - b.s13,
                           a.s14 - b.s14,
                           a.s15 - b.s15);
}

inline int16 operator - (const int &a, const int16 &b){
  return int16_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w,
                           a - b.s4,
                           a - b.s5,
                           a - b.s6,
                           a - b.s7,
                           a - b.s8,
                           a - b.s9,
                           a - b.s10,
                           a - b.s11,
                           a - b.s12,
                           a - b.s13,
                           a - b.s14,
                           a - b.s15);
}

inline int16 operator - (const int16 &a, const int &b){
  return int16_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b,
                           a.s4 - b,
                           a.s5 - b,
                           a.s6 - b,
                           a.s7 - b,
                           a.s8 - b,
                           a.s9 - b,
                           a.s10 - b,
                           a.s11 - b,
                           a.s12 - b,
                           a.s13 - b,
                           a.s14 - b,
                           a.s15 - b);
}

inline int16& operator -= (int16 &a, const int16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline int16& operator -= (int16 &a, const int &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline int16 operator * (const int16 &a, const int16 &b){
  return int16_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w,
                           a.s4 * b.s4,
                           a.s5 * b.s5,
                           a.s6 * b.s6,
                           a.s7 * b.s7,
                           a.s8 * b.s8,
                           a.s9 * b.s9,
                           a.s10 * b.s10,
                           a.s11 * b.s11,
                           a.s12 * b.s12,
                           a.s13 * b.s13,
                           a.s14 * b.s14,
                           a.s15 * b.s15);
}

inline int16 operator * (const int &a, const int16 &b){
  return int16_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w,
                           a * b.s4,
                           a * b.s5,
                           a * b.s6,
                           a * b.s7,
                           a * b.s8,
                           a * b.s9,
                           a * b.s10,
                           a * b.s11,
                           a * b.s12,
                           a * b.s13,
                           a * b.s14,
                           a * b.s15);
}

inline int16 operator * (const int16 &a, const int &b){
  return int16_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b,
                           a.s4 * b,
                           a.s5 * b,
                           a.s6 * b,
                           a.s7 * b,
                           a.s8 * b,
                           a.s9 * b,
                           a.s10 * b,
                           a.s11 * b,
                           a.s12 * b,
                           a.s13 * b,
                           a.s14 * b,
                           a.s15 * b);
}

inline int16& operator *= (int16 &a, const int16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline int16& operator *= (int16 &a, const int &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline int16 operator / (const int16 &a, const int16 &b){
  return int16_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w,
                           a.s4 / b.s4,
                           a.s5 / b.s5,
                           a.s6 / b.s6,
                           a.s7 / b.s7,
                           a.s8 / b.s8,
                           a.s9 / b.s9,
                           a.s10 / b.s10,
                           a.s11 / b.s11,
                           a.s12 / b.s12,
                           a.s13 / b.s13,
                           a.s14 / b.s14,
                           a.s15 / b.s15);
}

inline int16 operator / (const int &a, const int16 &b){
  return int16_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w,
                           a / b.s4,
                           a / b.s5,
                           a / b.s6,
                           a / b.s7,
                           a / b.s8,
                           a / b.s9,
                           a / b.s10,
                           a / b.s11,
                           a / b.s12,
                           a / b.s13,
                           a / b.s14,
                           a / b.s15);
}

inline int16 operator / (const int16 &a, const int &b){
  return int16_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b,
                           a.s4 / b,
                           a.s5 / b,
                           a.s6 / b,
                           a.s7 / b,
                           a.s8 / b,
                           a.s9 / b,
                           a.s10 / b,
                           a.s11 / b,
                           a.s12 / b,
                           a.s13 / b,
                           a.s14 / b,
                           a.s15 / b);
}

inline int16& operator /= (int16 &a, const int16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline int16& operator /= (int16 &a, const int &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const int16& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7 << ", "
             << a.s8 << ", "
             << a.s9 << ", "
             << a.s10 << ", "
             << a.s11 << ", "
             << a.s12 << ", "
             << a.s13 << ", "
             << a.s14 << ", "
             << a.s15
      << "]\n";

  return out;
}
#endif

//======================================


//---[ long2 ]--------------------------
#if (OCCA_USING_CUDA == 0)
#  define long2_CONSTRUCTOR(...) long2(__VA_ARGS__)
#else
#  define long2_CONSTRUCTOR(...) make_long2(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class long2{
public:
  union { long s0, x; };
  union { long s1, y; };

  inline long2() : 
    x(0),
    y(0) {}

  inline long2(const long &x_) : 
    x(x_),
    y(0) {}

  inline long2(const long &x_,
               const long &y_) : 
    x(x_),
    y(y_) {}
};
#endif

inline long2 operator + (const long2 &a){
  return long2_CONSTRUCTOR(+a.x,
                           +a.y);
}

inline long2 operator ++ (long2 &a, int unused){
  return long2_CONSTRUCTOR(a.x++,
                           a.y++);
}

inline long2& operator ++ (long2 &a){
  ++a.x;
  ++a.y;
  return a;
}
inline long2 operator - (const long2 &a){
  return long2_CONSTRUCTOR(-a.x,
                           -a.y);
}

inline long2 operator -- (long2 &a, int unused){
  return long2_CONSTRUCTOR(a.x--,
                           a.y--);
}

inline long2& operator -- (long2 &a){
  --a.x;
  --a.y;
  return a;
}
inline long2 operator + (const long2 &a, const long2 &b){
  return long2_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y);
}

inline long2 operator + (const long &a, const long2 &b){
  return long2_CONSTRUCTOR(a + b.x,
                           a + b.y);
}

inline long2 operator + (const long2 &a, const long &b){
  return long2_CONSTRUCTOR(a.x + b,
                           a.y + b);
}

inline long2& operator += (long2 &a, const long2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline long2& operator += (long2 &a, const long &b){
  a.x += b;
  a.y += b;
  return a;
}
inline long2 operator - (const long2 &a, const long2 &b){
  return long2_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y);
}

inline long2 operator - (const long &a, const long2 &b){
  return long2_CONSTRUCTOR(a - b.x,
                           a - b.y);
}

inline long2 operator - (const long2 &a, const long &b){
  return long2_CONSTRUCTOR(a.x - b,
                           a.y - b);
}

inline long2& operator -= (long2 &a, const long2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline long2& operator -= (long2 &a, const long &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline long2 operator * (const long2 &a, const long2 &b){
  return long2_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y);
}

inline long2 operator * (const long &a, const long2 &b){
  return long2_CONSTRUCTOR(a * b.x,
                           a * b.y);
}

inline long2 operator * (const long2 &a, const long &b){
  return long2_CONSTRUCTOR(a.x * b,
                           a.y * b);
}

inline long2& operator *= (long2 &a, const long2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline long2& operator *= (long2 &a, const long &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline long2 operator / (const long2 &a, const long2 &b){
  return long2_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y);
}

inline long2 operator / (const long &a, const long2 &b){
  return long2_CONSTRUCTOR(a / b.x,
                           a / b.y);
}

inline long2 operator / (const long2 &a, const long &b){
  return long2_CONSTRUCTOR(a.x / b,
                           a.y / b);
}

inline long2& operator /= (long2 &a, const long2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline long2& operator /= (long2 &a, const long &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const long2& a){
  out << "[" << a.x << ", "
             << a.y
      << "]\n";

  return out;
}
#endif

//======================================


//---[ long3 ]--------------------------
#if (OCCA_USING_CUDA == 0)
#  define long3_CONSTRUCTOR(...) long3(__VA_ARGS__)
#else
#  define long3_CONSTRUCTOR(...) make_long3(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class long3{
public:
  union { long s0, x; };
  union { long s1, y; };
  union { long s2, z; };

  inline long3() : 
    x(0),
    y(0),
    z(0) {}

  inline long3(const long &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline long3(const long &x_,
               const long &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline long3(const long &x_,
               const long &y_,
               const long &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};
#endif

inline long3 operator + (const long3 &a){
  return long3_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z);
}

inline long3 operator ++ (long3 &a, int unused){
  return long3_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++);
}

inline long3& operator ++ (long3 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  return a;
}
inline long3 operator - (const long3 &a){
  return long3_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z);
}

inline long3 operator -- (long3 &a, int unused){
  return long3_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--);
}

inline long3& operator -- (long3 &a){
  --a.x;
  --a.y;
  --a.z;
  return a;
}
inline long3 operator + (const long3 &a, const long3 &b){
  return long3_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z);
}

inline long3 operator + (const long &a, const long3 &b){
  return long3_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z);
}

inline long3 operator + (const long3 &a, const long &b){
  return long3_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b);
}

inline long3& operator += (long3 &a, const long3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline long3& operator += (long3 &a, const long &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline long3 operator - (const long3 &a, const long3 &b){
  return long3_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z);
}

inline long3 operator - (const long &a, const long3 &b){
  return long3_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z);
}

inline long3 operator - (const long3 &a, const long &b){
  return long3_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b);
}

inline long3& operator -= (long3 &a, const long3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline long3& operator -= (long3 &a, const long &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline long3 operator * (const long3 &a, const long3 &b){
  return long3_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z);
}

inline long3 operator * (const long &a, const long3 &b){
  return long3_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z);
}

inline long3 operator * (const long3 &a, const long &b){
  return long3_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b);
}

inline long3& operator *= (long3 &a, const long3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline long3& operator *= (long3 &a, const long &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline long3 operator / (const long3 &a, const long3 &b){
  return long3_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z);
}

inline long3 operator / (const long &a, const long3 &b){
  return long3_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z);
}

inline long3 operator / (const long3 &a, const long &b){
  return long3_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b);
}

inline long3& operator /= (long3 &a, const long3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline long3& operator /= (long3 &a, const long &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const long3& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z
      << "]\n";

  return out;
}
#endif

//======================================


//---[ long4 ]--------------------------
#if (OCCA_USING_CUDA == 0)
#  define long4_CONSTRUCTOR(...) long4(__VA_ARGS__)
#else
#  define long4_CONSTRUCTOR(...) make_long4(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class long4{
public:
  union { long s0, x; };
  union { long s1, y; };
  union { long s2, z; };
  union { long s3, w; };

  inline long4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline long4(const long &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline long4(const long &x_,
               const long &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline long4(const long &x_,
               const long &y_,
               const long &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline long4(const long &x_,
               const long &y_,
               const long &z_,
               const long &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};
#endif

inline long4 operator + (const long4 &a){
  return long4_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z,
                           +a.w);
}

inline long4 operator ++ (long4 &a, int unused){
  return long4_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++,
                           a.w++);
}

inline long4& operator ++ (long4 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  return a;
}
inline long4 operator - (const long4 &a){
  return long4_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z,
                           -a.w);
}

inline long4 operator -- (long4 &a, int unused){
  return long4_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--,
                           a.w--);
}

inline long4& operator -- (long4 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  return a;
}
inline long4 operator + (const long4 &a, const long4 &b){
  return long4_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w);
}

inline long4 operator + (const long &a, const long4 &b){
  return long4_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w);
}

inline long4 operator + (const long4 &a, const long &b){
  return long4_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b);
}

inline long4& operator += (long4 &a, const long4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline long4& operator += (long4 &a, const long &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline long4 operator - (const long4 &a, const long4 &b){
  return long4_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w);
}

inline long4 operator - (const long &a, const long4 &b){
  return long4_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w);
}

inline long4 operator - (const long4 &a, const long &b){
  return long4_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b);
}

inline long4& operator -= (long4 &a, const long4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline long4& operator -= (long4 &a, const long &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline long4 operator * (const long4 &a, const long4 &b){
  return long4_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w);
}

inline long4 operator * (const long &a, const long4 &b){
  return long4_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w);
}

inline long4 operator * (const long4 &a, const long &b){
  return long4_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b);
}

inline long4& operator *= (long4 &a, const long4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline long4& operator *= (long4 &a, const long &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline long4 operator / (const long4 &a, const long4 &b){
  return long4_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w);
}

inline long4 operator / (const long &a, const long4 &b){
  return long4_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w);
}

inline long4 operator / (const long4 &a, const long &b){
  return long4_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b);
}

inline long4& operator /= (long4 &a, const long4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline long4& operator /= (long4 &a, const long &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const long4& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w
      << "]\n";

  return out;
}
#endif

//======================================


//---[ long8 ]--------------------------
#  define long8_CONSTRUCTOR(...) long8(__VA_ARGS__)
class long8{
public:
  union { long s0, x; };
  union { long s1, y; };
  union { long s2, z; };
  union { long s3, w; };
  long s4;
  long s5;
  long s6;
  long s7;

  inline long8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline long8(const long &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_,
               const long &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_,
               const long &z_,
               const long &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_,
               const long &z_,
               const long &w_,
               const long &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_,
               const long &z_,
               const long &w_,
               const long &s4_,
               const long &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_,
               const long &z_,
               const long &w_,
               const long &s4_,
               const long &s5_,
               const long &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline long8(const long &x_,
               const long &y_,
               const long &z_,
               const long &w_,
               const long &s4_,
               const long &s5_,
               const long &s6_,
               const long &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline long8 operator + (const long8 &a){
  return long8_CONSTRUCTOR(+a.x,
                           +a.y,
                           +a.z,
                           +a.w,
                           +a.s4,
                           +a.s5,
                           +a.s6,
                           +a.s7);
}

inline long8 operator ++ (long8 &a, int unused){
  return long8_CONSTRUCTOR(a.x++,
                           a.y++,
                           a.z++,
                           a.w++,
                           a.s4++,
                           a.s5++,
                           a.s6++,
                           a.s7++);
}

inline long8& operator ++ (long8 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  return a;
}
inline long8 operator - (const long8 &a){
  return long8_CONSTRUCTOR(-a.x,
                           -a.y,
                           -a.z,
                           -a.w,
                           -a.s4,
                           -a.s5,
                           -a.s6,
                           -a.s7);
}

inline long8 operator -- (long8 &a, int unused){
  return long8_CONSTRUCTOR(a.x--,
                           a.y--,
                           a.z--,
                           a.w--,
                           a.s4--,
                           a.s5--,
                           a.s6--,
                           a.s7--);
}

inline long8& operator -- (long8 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  return a;
}
inline long8 operator + (const long8 &a, const long8 &b){
  return long8_CONSTRUCTOR(a.x + b.x,
                           a.y + b.y,
                           a.z + b.z,
                           a.w + b.w,
                           a.s4 + b.s4,
                           a.s5 + b.s5,
                           a.s6 + b.s6,
                           a.s7 + b.s7);
}

inline long8 operator + (const long &a, const long8 &b){
  return long8_CONSTRUCTOR(a + b.x,
                           a + b.y,
                           a + b.z,
                           a + b.w,
                           a + b.s4,
                           a + b.s5,
                           a + b.s6,
                           a + b.s7);
}

inline long8 operator + (const long8 &a, const long &b){
  return long8_CONSTRUCTOR(a.x + b,
                           a.y + b,
                           a.z + b,
                           a.w + b,
                           a.s4 + b,
                           a.s5 + b,
                           a.s6 + b,
                           a.s7 + b);
}

inline long8& operator += (long8 &a, const long8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline long8& operator += (long8 &a, const long &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline long8 operator - (const long8 &a, const long8 &b){
  return long8_CONSTRUCTOR(a.x - b.x,
                           a.y - b.y,
                           a.z - b.z,
                           a.w - b.w,
                           a.s4 - b.s4,
                           a.s5 - b.s5,
                           a.s6 - b.s6,
                           a.s7 - b.s7);
}

inline long8 operator - (const long &a, const long8 &b){
  return long8_CONSTRUCTOR(a - b.x,
                           a - b.y,
                           a - b.z,
                           a - b.w,
                           a - b.s4,
                           a - b.s5,
                           a - b.s6,
                           a - b.s7);
}

inline long8 operator - (const long8 &a, const long &b){
  return long8_CONSTRUCTOR(a.x - b,
                           a.y - b,
                           a.z - b,
                           a.w - b,
                           a.s4 - b,
                           a.s5 - b,
                           a.s6 - b,
                           a.s7 - b);
}

inline long8& operator -= (long8 &a, const long8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline long8& operator -= (long8 &a, const long &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline long8 operator * (const long8 &a, const long8 &b){
  return long8_CONSTRUCTOR(a.x * b.x,
                           a.y * b.y,
                           a.z * b.z,
                           a.w * b.w,
                           a.s4 * b.s4,
                           a.s5 * b.s5,
                           a.s6 * b.s6,
                           a.s7 * b.s7);
}

inline long8 operator * (const long &a, const long8 &b){
  return long8_CONSTRUCTOR(a * b.x,
                           a * b.y,
                           a * b.z,
                           a * b.w,
                           a * b.s4,
                           a * b.s5,
                           a * b.s6,
                           a * b.s7);
}

inline long8 operator * (const long8 &a, const long &b){
  return long8_CONSTRUCTOR(a.x * b,
                           a.y * b,
                           a.z * b,
                           a.w * b,
                           a.s4 * b,
                           a.s5 * b,
                           a.s6 * b,
                           a.s7 * b);
}

inline long8& operator *= (long8 &a, const long8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline long8& operator *= (long8 &a, const long &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline long8 operator / (const long8 &a, const long8 &b){
  return long8_CONSTRUCTOR(a.x / b.x,
                           a.y / b.y,
                           a.z / b.z,
                           a.w / b.w,
                           a.s4 / b.s4,
                           a.s5 / b.s5,
                           a.s6 / b.s6,
                           a.s7 / b.s7);
}

inline long8 operator / (const long &a, const long8 &b){
  return long8_CONSTRUCTOR(a / b.x,
                           a / b.y,
                           a / b.z,
                           a / b.w,
                           a / b.s4,
                           a / b.s5,
                           a / b.s6,
                           a / b.s7);
}

inline long8 operator / (const long8 &a, const long &b){
  return long8_CONSTRUCTOR(a.x / b,
                           a.y / b,
                           a.z / b,
                           a.w / b,
                           a.s4 / b,
                           a.s5 / b,
                           a.s6 / b,
                           a.s7 / b);
}

inline long8& operator /= (long8 &a, const long8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline long8& operator /= (long8 &a, const long &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const long8& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7
      << "]\n";

  return out;
}
#endif

//======================================


//---[ long16 ]-------------------------
#  define long16_CONSTRUCTOR(...) long16(__VA_ARGS__)
class long16{
public:
  union { long s0, x; };
  union { long s1, y; };
  union { long s2, z; };
  union { long s3, w; };
  long s4;
  long s5;
  long s6;
  long s7;
  long s8;
  long s9;
  long s10;
  long s11;
  long s12;
  long s13;
  long s14;
  long s15;

  inline long16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_,
                const long &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_,
                const long &s10_,
                const long &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_,
                const long &s10_,
                const long &s11_,
                const long &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_,
                const long &s10_,
                const long &s11_,
                const long &s12_,
                const long &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_,
                const long &s10_,
                const long &s11_,
                const long &s12_,
                const long &s13_,
                const long &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline long16(const long &x_,
                const long &y_,
                const long &z_,
                const long &w_,
                const long &s4_,
                const long &s5_,
                const long &s6_,
                const long &s7_,
                const long &s8_,
                const long &s9_,
                const long &s10_,
                const long &s11_,
                const long &s12_,
                const long &s13_,
                const long &s14_,
                const long &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline long16 operator + (const long16 &a){
  return long16_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z,
                            +a.w,
                            +a.s4,
                            +a.s5,
                            +a.s6,
                            +a.s7,
                            +a.s8,
                            +a.s9,
                            +a.s10,
                            +a.s11,
                            +a.s12,
                            +a.s13,
                            +a.s14,
                            +a.s15);
}

inline long16 operator ++ (long16 &a, int unused){
  return long16_CONSTRUCTOR(a.x++,
                            a.y++,
                            a.z++,
                            a.w++,
                            a.s4++,
                            a.s5++,
                            a.s6++,
                            a.s7++,
                            a.s8++,
                            a.s9++,
                            a.s10++,
                            a.s11++,
                            a.s12++,
                            a.s13++,
                            a.s14++,
                            a.s15++);
}

inline long16& operator ++ (long16 &a){
  ++a.x;
  ++a.y;
  ++a.z;
  ++a.w;
  ++a.s4;
  ++a.s5;
  ++a.s6;
  ++a.s7;
  ++a.s8;
  ++a.s9;
  ++a.s10;
  ++a.s11;
  ++a.s12;
  ++a.s13;
  ++a.s14;
  ++a.s15;
  return a;
}
inline long16 operator - (const long16 &a){
  return long16_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z,
                            -a.w,
                            -a.s4,
                            -a.s5,
                            -a.s6,
                            -a.s7,
                            -a.s8,
                            -a.s9,
                            -a.s10,
                            -a.s11,
                            -a.s12,
                            -a.s13,
                            -a.s14,
                            -a.s15);
}

inline long16 operator -- (long16 &a, int unused){
  return long16_CONSTRUCTOR(a.x--,
                            a.y--,
                            a.z--,
                            a.w--,
                            a.s4--,
                            a.s5--,
                            a.s6--,
                            a.s7--,
                            a.s8--,
                            a.s9--,
                            a.s10--,
                            a.s11--,
                            a.s12--,
                            a.s13--,
                            a.s14--,
                            a.s15--);
}

inline long16& operator -- (long16 &a){
  --a.x;
  --a.y;
  --a.z;
  --a.w;
  --a.s4;
  --a.s5;
  --a.s6;
  --a.s7;
  --a.s8;
  --a.s9;
  --a.s10;
  --a.s11;
  --a.s12;
  --a.s13;
  --a.s14;
  --a.s15;
  return a;
}
inline long16 operator + (const long16 &a, const long16 &b){
  return long16_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w,
                            a.s4 + b.s4,
                            a.s5 + b.s5,
                            a.s6 + b.s6,
                            a.s7 + b.s7,
                            a.s8 + b.s8,
                            a.s9 + b.s9,
                            a.s10 + b.s10,
                            a.s11 + b.s11,
                            a.s12 + b.s12,
                            a.s13 + b.s13,
                            a.s14 + b.s14,
                            a.s15 + b.s15);
}

inline long16 operator + (const long &a, const long16 &b){
  return long16_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w,
                            a + b.s4,
                            a + b.s5,
                            a + b.s6,
                            a + b.s7,
                            a + b.s8,
                            a + b.s9,
                            a + b.s10,
                            a + b.s11,
                            a + b.s12,
                            a + b.s13,
                            a + b.s14,
                            a + b.s15);
}

inline long16 operator + (const long16 &a, const long &b){
  return long16_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b,
                            a.s4 + b,
                            a.s5 + b,
                            a.s6 + b,
                            a.s7 + b,
                            a.s8 + b,
                            a.s9 + b,
                            a.s10 + b,
                            a.s11 + b,
                            a.s12 + b,
                            a.s13 + b,
                            a.s14 + b,
                            a.s15 + b);
}

inline long16& operator += (long16 &a, const long16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline long16& operator += (long16 &a, const long &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline long16 operator - (const long16 &a, const long16 &b){
  return long16_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w,
                            a.s4 - b.s4,
                            a.s5 - b.s5,
                            a.s6 - b.s6,
                            a.s7 - b.s7,
                            a.s8 - b.s8,
                            a.s9 - b.s9,
                            a.s10 - b.s10,
                            a.s11 - b.s11,
                            a.s12 - b.s12,
                            a.s13 - b.s13,
                            a.s14 - b.s14,
                            a.s15 - b.s15);
}

inline long16 operator - (const long &a, const long16 &b){
  return long16_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w,
                            a - b.s4,
                            a - b.s5,
                            a - b.s6,
                            a - b.s7,
                            a - b.s8,
                            a - b.s9,
                            a - b.s10,
                            a - b.s11,
                            a - b.s12,
                            a - b.s13,
                            a - b.s14,
                            a - b.s15);
}

inline long16 operator - (const long16 &a, const long &b){
  return long16_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b,
                            a.s4 - b,
                            a.s5 - b,
                            a.s6 - b,
                            a.s7 - b,
                            a.s8 - b,
                            a.s9 - b,
                            a.s10 - b,
                            a.s11 - b,
                            a.s12 - b,
                            a.s13 - b,
                            a.s14 - b,
                            a.s15 - b);
}

inline long16& operator -= (long16 &a, const long16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline long16& operator -= (long16 &a, const long &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline long16 operator * (const long16 &a, const long16 &b){
  return long16_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w,
                            a.s4 * b.s4,
                            a.s5 * b.s5,
                            a.s6 * b.s6,
                            a.s7 * b.s7,
                            a.s8 * b.s8,
                            a.s9 * b.s9,
                            a.s10 * b.s10,
                            a.s11 * b.s11,
                            a.s12 * b.s12,
                            a.s13 * b.s13,
                            a.s14 * b.s14,
                            a.s15 * b.s15);
}

inline long16 operator * (const long &a, const long16 &b){
  return long16_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w,
                            a * b.s4,
                            a * b.s5,
                            a * b.s6,
                            a * b.s7,
                            a * b.s8,
                            a * b.s9,
                            a * b.s10,
                            a * b.s11,
                            a * b.s12,
                            a * b.s13,
                            a * b.s14,
                            a * b.s15);
}

inline long16 operator * (const long16 &a, const long &b){
  return long16_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b,
                            a.s4 * b,
                            a.s5 * b,
                            a.s6 * b,
                            a.s7 * b,
                            a.s8 * b,
                            a.s9 * b,
                            a.s10 * b,
                            a.s11 * b,
                            a.s12 * b,
                            a.s13 * b,
                            a.s14 * b,
                            a.s15 * b);
}

inline long16& operator *= (long16 &a, const long16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline long16& operator *= (long16 &a, const long &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline long16 operator / (const long16 &a, const long16 &b){
  return long16_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w,
                            a.s4 / b.s4,
                            a.s5 / b.s5,
                            a.s6 / b.s6,
                            a.s7 / b.s7,
                            a.s8 / b.s8,
                            a.s9 / b.s9,
                            a.s10 / b.s10,
                            a.s11 / b.s11,
                            a.s12 / b.s12,
                            a.s13 / b.s13,
                            a.s14 / b.s14,
                            a.s15 / b.s15);
}

inline long16 operator / (const long &a, const long16 &b){
  return long16_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w,
                            a / b.s4,
                            a / b.s5,
                            a / b.s6,
                            a / b.s7,
                            a / b.s8,
                            a / b.s9,
                            a / b.s10,
                            a / b.s11,
                            a / b.s12,
                            a / b.s13,
                            a / b.s14,
                            a / b.s15);
}

inline long16 operator / (const long16 &a, const long &b){
  return long16_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b,
                            a.s4 / b,
                            a.s5 / b,
                            a.s6 / b,
                            a.s7 / b,
                            a.s8 / b,
                            a.s9 / b,
                            a.s10 / b,
                            a.s11 / b,
                            a.s12 / b,
                            a.s13 / b,
                            a.s14 / b,
                            a.s15 / b);
}

inline long16& operator /= (long16 &a, const long16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline long16& operator /= (long16 &a, const long &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const long16& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7 << ", "
             << a.s8 << ", "
             << a.s9 << ", "
             << a.s10 << ", "
             << a.s11 << ", "
             << a.s12 << ", "
             << a.s13 << ", "
             << a.s14 << ", "
             << a.s15
      << "]\n";

  return out;
}
#endif

//======================================


//---[ float2 ]-------------------------
#if (OCCA_USING_CUDA == 0)
#  define float2_CONSTRUCTOR(...) float2(__VA_ARGS__)
#else
#  define float2_CONSTRUCTOR(...) make_float2(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class float2{
public:
  union { float s0, x; };
  union { float s1, y; };

  inline float2() : 
    x(0),
    y(0) {}

  inline float2(const float &x_) : 
    x(x_),
    y(0) {}

  inline float2(const float &x_,
                const float &y_) : 
    x(x_),
    y(y_) {}
};
#endif

inline float2 operator + (const float2 &a){
  return float2_CONSTRUCTOR(+a.x,
                            +a.y);
}
inline float2 operator - (const float2 &a){
  return float2_CONSTRUCTOR(-a.x,
                            -a.y);
}
inline float2 operator + (const float2 &a, const float2 &b){
  return float2_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y);
}

inline float2 operator + (const float &a, const float2 &b){
  return float2_CONSTRUCTOR(a + b.x,
                            a + b.y);
}

inline float2 operator + (const float2 &a, const float &b){
  return float2_CONSTRUCTOR(a.x + b,
                            a.y + b);
}

inline float2& operator += (float2 &a, const float2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline float2& operator += (float2 &a, const float &b){
  a.x += b;
  a.y += b;
  return a;
}
inline float2 operator - (const float2 &a, const float2 &b){
  return float2_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y);
}

inline float2 operator - (const float &a, const float2 &b){
  return float2_CONSTRUCTOR(a - b.x,
                            a - b.y);
}

inline float2 operator - (const float2 &a, const float &b){
  return float2_CONSTRUCTOR(a.x - b,
                            a.y - b);
}

inline float2& operator -= (float2 &a, const float2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline float2& operator -= (float2 &a, const float &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline float2 operator * (const float2 &a, const float2 &b){
  return float2_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y);
}

inline float2 operator * (const float &a, const float2 &b){
  return float2_CONSTRUCTOR(a * b.x,
                            a * b.y);
}

inline float2 operator * (const float2 &a, const float &b){
  return float2_CONSTRUCTOR(a.x * b,
                            a.y * b);
}

inline float2& operator *= (float2 &a, const float2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline float2& operator *= (float2 &a, const float &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline float2 operator / (const float2 &a, const float2 &b){
  return float2_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y);
}

inline float2 operator / (const float &a, const float2 &b){
  return float2_CONSTRUCTOR(a / b.x,
                            a / b.y);
}

inline float2 operator / (const float2 &a, const float &b){
  return float2_CONSTRUCTOR(a.x / b,
                            a.y / b);
}

inline float2& operator /= (float2 &a, const float2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline float2& operator /= (float2 &a, const float &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const float2& a){
  out << "[" << a.x << ", "
             << a.y
      << "]\n";

  return out;
}
#endif

//======================================


//---[ float3 ]-------------------------
#if (OCCA_USING_CUDA == 0)
#  define float3_CONSTRUCTOR(...) float3(__VA_ARGS__)
#else
#  define float3_CONSTRUCTOR(...) make_float3(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class float3{
public:
  union { float s0, x; };
  union { float s1, y; };
  union { float s2, z; };

  inline float3() : 
    x(0),
    y(0),
    z(0) {}

  inline float3(const float &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline float3(const float &x_,
                const float &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline float3(const float &x_,
                const float &y_,
                const float &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};
#endif

inline float3 operator + (const float3 &a){
  return float3_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z);
}
inline float3 operator - (const float3 &a){
  return float3_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z);
}
inline float3 operator + (const float3 &a, const float3 &b){
  return float3_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z);
}

inline float3 operator + (const float &a, const float3 &b){
  return float3_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z);
}

inline float3 operator + (const float3 &a, const float &b){
  return float3_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b);
}

inline float3& operator += (float3 &a, const float3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline float3& operator += (float3 &a, const float &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline float3 operator - (const float3 &a, const float3 &b){
  return float3_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z);
}

inline float3 operator - (const float &a, const float3 &b){
  return float3_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z);
}

inline float3 operator - (const float3 &a, const float &b){
  return float3_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b);
}

inline float3& operator -= (float3 &a, const float3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline float3& operator -= (float3 &a, const float &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline float3 operator * (const float3 &a, const float3 &b){
  return float3_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z);
}

inline float3 operator * (const float &a, const float3 &b){
  return float3_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z);
}

inline float3 operator * (const float3 &a, const float &b){
  return float3_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b);
}

inline float3& operator *= (float3 &a, const float3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline float3& operator *= (float3 &a, const float &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline float3 operator / (const float3 &a, const float3 &b){
  return float3_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z);
}

inline float3 operator / (const float &a, const float3 &b){
  return float3_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z);
}

inline float3 operator / (const float3 &a, const float &b){
  return float3_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b);
}

inline float3& operator /= (float3 &a, const float3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline float3& operator /= (float3 &a, const float &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const float3& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z
      << "]\n";

  return out;
}
#endif

//======================================


//---[ float4 ]-------------------------
#if (OCCA_USING_CUDA == 0)
#  define float4_CONSTRUCTOR(...) float4(__VA_ARGS__)
#else
#  define float4_CONSTRUCTOR(...) make_float4(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class float4{
public:
  union { float s0, x; };
  union { float s1, y; };
  union { float s2, z; };
  union { float s3, w; };

  inline float4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline float4(const float &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline float4(const float &x_,
                const float &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline float4(const float &x_,
                const float &y_,
                const float &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline float4(const float &x_,
                const float &y_,
                const float &z_,
                const float &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};
#endif

inline float4 operator + (const float4 &a){
  return float4_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z,
                            +a.w);
}
inline float4 operator - (const float4 &a){
  return float4_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z,
                            -a.w);
}
inline float4 operator + (const float4 &a, const float4 &b){
  return float4_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w);
}

inline float4 operator + (const float &a, const float4 &b){
  return float4_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w);
}

inline float4 operator + (const float4 &a, const float &b){
  return float4_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b);
}

inline float4& operator += (float4 &a, const float4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline float4& operator += (float4 &a, const float &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline float4 operator - (const float4 &a, const float4 &b){
  return float4_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w);
}

inline float4 operator - (const float &a, const float4 &b){
  return float4_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w);
}

inline float4 operator - (const float4 &a, const float &b){
  return float4_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b);
}

inline float4& operator -= (float4 &a, const float4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline float4& operator -= (float4 &a, const float &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline float4 operator * (const float4 &a, const float4 &b){
  return float4_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w);
}

inline float4 operator * (const float &a, const float4 &b){
  return float4_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w);
}

inline float4 operator * (const float4 &a, const float &b){
  return float4_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b);
}

inline float4& operator *= (float4 &a, const float4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline float4& operator *= (float4 &a, const float &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline float4 operator / (const float4 &a, const float4 &b){
  return float4_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w);
}

inline float4 operator / (const float &a, const float4 &b){
  return float4_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w);
}

inline float4 operator / (const float4 &a, const float &b){
  return float4_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b);
}

inline float4& operator /= (float4 &a, const float4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline float4& operator /= (float4 &a, const float &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const float4& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w
      << "]\n";

  return out;
}
#endif

//======================================


//---[ float8 ]-------------------------
#  define float8_CONSTRUCTOR(...) float8(__VA_ARGS__)
class float8{
public:
  union { float s0, x; };
  union { float s1, y; };
  union { float s2, z; };
  union { float s3, w; };
  float s4;
  float s5;
  float s6;
  float s7;

  inline float8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline float8(const float &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_,
                const float &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_,
                const float &z_,
                const float &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_,
                const float &z_,
                const float &w_,
                const float &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_,
                const float &z_,
                const float &w_,
                const float &s4_,
                const float &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_,
                const float &z_,
                const float &w_,
                const float &s4_,
                const float &s5_,
                const float &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline float8(const float &x_,
                const float &y_,
                const float &z_,
                const float &w_,
                const float &s4_,
                const float &s5_,
                const float &s6_,
                const float &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline float8 operator + (const float8 &a){
  return float8_CONSTRUCTOR(+a.x,
                            +a.y,
                            +a.z,
                            +a.w,
                            +a.s4,
                            +a.s5,
                            +a.s6,
                            +a.s7);
}
inline float8 operator - (const float8 &a){
  return float8_CONSTRUCTOR(-a.x,
                            -a.y,
                            -a.z,
                            -a.w,
                            -a.s4,
                            -a.s5,
                            -a.s6,
                            -a.s7);
}
inline float8 operator + (const float8 &a, const float8 &b){
  return float8_CONSTRUCTOR(a.x + b.x,
                            a.y + b.y,
                            a.z + b.z,
                            a.w + b.w,
                            a.s4 + b.s4,
                            a.s5 + b.s5,
                            a.s6 + b.s6,
                            a.s7 + b.s7);
}

inline float8 operator + (const float &a, const float8 &b){
  return float8_CONSTRUCTOR(a + b.x,
                            a + b.y,
                            a + b.z,
                            a + b.w,
                            a + b.s4,
                            a + b.s5,
                            a + b.s6,
                            a + b.s7);
}

inline float8 operator + (const float8 &a, const float &b){
  return float8_CONSTRUCTOR(a.x + b,
                            a.y + b,
                            a.z + b,
                            a.w + b,
                            a.s4 + b,
                            a.s5 + b,
                            a.s6 + b,
                            a.s7 + b);
}

inline float8& operator += (float8 &a, const float8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline float8& operator += (float8 &a, const float &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline float8 operator - (const float8 &a, const float8 &b){
  return float8_CONSTRUCTOR(a.x - b.x,
                            a.y - b.y,
                            a.z - b.z,
                            a.w - b.w,
                            a.s4 - b.s4,
                            a.s5 - b.s5,
                            a.s6 - b.s6,
                            a.s7 - b.s7);
}

inline float8 operator - (const float &a, const float8 &b){
  return float8_CONSTRUCTOR(a - b.x,
                            a - b.y,
                            a - b.z,
                            a - b.w,
                            a - b.s4,
                            a - b.s5,
                            a - b.s6,
                            a - b.s7);
}

inline float8 operator - (const float8 &a, const float &b){
  return float8_CONSTRUCTOR(a.x - b,
                            a.y - b,
                            a.z - b,
                            a.w - b,
                            a.s4 - b,
                            a.s5 - b,
                            a.s6 - b,
                            a.s7 - b);
}

inline float8& operator -= (float8 &a, const float8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline float8& operator -= (float8 &a, const float &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline float8 operator * (const float8 &a, const float8 &b){
  return float8_CONSTRUCTOR(a.x * b.x,
                            a.y * b.y,
                            a.z * b.z,
                            a.w * b.w,
                            a.s4 * b.s4,
                            a.s5 * b.s5,
                            a.s6 * b.s6,
                            a.s7 * b.s7);
}

inline float8 operator * (const float &a, const float8 &b){
  return float8_CONSTRUCTOR(a * b.x,
                            a * b.y,
                            a * b.z,
                            a * b.w,
                            a * b.s4,
                            a * b.s5,
                            a * b.s6,
                            a * b.s7);
}

inline float8 operator * (const float8 &a, const float &b){
  return float8_CONSTRUCTOR(a.x * b,
                            a.y * b,
                            a.z * b,
                            a.w * b,
                            a.s4 * b,
                            a.s5 * b,
                            a.s6 * b,
                            a.s7 * b);
}

inline float8& operator *= (float8 &a, const float8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline float8& operator *= (float8 &a, const float &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline float8 operator / (const float8 &a, const float8 &b){
  return float8_CONSTRUCTOR(a.x / b.x,
                            a.y / b.y,
                            a.z / b.z,
                            a.w / b.w,
                            a.s4 / b.s4,
                            a.s5 / b.s5,
                            a.s6 / b.s6,
                            a.s7 / b.s7);
}

inline float8 operator / (const float &a, const float8 &b){
  return float8_CONSTRUCTOR(a / b.x,
                            a / b.y,
                            a / b.z,
                            a / b.w,
                            a / b.s4,
                            a / b.s5,
                            a / b.s6,
                            a / b.s7);
}

inline float8 operator / (const float8 &a, const float &b){
  return float8_CONSTRUCTOR(a.x / b,
                            a.y / b,
                            a.z / b,
                            a.w / b,
                            a.s4 / b,
                            a.s5 / b,
                            a.s6 / b,
                            a.s7 / b);
}

inline float8& operator /= (float8 &a, const float8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline float8& operator /= (float8 &a, const float &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const float8& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7
      << "]\n";

  return out;
}
#endif

//======================================


//---[ float16 ]------------------------
#  define float16_CONSTRUCTOR(...) float16(__VA_ARGS__)
class float16{
public:
  union { float s0, x; };
  union { float s1, y; };
  union { float s2, z; };
  union { float s3, w; };
  float s4;
  float s5;
  float s6;
  float s7;
  float s8;
  float s9;
  float s10;
  float s11;
  float s12;
  float s13;
  float s14;
  float s15;

  inline float16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_,
                 const float &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_,
                 const float &s10_,
                 const float &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_,
                 const float &s10_,
                 const float &s11_,
                 const float &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_,
                 const float &s10_,
                 const float &s11_,
                 const float &s12_,
                 const float &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_,
                 const float &s10_,
                 const float &s11_,
                 const float &s12_,
                 const float &s13_,
                 const float &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline float16(const float &x_,
                 const float &y_,
                 const float &z_,
                 const float &w_,
                 const float &s4_,
                 const float &s5_,
                 const float &s6_,
                 const float &s7_,
                 const float &s8_,
                 const float &s9_,
                 const float &s10_,
                 const float &s11_,
                 const float &s12_,
                 const float &s13_,
                 const float &s14_,
                 const float &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline float16 operator + (const float16 &a){
  return float16_CONSTRUCTOR(+a.x,
                             +a.y,
                             +a.z,
                             +a.w,
                             +a.s4,
                             +a.s5,
                             +a.s6,
                             +a.s7,
                             +a.s8,
                             +a.s9,
                             +a.s10,
                             +a.s11,
                             +a.s12,
                             +a.s13,
                             +a.s14,
                             +a.s15);
}
inline float16 operator - (const float16 &a){
  return float16_CONSTRUCTOR(-a.x,
                             -a.y,
                             -a.z,
                             -a.w,
                             -a.s4,
                             -a.s5,
                             -a.s6,
                             -a.s7,
                             -a.s8,
                             -a.s9,
                             -a.s10,
                             -a.s11,
                             -a.s12,
                             -a.s13,
                             -a.s14,
                             -a.s15);
}
inline float16 operator + (const float16 &a, const float16 &b){
  return float16_CONSTRUCTOR(a.x + b.x,
                             a.y + b.y,
                             a.z + b.z,
                             a.w + b.w,
                             a.s4 + b.s4,
                             a.s5 + b.s5,
                             a.s6 + b.s6,
                             a.s7 + b.s7,
                             a.s8 + b.s8,
                             a.s9 + b.s9,
                             a.s10 + b.s10,
                             a.s11 + b.s11,
                             a.s12 + b.s12,
                             a.s13 + b.s13,
                             a.s14 + b.s14,
                             a.s15 + b.s15);
}

inline float16 operator + (const float &a, const float16 &b){
  return float16_CONSTRUCTOR(a + b.x,
                             a + b.y,
                             a + b.z,
                             a + b.w,
                             a + b.s4,
                             a + b.s5,
                             a + b.s6,
                             a + b.s7,
                             a + b.s8,
                             a + b.s9,
                             a + b.s10,
                             a + b.s11,
                             a + b.s12,
                             a + b.s13,
                             a + b.s14,
                             a + b.s15);
}

inline float16 operator + (const float16 &a, const float &b){
  return float16_CONSTRUCTOR(a.x + b,
                             a.y + b,
                             a.z + b,
                             a.w + b,
                             a.s4 + b,
                             a.s5 + b,
                             a.s6 + b,
                             a.s7 + b,
                             a.s8 + b,
                             a.s9 + b,
                             a.s10 + b,
                             a.s11 + b,
                             a.s12 + b,
                             a.s13 + b,
                             a.s14 + b,
                             a.s15 + b);
}

inline float16& operator += (float16 &a, const float16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline float16& operator += (float16 &a, const float &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline float16 operator - (const float16 &a, const float16 &b){
  return float16_CONSTRUCTOR(a.x - b.x,
                             a.y - b.y,
                             a.z - b.z,
                             a.w - b.w,
                             a.s4 - b.s4,
                             a.s5 - b.s5,
                             a.s6 - b.s6,
                             a.s7 - b.s7,
                             a.s8 - b.s8,
                             a.s9 - b.s9,
                             a.s10 - b.s10,
                             a.s11 - b.s11,
                             a.s12 - b.s12,
                             a.s13 - b.s13,
                             a.s14 - b.s14,
                             a.s15 - b.s15);
}

inline float16 operator - (const float &a, const float16 &b){
  return float16_CONSTRUCTOR(a - b.x,
                             a - b.y,
                             a - b.z,
                             a - b.w,
                             a - b.s4,
                             a - b.s5,
                             a - b.s6,
                             a - b.s7,
                             a - b.s8,
                             a - b.s9,
                             a - b.s10,
                             a - b.s11,
                             a - b.s12,
                             a - b.s13,
                             a - b.s14,
                             a - b.s15);
}

inline float16 operator - (const float16 &a, const float &b){
  return float16_CONSTRUCTOR(a.x - b,
                             a.y - b,
                             a.z - b,
                             a.w - b,
                             a.s4 - b,
                             a.s5 - b,
                             a.s6 - b,
                             a.s7 - b,
                             a.s8 - b,
                             a.s9 - b,
                             a.s10 - b,
                             a.s11 - b,
                             a.s12 - b,
                             a.s13 - b,
                             a.s14 - b,
                             a.s15 - b);
}

inline float16& operator -= (float16 &a, const float16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline float16& operator -= (float16 &a, const float &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline float16 operator * (const float16 &a, const float16 &b){
  return float16_CONSTRUCTOR(a.x * b.x,
                             a.y * b.y,
                             a.z * b.z,
                             a.w * b.w,
                             a.s4 * b.s4,
                             a.s5 * b.s5,
                             a.s6 * b.s6,
                             a.s7 * b.s7,
                             a.s8 * b.s8,
                             a.s9 * b.s9,
                             a.s10 * b.s10,
                             a.s11 * b.s11,
                             a.s12 * b.s12,
                             a.s13 * b.s13,
                             a.s14 * b.s14,
                             a.s15 * b.s15);
}

inline float16 operator * (const float &a, const float16 &b){
  return float16_CONSTRUCTOR(a * b.x,
                             a * b.y,
                             a * b.z,
                             a * b.w,
                             a * b.s4,
                             a * b.s5,
                             a * b.s6,
                             a * b.s7,
                             a * b.s8,
                             a * b.s9,
                             a * b.s10,
                             a * b.s11,
                             a * b.s12,
                             a * b.s13,
                             a * b.s14,
                             a * b.s15);
}

inline float16 operator * (const float16 &a, const float &b){
  return float16_CONSTRUCTOR(a.x * b,
                             a.y * b,
                             a.z * b,
                             a.w * b,
                             a.s4 * b,
                             a.s5 * b,
                             a.s6 * b,
                             a.s7 * b,
                             a.s8 * b,
                             a.s9 * b,
                             a.s10 * b,
                             a.s11 * b,
                             a.s12 * b,
                             a.s13 * b,
                             a.s14 * b,
                             a.s15 * b);
}

inline float16& operator *= (float16 &a, const float16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline float16& operator *= (float16 &a, const float &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline float16 operator / (const float16 &a, const float16 &b){
  return float16_CONSTRUCTOR(a.x / b.x,
                             a.y / b.y,
                             a.z / b.z,
                             a.w / b.w,
                             a.s4 / b.s4,
                             a.s5 / b.s5,
                             a.s6 / b.s6,
                             a.s7 / b.s7,
                             a.s8 / b.s8,
                             a.s9 / b.s9,
                             a.s10 / b.s10,
                             a.s11 / b.s11,
                             a.s12 / b.s12,
                             a.s13 / b.s13,
                             a.s14 / b.s14,
                             a.s15 / b.s15);
}

inline float16 operator / (const float &a, const float16 &b){
  return float16_CONSTRUCTOR(a / b.x,
                             a / b.y,
                             a / b.z,
                             a / b.w,
                             a / b.s4,
                             a / b.s5,
                             a / b.s6,
                             a / b.s7,
                             a / b.s8,
                             a / b.s9,
                             a / b.s10,
                             a / b.s11,
                             a / b.s12,
                             a / b.s13,
                             a / b.s14,
                             a / b.s15);
}

inline float16 operator / (const float16 &a, const float &b){
  return float16_CONSTRUCTOR(a.x / b,
                             a.y / b,
                             a.z / b,
                             a.w / b,
                             a.s4 / b,
                             a.s5 / b,
                             a.s6 / b,
                             a.s7 / b,
                             a.s8 / b,
                             a.s9 / b,
                             a.s10 / b,
                             a.s11 / b,
                             a.s12 / b,
                             a.s13 / b,
                             a.s14 / b,
                             a.s15 / b);
}

inline float16& operator /= (float16 &a, const float16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline float16& operator /= (float16 &a, const float &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const float16& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7 << ", "
             << a.s8 << ", "
             << a.s9 << ", "
             << a.s10 << ", "
             << a.s11 << ", "
             << a.s12 << ", "
             << a.s13 << ", "
             << a.s14 << ", "
             << a.s15
      << "]\n";

  return out;
}
#endif

//======================================


//---[ double2 ]------------------------
#if (OCCA_USING_CUDA == 0)
#  define double2_CONSTRUCTOR(...) double2(__VA_ARGS__)
#else
#  define double2_CONSTRUCTOR(...) make_double2(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class double2{
public:
  union { double s0, x; };
  union { double s1, y; };

  inline double2() : 
    x(0),
    y(0) {}

  inline double2(const double &x_) : 
    x(x_),
    y(0) {}

  inline double2(const double &x_,
                 const double &y_) : 
    x(x_),
    y(y_) {}
};
#endif

inline double2 operator + (const double2 &a){
  return double2_CONSTRUCTOR(+a.x,
                             +a.y);
}
inline double2 operator - (const double2 &a){
  return double2_CONSTRUCTOR(-a.x,
                             -a.y);
}
inline double2 operator + (const double2 &a, const double2 &b){
  return double2_CONSTRUCTOR(a.x + b.x,
                             a.y + b.y);
}

inline double2 operator + (const double &a, const double2 &b){
  return double2_CONSTRUCTOR(a + b.x,
                             a + b.y);
}

inline double2 operator + (const double2 &a, const double &b){
  return double2_CONSTRUCTOR(a.x + b,
                             a.y + b);
}

inline double2& operator += (double2 &a, const double2 &b){
  a.x += b.x;
  a.y += b.y;
  return a;
}

inline double2& operator += (double2 &a, const double &b){
  a.x += b;
  a.y += b;
  return a;
}
inline double2 operator - (const double2 &a, const double2 &b){
  return double2_CONSTRUCTOR(a.x - b.x,
                             a.y - b.y);
}

inline double2 operator - (const double &a, const double2 &b){
  return double2_CONSTRUCTOR(a - b.x,
                             a - b.y);
}

inline double2 operator - (const double2 &a, const double &b){
  return double2_CONSTRUCTOR(a.x - b,
                             a.y - b);
}

inline double2& operator -= (double2 &a, const double2 &b){
  a.x -= b.x;
  a.y -= b.y;
  return a;
}

inline double2& operator -= (double2 &a, const double &b){
  a.x -= b;
  a.y -= b;
  return a;
}
inline double2 operator * (const double2 &a, const double2 &b){
  return double2_CONSTRUCTOR(a.x * b.x,
                             a.y * b.y);
}

inline double2 operator * (const double &a, const double2 &b){
  return double2_CONSTRUCTOR(a * b.x,
                             a * b.y);
}

inline double2 operator * (const double2 &a, const double &b){
  return double2_CONSTRUCTOR(a.x * b,
                             a.y * b);
}

inline double2& operator *= (double2 &a, const double2 &b){
  a.x *= b.x;
  a.y *= b.y;
  return a;
}

inline double2& operator *= (double2 &a, const double &b){
  a.x *= b;
  a.y *= b;
  return a;
}
inline double2 operator / (const double2 &a, const double2 &b){
  return double2_CONSTRUCTOR(a.x / b.x,
                             a.y / b.y);
}

inline double2 operator / (const double &a, const double2 &b){
  return double2_CONSTRUCTOR(a / b.x,
                             a / b.y);
}

inline double2 operator / (const double2 &a, const double &b){
  return double2_CONSTRUCTOR(a.x / b,
                             a.y / b);
}

inline double2& operator /= (double2 &a, const double2 &b){
  a.x /= b.x;
  a.y /= b.y;
  return a;
}

inline double2& operator /= (double2 &a, const double &b){
  a.x /= b;
  a.y /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const double2& a){
  out << "[" << a.x << ", "
             << a.y
      << "]\n";

  return out;
}
#endif

//======================================


//---[ double3 ]------------------------
#  define double3_CONSTRUCTOR(...) double3(__VA_ARGS__)
class double3{
public:
  union { double s0, x; };
  union { double s1, y; };
  union { double s2, z; };

  inline double3() : 
    x(0),
    y(0),
    z(0) {}

  inline double3(const double &x_) : 
    x(x_),
    y(0),
    z(0) {}

  inline double3(const double &x_,
                 const double &y_) : 
    x(x_),
    y(y_),
    z(0) {}

  inline double3(const double &x_,
                 const double &y_,
                 const double &z_) : 
    x(x_),
    y(y_),
    z(z_) {}
};

inline double3 operator + (const double3 &a){
  return double3_CONSTRUCTOR(+a.x,
                             +a.y,
                             +a.z);
}
inline double3 operator - (const double3 &a){
  return double3_CONSTRUCTOR(-a.x,
                             -a.y,
                             -a.z);
}
inline double3 operator + (const double3 &a, const double3 &b){
  return double3_CONSTRUCTOR(a.x + b.x,
                             a.y + b.y,
                             a.z + b.z);
}

inline double3 operator + (const double &a, const double3 &b){
  return double3_CONSTRUCTOR(a + b.x,
                             a + b.y,
                             a + b.z);
}

inline double3 operator + (const double3 &a, const double &b){
  return double3_CONSTRUCTOR(a.x + b,
                             a.y + b,
                             a.z + b);
}

inline double3& operator += (double3 &a, const double3 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  return a;
}

inline double3& operator += (double3 &a, const double &b){
  a.x += b;
  a.y += b;
  a.z += b;
  return a;
}
inline double3 operator - (const double3 &a, const double3 &b){
  return double3_CONSTRUCTOR(a.x - b.x,
                             a.y - b.y,
                             a.z - b.z);
}

inline double3 operator - (const double &a, const double3 &b){
  return double3_CONSTRUCTOR(a - b.x,
                             a - b.y,
                             a - b.z);
}

inline double3 operator - (const double3 &a, const double &b){
  return double3_CONSTRUCTOR(a.x - b,
                             a.y - b,
                             a.z - b);
}

inline double3& operator -= (double3 &a, const double3 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  return a;
}

inline double3& operator -= (double3 &a, const double &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  return a;
}
inline double3 operator * (const double3 &a, const double3 &b){
  return double3_CONSTRUCTOR(a.x * b.x,
                             a.y * b.y,
                             a.z * b.z);
}

inline double3 operator * (const double &a, const double3 &b){
  return double3_CONSTRUCTOR(a * b.x,
                             a * b.y,
                             a * b.z);
}

inline double3 operator * (const double3 &a, const double &b){
  return double3_CONSTRUCTOR(a.x * b,
                             a.y * b,
                             a.z * b);
}

inline double3& operator *= (double3 &a, const double3 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  return a;
}

inline double3& operator *= (double3 &a, const double &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  return a;
}
inline double3 operator / (const double3 &a, const double3 &b){
  return double3_CONSTRUCTOR(a.x / b.x,
                             a.y / b.y,
                             a.z / b.z);
}

inline double3 operator / (const double &a, const double3 &b){
  return double3_CONSTRUCTOR(a / b.x,
                             a / b.y,
                             a / b.z);
}

inline double3 operator / (const double3 &a, const double &b){
  return double3_CONSTRUCTOR(a.x / b,
                             a.y / b,
                             a.z / b);
}

inline double3& operator /= (double3 &a, const double3 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  return a;
}

inline double3& operator /= (double3 &a, const double &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const double3& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z
      << "]\n";

  return out;
}
#endif

//======================================


//---[ double4 ]------------------------
#if (OCCA_USING_CUDA == 0)
#  define double4_CONSTRUCTOR(...) double4(__VA_ARGS__)
#else
#  define double4_CONSTRUCTOR(...) make_double4(__VA_ARGS__)
#endif
#if (OCCA_USING_CUDA == 0)
class double4{
public:
  union { double s0, x; };
  union { double s1, y; };
  union { double s2, z; };
  union { double s3, w; };

  inline double4() : 
    x(0),
    y(0),
    z(0),
    w(0) {}

  inline double4(const double &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0) {}

  inline double4(const double &x_,
                 const double &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0) {}

  inline double4(const double &x_,
                 const double &y_,
                 const double &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0) {}

  inline double4(const double &x_,
                 const double &y_,
                 const double &z_,
                 const double &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_) {}
};
#endif

inline double4 operator + (const double4 &a){
  return double4_CONSTRUCTOR(+a.x,
                             +a.y,
                             +a.z,
                             +a.w);
}
inline double4 operator - (const double4 &a){
  return double4_CONSTRUCTOR(-a.x,
                             -a.y,
                             -a.z,
                             -a.w);
}
inline double4 operator + (const double4 &a, const double4 &b){
  return double4_CONSTRUCTOR(a.x + b.x,
                             a.y + b.y,
                             a.z + b.z,
                             a.w + b.w);
}

inline double4 operator + (const double &a, const double4 &b){
  return double4_CONSTRUCTOR(a + b.x,
                             a + b.y,
                             a + b.z,
                             a + b.w);
}

inline double4 operator + (const double4 &a, const double &b){
  return double4_CONSTRUCTOR(a.x + b,
                             a.y + b,
                             a.z + b,
                             a.w + b);
}

inline double4& operator += (double4 &a, const double4 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  return a;
}

inline double4& operator += (double4 &a, const double &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  return a;
}
inline double4 operator - (const double4 &a, const double4 &b){
  return double4_CONSTRUCTOR(a.x - b.x,
                             a.y - b.y,
                             a.z - b.z,
                             a.w - b.w);
}

inline double4 operator - (const double &a, const double4 &b){
  return double4_CONSTRUCTOR(a - b.x,
                             a - b.y,
                             a - b.z,
                             a - b.w);
}

inline double4 operator - (const double4 &a, const double &b){
  return double4_CONSTRUCTOR(a.x - b,
                             a.y - b,
                             a.z - b,
                             a.w - b);
}

inline double4& operator -= (double4 &a, const double4 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  return a;
}

inline double4& operator -= (double4 &a, const double &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  return a;
}
inline double4 operator * (const double4 &a, const double4 &b){
  return double4_CONSTRUCTOR(a.x * b.x,
                             a.y * b.y,
                             a.z * b.z,
                             a.w * b.w);
}

inline double4 operator * (const double &a, const double4 &b){
  return double4_CONSTRUCTOR(a * b.x,
                             a * b.y,
                             a * b.z,
                             a * b.w);
}

inline double4 operator * (const double4 &a, const double &b){
  return double4_CONSTRUCTOR(a.x * b,
                             a.y * b,
                             a.z * b,
                             a.w * b);
}

inline double4& operator *= (double4 &a, const double4 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  return a;
}

inline double4& operator *= (double4 &a, const double &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  return a;
}
inline double4 operator / (const double4 &a, const double4 &b){
  return double4_CONSTRUCTOR(a.x / b.x,
                             a.y / b.y,
                             a.z / b.z,
                             a.w / b.w);
}

inline double4 operator / (const double &a, const double4 &b){
  return double4_CONSTRUCTOR(a / b.x,
                             a / b.y,
                             a / b.z,
                             a / b.w);
}

inline double4 operator / (const double4 &a, const double &b){
  return double4_CONSTRUCTOR(a.x / b,
                             a.y / b,
                             a.z / b,
                             a.w / b);
}

inline double4& operator /= (double4 &a, const double4 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  return a;
}

inline double4& operator /= (double4 &a, const double &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const double4& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w
      << "]\n";

  return out;
}
#endif

//======================================


//---[ double8 ]------------------------
#  define double8_CONSTRUCTOR(...) double8(__VA_ARGS__)
class double8{
public:
  union { double s0, x; };
  union { double s1, y; };
  union { double s2, z; };
  union { double s3, w; };
  double s4;
  double s5;
  double s6;
  double s7;

  inline double8() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline double8(const double &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_,
                 const double &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_,
                 const double &z_,
                 const double &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_,
                 const double &z_,
                 const double &w_,
                 const double &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_,
                 const double &z_,
                 const double &w_,
                 const double &s4_,
                 const double &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_,
                 const double &z_,
                 const double &w_,
                 const double &s4_,
                 const double &s5_,
                 const double &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0) {}

  inline double8(const double &x_,
                 const double &y_,
                 const double &z_,
                 const double &w_,
                 const double &s4_,
                 const double &s5_,
                 const double &s6_,
                 const double &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_) {}
};

inline double8 operator + (const double8 &a){
  return double8_CONSTRUCTOR(+a.x,
                             +a.y,
                             +a.z,
                             +a.w,
                             +a.s4,
                             +a.s5,
                             +a.s6,
                             +a.s7);
}
inline double8 operator - (const double8 &a){
  return double8_CONSTRUCTOR(-a.x,
                             -a.y,
                             -a.z,
                             -a.w,
                             -a.s4,
                             -a.s5,
                             -a.s6,
                             -a.s7);
}
inline double8 operator + (const double8 &a, const double8 &b){
  return double8_CONSTRUCTOR(a.x + b.x,
                             a.y + b.y,
                             a.z + b.z,
                             a.w + b.w,
                             a.s4 + b.s4,
                             a.s5 + b.s5,
                             a.s6 + b.s6,
                             a.s7 + b.s7);
}

inline double8 operator + (const double &a, const double8 &b){
  return double8_CONSTRUCTOR(a + b.x,
                             a + b.y,
                             a + b.z,
                             a + b.w,
                             a + b.s4,
                             a + b.s5,
                             a + b.s6,
                             a + b.s7);
}

inline double8 operator + (const double8 &a, const double &b){
  return double8_CONSTRUCTOR(a.x + b,
                             a.y + b,
                             a.z + b,
                             a.w + b,
                             a.s4 + b,
                             a.s5 + b,
                             a.s6 + b,
                             a.s7 + b);
}

inline double8& operator += (double8 &a, const double8 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  return a;
}

inline double8& operator += (double8 &a, const double &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  return a;
}
inline double8 operator - (const double8 &a, const double8 &b){
  return double8_CONSTRUCTOR(a.x - b.x,
                             a.y - b.y,
                             a.z - b.z,
                             a.w - b.w,
                             a.s4 - b.s4,
                             a.s5 - b.s5,
                             a.s6 - b.s6,
                             a.s7 - b.s7);
}

inline double8 operator - (const double &a, const double8 &b){
  return double8_CONSTRUCTOR(a - b.x,
                             a - b.y,
                             a - b.z,
                             a - b.w,
                             a - b.s4,
                             a - b.s5,
                             a - b.s6,
                             a - b.s7);
}

inline double8 operator - (const double8 &a, const double &b){
  return double8_CONSTRUCTOR(a.x - b,
                             a.y - b,
                             a.z - b,
                             a.w - b,
                             a.s4 - b,
                             a.s5 - b,
                             a.s6 - b,
                             a.s7 - b);
}

inline double8& operator -= (double8 &a, const double8 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  return a;
}

inline double8& operator -= (double8 &a, const double &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  return a;
}
inline double8 operator * (const double8 &a, const double8 &b){
  return double8_CONSTRUCTOR(a.x * b.x,
                             a.y * b.y,
                             a.z * b.z,
                             a.w * b.w,
                             a.s4 * b.s4,
                             a.s5 * b.s5,
                             a.s6 * b.s6,
                             a.s7 * b.s7);
}

inline double8 operator * (const double &a, const double8 &b){
  return double8_CONSTRUCTOR(a * b.x,
                             a * b.y,
                             a * b.z,
                             a * b.w,
                             a * b.s4,
                             a * b.s5,
                             a * b.s6,
                             a * b.s7);
}

inline double8 operator * (const double8 &a, const double &b){
  return double8_CONSTRUCTOR(a.x * b,
                             a.y * b,
                             a.z * b,
                             a.w * b,
                             a.s4 * b,
                             a.s5 * b,
                             a.s6 * b,
                             a.s7 * b);
}

inline double8& operator *= (double8 &a, const double8 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  return a;
}

inline double8& operator *= (double8 &a, const double &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  return a;
}
inline double8 operator / (const double8 &a, const double8 &b){
  return double8_CONSTRUCTOR(a.x / b.x,
                             a.y / b.y,
                             a.z / b.z,
                             a.w / b.w,
                             a.s4 / b.s4,
                             a.s5 / b.s5,
                             a.s6 / b.s6,
                             a.s7 / b.s7);
}

inline double8 operator / (const double &a, const double8 &b){
  return double8_CONSTRUCTOR(a / b.x,
                             a / b.y,
                             a / b.z,
                             a / b.w,
                             a / b.s4,
                             a / b.s5,
                             a / b.s6,
                             a / b.s7);
}

inline double8 operator / (const double8 &a, const double &b){
  return double8_CONSTRUCTOR(a.x / b,
                             a.y / b,
                             a.z / b,
                             a.w / b,
                             a.s4 / b,
                             a.s5 / b,
                             a.s6 / b,
                             a.s7 / b);
}

inline double8& operator /= (double8 &a, const double8 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  return a;
}

inline double8& operator /= (double8 &a, const double &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const double8& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7
      << "]\n";

  return out;
}
#endif

//======================================


//---[ double16 ]-----------------------
#  define double16_CONSTRUCTOR(...) double16(__VA_ARGS__)
class double16{
public:
  union { double s0, x; };
  union { double s1, y; };
  union { double s2, z; };
  union { double s3, w; };
  double s4;
  double s5;
  double s6;
  double s7;
  double s8;
  double s9;
  double s10;
  double s11;
  double s12;
  double s13;
  double s14;
  double s15;

  inline double16() : 
    x(0),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_) : 
    x(x_),
    y(0),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_) : 
    x(x_),
    y(y_),
    z(0),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_) : 
    x(x_),
    y(y_),
    z(z_),
    w(0),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(0),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(0),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(0),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(0),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(0),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(0),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(0),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_,
                  const double &s10_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(0),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_,
                  const double &s10_,
                  const double &s11_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(0),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_,
                  const double &s10_,
                  const double &s11_,
                  const double &s12_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(0),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_,
                  const double &s10_,
                  const double &s11_,
                  const double &s12_,
                  const double &s13_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(0),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_,
                  const double &s10_,
                  const double &s11_,
                  const double &s12_,
                  const double &s13_,
                  const double &s14_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(0) {}

  inline double16(const double &x_,
                  const double &y_,
                  const double &z_,
                  const double &w_,
                  const double &s4_,
                  const double &s5_,
                  const double &s6_,
                  const double &s7_,
                  const double &s8_,
                  const double &s9_,
                  const double &s10_,
                  const double &s11_,
                  const double &s12_,
                  const double &s13_,
                  const double &s14_,
                  const double &s15_) : 
    x(x_),
    y(y_),
    z(z_),
    w(w_),
    s4(s4_),
    s5(s5_),
    s6(s6_),
    s7(s7_),
    s8(s8_),
    s9(s9_),
    s10(s10_),
    s11(s11_),
    s12(s12_),
    s13(s13_),
    s14(s14_),
    s15(s15_) {}
};

inline double16 operator + (const double16 &a){
  return double16_CONSTRUCTOR(+a.x,
                              +a.y,
                              +a.z,
                              +a.w,
                              +a.s4,
                              +a.s5,
                              +a.s6,
                              +a.s7,
                              +a.s8,
                              +a.s9,
                              +a.s10,
                              +a.s11,
                              +a.s12,
                              +a.s13,
                              +a.s14,
                              +a.s15);
}
inline double16 operator - (const double16 &a){
  return double16_CONSTRUCTOR(-a.x,
                              -a.y,
                              -a.z,
                              -a.w,
                              -a.s4,
                              -a.s5,
                              -a.s6,
                              -a.s7,
                              -a.s8,
                              -a.s9,
                              -a.s10,
                              -a.s11,
                              -a.s12,
                              -a.s13,
                              -a.s14,
                              -a.s15);
}
inline double16 operator + (const double16 &a, const double16 &b){
  return double16_CONSTRUCTOR(a.x + b.x,
                              a.y + b.y,
                              a.z + b.z,
                              a.w + b.w,
                              a.s4 + b.s4,
                              a.s5 + b.s5,
                              a.s6 + b.s6,
                              a.s7 + b.s7,
                              a.s8 + b.s8,
                              a.s9 + b.s9,
                              a.s10 + b.s10,
                              a.s11 + b.s11,
                              a.s12 + b.s12,
                              a.s13 + b.s13,
                              a.s14 + b.s14,
                              a.s15 + b.s15);
}

inline double16 operator + (const double &a, const double16 &b){
  return double16_CONSTRUCTOR(a + b.x,
                              a + b.y,
                              a + b.z,
                              a + b.w,
                              a + b.s4,
                              a + b.s5,
                              a + b.s6,
                              a + b.s7,
                              a + b.s8,
                              a + b.s9,
                              a + b.s10,
                              a + b.s11,
                              a + b.s12,
                              a + b.s13,
                              a + b.s14,
                              a + b.s15);
}

inline double16 operator + (const double16 &a, const double &b){
  return double16_CONSTRUCTOR(a.x + b,
                              a.y + b,
                              a.z + b,
                              a.w + b,
                              a.s4 + b,
                              a.s5 + b,
                              a.s6 + b,
                              a.s7 + b,
                              a.s8 + b,
                              a.s9 + b,
                              a.s10 + b,
                              a.s11 + b,
                              a.s12 + b,
                              a.s13 + b,
                              a.s14 + b,
                              a.s15 + b);
}

inline double16& operator += (double16 &a, const double16 &b){
  a.x += b.x;
  a.y += b.y;
  a.z += b.z;
  a.w += b.w;
  a.s4 += b.s4;
  a.s5 += b.s5;
  a.s6 += b.s6;
  a.s7 += b.s7;
  a.s8 += b.s8;
  a.s9 += b.s9;
  a.s10 += b.s10;
  a.s11 += b.s11;
  a.s12 += b.s12;
  a.s13 += b.s13;
  a.s14 += b.s14;
  a.s15 += b.s15;
  return a;
}

inline double16& operator += (double16 &a, const double &b){
  a.x += b;
  a.y += b;
  a.z += b;
  a.w += b;
  a.s4 += b;
  a.s5 += b;
  a.s6 += b;
  a.s7 += b;
  a.s8 += b;
  a.s9 += b;
  a.s10 += b;
  a.s11 += b;
  a.s12 += b;
  a.s13 += b;
  a.s14 += b;
  a.s15 += b;
  return a;
}
inline double16 operator - (const double16 &a, const double16 &b){
  return double16_CONSTRUCTOR(a.x - b.x,
                              a.y - b.y,
                              a.z - b.z,
                              a.w - b.w,
                              a.s4 - b.s4,
                              a.s5 - b.s5,
                              a.s6 - b.s6,
                              a.s7 - b.s7,
                              a.s8 - b.s8,
                              a.s9 - b.s9,
                              a.s10 - b.s10,
                              a.s11 - b.s11,
                              a.s12 - b.s12,
                              a.s13 - b.s13,
                              a.s14 - b.s14,
                              a.s15 - b.s15);
}

inline double16 operator - (const double &a, const double16 &b){
  return double16_CONSTRUCTOR(a - b.x,
                              a - b.y,
                              a - b.z,
                              a - b.w,
                              a - b.s4,
                              a - b.s5,
                              a - b.s6,
                              a - b.s7,
                              a - b.s8,
                              a - b.s9,
                              a - b.s10,
                              a - b.s11,
                              a - b.s12,
                              a - b.s13,
                              a - b.s14,
                              a - b.s15);
}

inline double16 operator - (const double16 &a, const double &b){
  return double16_CONSTRUCTOR(a.x - b,
                              a.y - b,
                              a.z - b,
                              a.w - b,
                              a.s4 - b,
                              a.s5 - b,
                              a.s6 - b,
                              a.s7 - b,
                              a.s8 - b,
                              a.s9 - b,
                              a.s10 - b,
                              a.s11 - b,
                              a.s12 - b,
                              a.s13 - b,
                              a.s14 - b,
                              a.s15 - b);
}

inline double16& operator -= (double16 &a, const double16 &b){
  a.x -= b.x;
  a.y -= b.y;
  a.z -= b.z;
  a.w -= b.w;
  a.s4 -= b.s4;
  a.s5 -= b.s5;
  a.s6 -= b.s6;
  a.s7 -= b.s7;
  a.s8 -= b.s8;
  a.s9 -= b.s9;
  a.s10 -= b.s10;
  a.s11 -= b.s11;
  a.s12 -= b.s12;
  a.s13 -= b.s13;
  a.s14 -= b.s14;
  a.s15 -= b.s15;
  return a;
}

inline double16& operator -= (double16 &a, const double &b){
  a.x -= b;
  a.y -= b;
  a.z -= b;
  a.w -= b;
  a.s4 -= b;
  a.s5 -= b;
  a.s6 -= b;
  a.s7 -= b;
  a.s8 -= b;
  a.s9 -= b;
  a.s10 -= b;
  a.s11 -= b;
  a.s12 -= b;
  a.s13 -= b;
  a.s14 -= b;
  a.s15 -= b;
  return a;
}
inline double16 operator * (const double16 &a, const double16 &b){
  return double16_CONSTRUCTOR(a.x * b.x,
                              a.y * b.y,
                              a.z * b.z,
                              a.w * b.w,
                              a.s4 * b.s4,
                              a.s5 * b.s5,
                              a.s6 * b.s6,
                              a.s7 * b.s7,
                              a.s8 * b.s8,
                              a.s9 * b.s9,
                              a.s10 * b.s10,
                              a.s11 * b.s11,
                              a.s12 * b.s12,
                              a.s13 * b.s13,
                              a.s14 * b.s14,
                              a.s15 * b.s15);
}

inline double16 operator * (const double &a, const double16 &b){
  return double16_CONSTRUCTOR(a * b.x,
                              a * b.y,
                              a * b.z,
                              a * b.w,
                              a * b.s4,
                              a * b.s5,
                              a * b.s6,
                              a * b.s7,
                              a * b.s8,
                              a * b.s9,
                              a * b.s10,
                              a * b.s11,
                              a * b.s12,
                              a * b.s13,
                              a * b.s14,
                              a * b.s15);
}

inline double16 operator * (const double16 &a, const double &b){
  return double16_CONSTRUCTOR(a.x * b,
                              a.y * b,
                              a.z * b,
                              a.w * b,
                              a.s4 * b,
                              a.s5 * b,
                              a.s6 * b,
                              a.s7 * b,
                              a.s8 * b,
                              a.s9 * b,
                              a.s10 * b,
                              a.s11 * b,
                              a.s12 * b,
                              a.s13 * b,
                              a.s14 * b,
                              a.s15 * b);
}

inline double16& operator *= (double16 &a, const double16 &b){
  a.x *= b.x;
  a.y *= b.y;
  a.z *= b.z;
  a.w *= b.w;
  a.s4 *= b.s4;
  a.s5 *= b.s5;
  a.s6 *= b.s6;
  a.s7 *= b.s7;
  a.s8 *= b.s8;
  a.s9 *= b.s9;
  a.s10 *= b.s10;
  a.s11 *= b.s11;
  a.s12 *= b.s12;
  a.s13 *= b.s13;
  a.s14 *= b.s14;
  a.s15 *= b.s15;
  return a;
}

inline double16& operator *= (double16 &a, const double &b){
  a.x *= b;
  a.y *= b;
  a.z *= b;
  a.w *= b;
  a.s4 *= b;
  a.s5 *= b;
  a.s6 *= b;
  a.s7 *= b;
  a.s8 *= b;
  a.s9 *= b;
  a.s10 *= b;
  a.s11 *= b;
  a.s12 *= b;
  a.s13 *= b;
  a.s14 *= b;
  a.s15 *= b;
  return a;
}
inline double16 operator / (const double16 &a, const double16 &b){
  return double16_CONSTRUCTOR(a.x / b.x,
                              a.y / b.y,
                              a.z / b.z,
                              a.w / b.w,
                              a.s4 / b.s4,
                              a.s5 / b.s5,
                              a.s6 / b.s6,
                              a.s7 / b.s7,
                              a.s8 / b.s8,
                              a.s9 / b.s9,
                              a.s10 / b.s10,
                              a.s11 / b.s11,
                              a.s12 / b.s12,
                              a.s13 / b.s13,
                              a.s14 / b.s14,
                              a.s15 / b.s15);
}

inline double16 operator / (const double &a, const double16 &b){
  return double16_CONSTRUCTOR(a / b.x,
                              a / b.y,
                              a / b.z,
                              a / b.w,
                              a / b.s4,
                              a / b.s5,
                              a / b.s6,
                              a / b.s7,
                              a / b.s8,
                              a / b.s9,
                              a / b.s10,
                              a / b.s11,
                              a / b.s12,
                              a / b.s13,
                              a / b.s14,
                              a / b.s15);
}

inline double16 operator / (const double16 &a, const double &b){
  return double16_CONSTRUCTOR(a.x / b,
                              a.y / b,
                              a.z / b,
                              a.w / b,
                              a.s4 / b,
                              a.s5 / b,
                              a.s6 / b,
                              a.s7 / b,
                              a.s8 / b,
                              a.s9 / b,
                              a.s10 / b,
                              a.s11 / b,
                              a.s12 / b,
                              a.s13 / b,
                              a.s14 / b,
                              a.s15 / b);
}

inline double16& operator /= (double16 &a, const double16 &b){
  a.x /= b.x;
  a.y /= b.y;
  a.z /= b.z;
  a.w /= b.w;
  a.s4 /= b.s4;
  a.s5 /= b.s5;
  a.s6 /= b.s6;
  a.s7 /= b.s7;
  a.s8 /= b.s8;
  a.s9 /= b.s9;
  a.s10 /= b.s10;
  a.s11 /= b.s11;
  a.s12 /= b.s12;
  a.s13 /= b.s13;
  a.s14 /= b.s14;
  a.s15 /= b.s15;
  return a;
}

inline double16& operator /= (double16 &a, const double &b){
  a.x /= b;
  a.y /= b;
  a.z /= b;
  a.w /= b;
  a.s4 /= b;
  a.s5 /= b;
  a.s6 /= b;
  a.s7 /= b;
  a.s8 /= b;
  a.s9 /= b;
  a.s10 /= b;
  a.s11 /= b;
  a.s12 /= b;
  a.s13 /= b;
  a.s14 /= b;
  a.s15 /= b;
  return a;
}

#if (OCCA_USING_SERIAL || OCCA_USING_OPENMP || OCCA_USING_PTHREADS)
inline std::ostream& operator << (std::ostream &out, const double16& a){
  out << "[" << a.x << ", "
             << a.y << ", "
             << a.z << ", "
             << a.w << ", "
             << a.s4 << ", "
             << a.s5 << ", "
             << a.s6 << ", "
             << a.s7 << ", "
             << a.s8 << ", "
             << a.s9 << ", "
             << a.s10 << ", "
             << a.s11 << ", "
             << a.s12 << ", "
             << a.s13 << ", "
             << a.s14 << ", "
             << a.s15
      << "]\n";

  return out;
}
#endif

//======================================


#endif
