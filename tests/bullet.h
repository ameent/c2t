//// headers.clean.h
# 1 "../../root.h"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 30 "/usr/include/stdc-predef.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/predefs.h" 1 3 4
# 31 "/usr/include/stdc-predef.h" 2 3 4
# 1 "<command-line>" 2
# 1 "../../root.h"
# 1 "../../bullet/src/btBulletDynamicsCommon.h" 1
# 20 "../../bullet/src/btBulletDynamicsCommon.h"
# 1 "../../bullet/src/btBulletCollisionCommon.h" 1
# 22 "../../bullet/src/btBulletCollisionCommon.h"
# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 1
# 68 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h"
class btStackAlloc;
class btCollisionShape;
class btConvexShape;
class btBroadphaseInterface;
class btSerializer;

# 1 "../src/LinearMath/btVector3.h" 1
# 21 "../src/LinearMath/btVector3.h"
# 1 "../src/LinearMath/float.h" 1
# 26 "../src/LinearMath/float.h"
# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 371 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 372 "/usr/include/features.h" 2 3 4
# 395 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 396 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/math.h" 2 3 4

extern "C" {



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 34 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 40 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 43 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 47 "/usr/include/math.h" 2 3 4
# 70 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                           ;





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();








extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();








extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();








extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 71 "/usr/include/math.h" 2 3 4
# 89 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                           ;





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();








extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();








extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();








extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 90 "/usr/include/math.h" 2 3 4
# 136 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                           ;





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ()
     __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();








extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();








extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();








extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 137 "/usr/include/math.h" 2 3 4
# 152 "/usr/include/math.h" 3 4
extern int signgam;
# 193 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 291 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 314 "/usr/include/math.h" 3 4
class __exception



   { public: 
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 478 "/usr/include/math.h" 3 4
}
# 27 "../src/LinearMath/float.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max () throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef class __locale_struct
 { public: 

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
class timespec
   { public: 
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
class timeval
   { public: 
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));
# 63 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef class __pthread_internal_list
 { public: 
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  class __pthread_mutex_s
   { public: 
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 115 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 202 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


}
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random () throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







class random_data
   { public: 
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand () throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 () throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 () throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 () throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





class drand48_data
   { public: 
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 492 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__, __alloc_size__ (2)));




extern void abort () throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) ()) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) ())
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv () throw ();
# 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 807 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 895 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt ();






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 952 "/usr/include/stdlib.h" 2 3 4
# 964 "/usr/include/stdlib.h" 3 4
}
# 28 "../src/LinearMath/float.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/float.h" 1 3 4
# 29 "../src/LinearMath/float.h" 2




inline int btGetVersion()
{
 return 278;
}
# 181 "../src/LinearMath/float.h"
# 1 "/usr/include/assert.h" 1 3 4
# 67 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 182 "../src/LinearMath/float.h" 2
# 208 "../src/LinearMath/float.h"

# 245 "../src/LinearMath/float.h"
inline float btSqrt(float y)
{
# 262 "../src/LinearMath/float.h"
 return sqrtf(y);

}
inline float btFabs(float x) { return fabsf(x); }
inline float btCos(float x) { return cosf(x); }
inline float btSin(float x) { return sinf(x); }
inline float btTan(float x) { return tanf(x); }
inline float btAcos(float x) {
 if (x<float(-1))
  x=float(-1);
 if (x>float(1))
  x=float(1);
 return acosf(x);
}
inline float btAsin(float x) {
 if (x<float(-1))
  x=float(-1);
 if (x>float(1))
  x=float(1);
 return asinf(x);
}
inline float btAtan(float x) { return atanf(x); }
inline float btAtan2(float x, float y) { return atan2f(x, y); }
inline float btExp(float x) { return expf(x); }
inline float btLog(float x) { return logf(x); }
inline float btPow(float x,float y) { return powf(x,y); }
inline float btFmod(float x,float y) { return fmodf(x,y); }
# 310 "../src/LinearMath/float.h"
inline float btAtan2Fast(float y, float x)
{
 float coeff_1 = (float(6.283185307179586232) * float(0.5)) / 4.0f;
 float coeff_2 = 3.0f * coeff_1;
 float abs_y = btFabs(y);
 float angle;
 if (x >= 0.0f) {
  float r = (x - abs_y) / (x + abs_y);
  angle = coeff_1 - coeff_1 * r;
 } else {
  float r = (x + abs_y) / (abs_y - x);
  angle = coeff_2 - coeff_1 * r;
 }
 return (y < 0.0f) ? -angle : angle;
}

inline bool btFuzzyZero(float x) { return btFabs(x) < 1.19209289550781250000e-7F; }

inline bool btEqual(float a, float eps) {
 return (((a) <= eps) && !((a) < -eps));
}
inline bool btGreaterEqual (float a, float eps) {
 return (!((a) <= eps));
}


inline int btIsNegative(float x) {
    return x < float(0.0) ? 1 : 0;
}

inline float btRadians(float x) { return x * (float(6.283185307179586232) / float(360.0)); }
inline float btDegrees(float x) { return x * (float(360.0) / float(6.283185307179586232)); }




inline float btFsel(float a, float b, float c)
{
 return a >= 0 ? b : c;
}




inline bool btMachineIsLittleEndian()
{
   long int i = 1;
   const char *p = (const char *) &i;
   if (p[0] == 1)
    return true;
   else
    return false;
}





inline unsigned btSelect(unsigned condition, unsigned valueIfConditionNonZero, unsigned valueIfConditionZero)
{




    unsigned testNz = (unsigned)(((int)condition | -(int)condition) >> 31);
    unsigned testEqz = ~testNz;
    return ((valueIfConditionNonZero & testNz) | (valueIfConditionZero & testEqz));
}
inline int btSelect(unsigned condition, int valueIfConditionNonZero, int valueIfConditionZero)
{
    unsigned testNz = (unsigned)(((int)condition | -(int)condition) >> 31);
    unsigned testEqz = ~testNz;
    return static_cast<int>((valueIfConditionNonZero & testNz) | (valueIfConditionZero & testEqz));
}
inline float btSelect(unsigned condition, float valueIfConditionNonZero, float valueIfConditionZero)
{



    return (condition != 0) ? valueIfConditionNonZero : valueIfConditionZero;

}

template<typename T> inline void btSwap(T& a, T& b)
{
 T tmp = a;
 a = b;
 b = tmp;
}



inline unsigned btSwapEndian(unsigned val)
{
 return (((val & 0xff000000) >> 24) | ((val & 0x00ff0000) >> 8) | ((val & 0x0000ff00) << 8) | ((val & 0x000000ff) << 24));
}

inline unsigned short btSwapEndian(unsigned short val)
{
 return static_cast<unsigned short>(((val & 0xff00) >> 8) | ((val & 0x00ff) << 8));
}

inline unsigned btSwapEndian(int val)
{
 return btSwapEndian((unsigned)val);
}

inline unsigned short btSwapEndian(short val)
{
 return btSwapEndian((unsigned short) val);
}







inline unsigned int btSwapEndianFloat(float d)
{
    unsigned int a = 0;
    unsigned char *dst = (unsigned char *)&a;
    unsigned char *src = (unsigned char *)&d;

    dst[0] = src[3];
    dst[1] = src[2];
    dst[2] = src[1];
    dst[3] = src[0];
    return a;
}


inline float btUnswapEndianFloat(unsigned int a)
{
    float d = 0.0f;
    unsigned char *src = (unsigned char *)&a;
    unsigned char *dst = (unsigned char *)&d;

    dst[0] = src[3];
    dst[1] = src[2];
    dst[2] = src[1];
    dst[3] = src[0];

    return d;
}



inline void btSwapEndianDouble(double d, unsigned char* dst)
{
    unsigned char *src = (unsigned char *)&d;

    dst[0] = src[7];
    dst[1] = src[6];
    dst[2] = src[5];
    dst[3] = src[4];
    dst[4] = src[3];
    dst[5] = src[2];
    dst[6] = src[1];
    dst[7] = src[0];

}


inline double btUnswapEndianDouble(const unsigned char *src)
{
    double d = 0.0;
    unsigned char *dst = (unsigned char *)&d;

    dst[0] = src[7];
    dst[1] = src[6];
    dst[2] = src[5];
    dst[3] = src[4];
    dst[4] = src[3];
    dst[5] = src[2];
    dst[6] = src[1];
    dst[7] = src[0];

 return d;
}


inline float btNormalizeAngle(float angleInRadians)
{
 angleInRadians = btFmod(angleInRadians, float(6.283185307179586232));
 if(angleInRadians < -(float(6.283185307179586232) * float(0.5)))
 {
  return angleInRadians + float(6.283185307179586232);
 }
 else if(angleInRadians > (float(6.283185307179586232) * float(0.5)))
 {
  return angleInRadians - float(6.283185307179586232);
 }
 else
 {
  return angleInRadians;
 }
}


class btTypedObject
 { public: 
 btTypedObject(int objectType)
  :m_objectType(objectType)
 {
 }
 int m_objectType;
 inline int getObjectType() const
 {
  return m_objectType;
 }
};
# 22 "../src/LinearMath/btVector3.h" 2
# 1 "../src/LinearMath/btMinMax.h" 1
# 20 "../src/LinearMath/btMinMax.h"
# 1 "../src/LinearMath/float.h" 1
# 21 "../src/LinearMath/btMinMax.h" 2

template <class T>
inline const T& btMin(const T& a, const T& b)
{
  return a < b ? a : b ;
}

template <class T>
inline const T& btMax(const T& a, const T& b)
{
  return a > b ? a : b;
}

template <class T>
inline const T& btClamped(const T& a, const T& lb, const T& ub)
{
 return a < lb ? lb : (ub < a ? ub : a);
}

template <class T>
inline void btSetMin(T& a, const T& b)
{
    if (b < a)
 {
  a = b;
 }
}

template <class T>
inline void btSetMax(T& a, const T& b)
{
    if (a < b)
 {
  a = b;
 }
}

template <class T>
inline void btClamp(T& a, const T& lb, const T& ub)
{
 if (a < lb)
 {
  a = lb;
 }
 else if (ub < a)
 {
  a = ub;
 }
}
# 23 "../src/LinearMath/btVector3.h" 2
# 39 "../src/LinearMath/btVector3.h"
class btVector3
{
public:
# 66 "../src/LinearMath/btVector3.h"
 float m_floats[4];



 public:


 inline btVector3() {}
# 82 "../src/LinearMath/btVector3.h"
 inline btVector3(const float& x, const float& y, const float& z)
 {
  m_floats[0] = x;
  m_floats[1] = y;
  m_floats[2] = z;
  m_floats[3] = float(0.);
 }




 inline btVector3& operator+=(const btVector3& v)
 {

  m_floats[0] += v.m_floats[0]; m_floats[1] += v.m_floats[1];m_floats[2] += v.m_floats[2];
  return *this;
 }




 inline btVector3& operator-=(const btVector3& v)
 {
  m_floats[0] -= v.m_floats[0]; m_floats[1] -= v.m_floats[1];m_floats[2] -= v.m_floats[2];
  return *this;
 }


 inline btVector3& operator*=(const float& s)
 {
  m_floats[0] *= s; m_floats[1] *= s;m_floats[2] *= s;
  return *this;
 }



 inline btVector3& operator/=(const float& s)
 {
  ;
  return *this *= float(1.0) / s;
 }



 inline float dot(const btVector3& v) const
 {
  return m_floats[0] * v.m_floats[0] + m_floats[1] * v.m_floats[1] +m_floats[2] * v.m_floats[2];
 }


 inline float length2() const
 {
  return dot(*this);
 }


 inline float length() const
 {
  return btSqrt(length2());
 }



 inline float distance2(const btVector3& v) const;



 inline float distance(const btVector3& v) const;

 inline btVector3& safeNormalize()
 {
  btVector3 absVec = this->absolute();
  int maxIndex = absVec.maxAxis();
  if (absVec[maxIndex]>0)
  {
   *this /= absVec[maxIndex];
   return *this /= length();
  }
  setValue(1,0,0);
  return *this;
 }



 inline btVector3& normalize()
 {
  return *this /= length();
 }


 inline btVector3 normalized() const;




 inline btVector3 rotate( const btVector3& wAxis, const float angle ) const;



 inline float angle(const btVector3& v) const
 {
  float s = btSqrt(length2() * v.length2());
  ;
  return btAcos(dot(v) / s);
 }

 inline btVector3 absolute() const
 {
  return btVector3(
   btFabs(m_floats[0]),
   btFabs(m_floats[1]),
   btFabs(m_floats[2]));
 }


 inline btVector3 cross(const btVector3& v) const
 {
  return btVector3(
   m_floats[1] * v.m_floats[2] -m_floats[2] * v.m_floats[1],
   m_floats[2] * v.m_floats[0] - m_floats[0] * v.m_floats[2],
   m_floats[0] * v.m_floats[1] - m_floats[1] * v.m_floats[0]);
 }

 inline float triple(const btVector3& v1, const btVector3& v2) const
 {
  return m_floats[0] * (v1.m_floats[1] * v2.m_floats[2] - v1.m_floats[2] * v2.m_floats[1]) +
   m_floats[1] * (v1.m_floats[2] * v2.m_floats[0] - v1.m_floats[0] * v2.m_floats[2]) +
   m_floats[2] * (v1.m_floats[0] * v2.m_floats[1] - v1.m_floats[1] * v2.m_floats[0]);
 }



 inline int minAxis() const
 {
  return m_floats[0] < m_floats[1] ? (m_floats[0] <m_floats[2] ? 0 : 2) : (m_floats[1] <m_floats[2] ? 1 : 2);
 }



 inline int maxAxis() const
 {
  return m_floats[0] < m_floats[1] ? (m_floats[1] <m_floats[2] ? 2 : 1) : (m_floats[0] <m_floats[2] ? 2 : 0);
 }

 inline int furthestAxis() const
 {
  return absolute().minAxis();
 }

 inline int closestAxis() const
 {
  return absolute().maxAxis();
 }

 inline void setInterpolate3(const btVector3& v0, const btVector3& v1, float rt)
 {
  float s = float(1.0) - rt;
  m_floats[0] = s * v0.m_floats[0] + rt * v1.m_floats[0];
  m_floats[1] = s * v0.m_floats[1] + rt * v1.m_floats[1];
  m_floats[2] = s * v0.m_floats[2] + rt * v1.m_floats[2];


 }




 inline btVector3 lerp(const btVector3& v, const float& t) const
 {
  return btVector3(m_floats[0] + (v.m_floats[0] - m_floats[0]) * t,
   m_floats[1] + (v.m_floats[1] - m_floats[1]) * t,
   m_floats[2] + (v.m_floats[2] -m_floats[2]) * t);
 }



 inline btVector3& operator*=(const btVector3& v)
 {
  m_floats[0] *= v.m_floats[0]; m_floats[1] *= v.m_floats[1];m_floats[2] *= v.m_floats[2];
  return *this;
 }


  inline const float& getX() const { return m_floats[0]; }

  inline const float& getY() const { return m_floats[1]; }

  inline const float& getZ() const { return m_floats[2]; }

  inline void setX(float x) { m_floats[0] = x;};

  inline void setY(float y) { m_floats[1] = y;};

  inline void setZ(float z) {m_floats[2] = z;};

  inline void setW(float w) { m_floats[3] = w;};

  inline const float& x() const { return m_floats[0]; }

  inline const float& y() const { return m_floats[1]; }

  inline const float& z() const { return m_floats[2]; }

  inline const float& w() const { return m_floats[3]; }




 inline operator float *() { return &m_floats[0]; }
 inline operator const float *() const { return &m_floats[0]; }

 inline bool operator==(const btVector3& other) const
 {
  return ((m_floats[3]==other.m_floats[3]) && (m_floats[2]==other.m_floats[2]) && (m_floats[1]==other.m_floats[1]) && (m_floats[0]==other.m_floats[0]));
 }

 inline bool operator!=(const btVector3& other) const
 {
  return !(*this == other);
 }




  inline void setMax(const btVector3& other)
  {
   btSetMax(m_floats[0], other.m_floats[0]);
   btSetMax(m_floats[1], other.m_floats[1]);
   btSetMax(m_floats[2], other.m_floats[2]);
   btSetMax(m_floats[3], other.w());
  }



  inline void setMin(const btVector3& other)
  {
   btSetMin(m_floats[0], other.m_floats[0]);
   btSetMin(m_floats[1], other.m_floats[1]);
   btSetMin(m_floats[2], other.m_floats[2]);
   btSetMin(m_floats[3], other.w());
  }

  inline void setValue(const float& x, const float& y, const float& z)
  {
   m_floats[0]=x;
   m_floats[1]=y;
   m_floats[2]=z;
   m_floats[3] = float(0.);
  }

  void getSkewSymmetricMatrix(btVector3* v0,btVector3* v1,btVector3* v2) const
  {
   v0->setValue(0. ,-z() ,y());
   v1->setValue(z() ,0. ,-x());
   v2->setValue(-y() ,x() ,0.);
  }

  void setZero()
  {
   setValue(float(0.),float(0.),float(0.));
  }

  inline bool isZero() const
  {
   return m_floats[0] == float(0) && m_floats[1] == float(0) && m_floats[2] == float(0);
  }

  inline bool fuzzyZero() const
  {
   return length2() < 1.19209289550781250000e-7F;
  }

  inline void serialize(struct btVector3FloatData& dataOut) const;

  inline void deSerialize(const struct btVector3FloatData& dataIn);

  inline void serializeFloat(struct btVector3FloatData& dataOut) const;

  inline void deSerializeFloat(const struct btVector3FloatData& dataIn);

  inline void serializeDouble(struct btVector3DoubleData& dataOut) const;

  inline void deSerializeDouble(const struct btVector3DoubleData& dataIn);

};


inline btVector3
operator+(const btVector3& v1, const btVector3& v2)
{
 return btVector3(v1.m_floats[0] + v2.m_floats[0], v1.m_floats[1] + v2.m_floats[1], v1.m_floats[2] + v2.m_floats[2]);
}


inline btVector3
operator*(const btVector3& v1, const btVector3& v2)
{
 return btVector3(v1.m_floats[0] * v2.m_floats[0], v1.m_floats[1] * v2.m_floats[1], v1.m_floats[2] * v2.m_floats[2]);
}


inline btVector3
operator-(const btVector3& v1, const btVector3& v2)
{
 return btVector3(v1.m_floats[0] - v2.m_floats[0], v1.m_floats[1] - v2.m_floats[1], v1.m_floats[2] - v2.m_floats[2]);
}

inline btVector3
operator-(const btVector3& v)
{
 return btVector3(-v.m_floats[0], -v.m_floats[1], -v.m_floats[2]);
}


inline btVector3
operator*(const btVector3& v, const float& s)
{
 return btVector3(v.m_floats[0] * s, v.m_floats[1] * s, v.m_floats[2] * s);
}


inline btVector3
operator*(const float& s, const btVector3& v)
{
 return v * s;
}


inline btVector3
operator/(const btVector3& v, const float& s)
{
 ;
 return v * (float(1.0) / s);
}


inline btVector3
operator/(const btVector3& v1, const btVector3& v2)
{
 return btVector3(v1.m_floats[0] / v2.m_floats[0],v1.m_floats[1] / v2.m_floats[1],v1.m_floats[2] / v2.m_floats[2]);
}


inline float
btDot(const btVector3& v1, const btVector3& v2)
{
 return v1.dot(v2);
}



inline float
btDistance2(const btVector3& v1, const btVector3& v2)
{
 return v1.distance2(v2);
}



inline float
btDistance(const btVector3& v1, const btVector3& v2)
{
 return v1.distance(v2);
}


inline float
btAngle(const btVector3& v1, const btVector3& v2)
{
 return v1.angle(v2);
}


inline btVector3
btCross(const btVector3& v1, const btVector3& v2)
{
 return v1.cross(v2);
}

inline float
btTriple(const btVector3& v1, const btVector3& v2, const btVector3& v3)
{
 return v1.triple(v2, v3);
}





inline btVector3
lerp(const btVector3& v1, const btVector3& v2, const float& t)
{
 return v1.lerp(v2, t);
}



inline float btVector3::distance2(const btVector3& v) const
{
 return (v - *this).length2();
}

inline float btVector3::distance(const btVector3& v) const
{
 return (v - *this).length();
}

inline btVector3 btVector3::normalized() const
{
 return *this / length();
}

inline btVector3 btVector3::rotate( const btVector3& wAxis, const float angle ) const
{


 btVector3 o = wAxis * wAxis.dot( *this );
 btVector3 x = *this - o;
 btVector3 y;

 y = wAxis.cross( *this );

 return ( o + x * btCos( angle ) + y * btSin( angle ) );
}

class btVector4 : public btVector3
{
public:

 inline btVector4() {}


 inline btVector4(const float& x, const float& y, const float& z,const float& w)
  : btVector3(x,y,z)
 {
  m_floats[3] = w;
 }


 inline btVector4 absolute4() const
 {
  return btVector4(
   btFabs(m_floats[0]),
   btFabs(m_floats[1]),
   btFabs(m_floats[2]),
   btFabs(m_floats[3]));
 }



 float getW() const { return m_floats[3];}


  inline int maxAxis4() const
 {
  int maxIndex = -1;
  float maxVal = float(-1e18f);
  if (m_floats[0] > maxVal)
  {
   maxIndex = 0;
   maxVal = m_floats[0];
  }
  if (m_floats[1] > maxVal)
  {
   maxIndex = 1;
   maxVal = m_floats[1];
  }
  if (m_floats[2] > maxVal)
  {
   maxIndex = 2;
   maxVal =m_floats[2];
  }
  if (m_floats[3] > maxVal)
  {
   maxIndex = 3;
   maxVal = m_floats[3];
  }




  return maxIndex;

 }


 inline int minAxis4() const
 {
  int minIndex = -1;
  float minVal = float(1e18f);
  if (m_floats[0] < minVal)
  {
   minIndex = 0;
   minVal = m_floats[0];
  }
  if (m_floats[1] < minVal)
  {
   minIndex = 1;
   minVal = m_floats[1];
  }
  if (m_floats[2] < minVal)
  {
   minIndex = 2;
   minVal =m_floats[2];
  }
  if (m_floats[3] < minVal)
  {
   minIndex = 3;
   minVal = m_floats[3];
  }

  return minIndex;

 }


 inline int closestAxis4() const
 {
  return absolute4().maxAxis4();
 }
# 626 "../src/LinearMath/btVector3.h"
  inline void setValue(const float& x, const float& y, const float& z,const float& w)
  {
   m_floats[0]=x;
   m_floats[1]=y;
   m_floats[2]=z;
   m_floats[3]=w;
  }


};



inline void btSwapScalarEndian(const float& sourceVal, float& destVal)
{
# 653 "../src/LinearMath/btVector3.h"
 unsigned char* dest = (unsigned char*) &destVal;
 unsigned char* src = (unsigned char*) &sourceVal;
 dest[0] = src[3];
    dest[1] = src[2];
    dest[2] = src[1];
    dest[3] = src[0];

}

inline void btSwapVector3Endian(const btVector3& sourceVec, btVector3& destVec)
{
 for (int i=0;i<4;i++)
 {
  btSwapScalarEndian(sourceVec[i],destVec[i]);
 }

}


inline void btUnSwapVector3Endian(btVector3& vector)
{

 btVector3 swappedVec;
 for (int i=0;i<4;i++)
 {
  btSwapScalarEndian(vector[i],swappedVec[i]);
 }
 vector = swappedVec;
}

template <class T>
inline void btPlaneSpace1 (const T& n, T& p, T& q)
{
  if (btFabs(n[2]) > float(0.7071067811865475244008443621048490)) {

    float a = n[1]*n[1] + n[2]*n[2];
    float k = ((float)(float(1.0)/btSqrt(float(a))));
    p[0] = 0;
 p[1] = -n[2]*k;
 p[2] = n[1]*k;

    q[0] = a*k;
 q[1] = -n[0]*p[2];
 q[2] = n[0]*p[1];
  }
  else {

    float a = n[0]*n[0] + n[1]*n[1];
    float k = ((float)(float(1.0)/btSqrt(float(a))));
    p[0] = -n[1]*k;
 p[1] = n[0]*k;
 p[2] = 0;

    q[0] = -n[2]*p[1];
 q[1] = n[2]*p[0];
 q[2] = a*k;
  }
}


class btVector3FloatData
 { public: 
 float m_floats[4];
};

class btVector3DoubleData
 { public: 
 double m_floats[4];

};

inline void btVector3::serializeFloat(struct btVector3FloatData& dataOut) const
{

 for (int i=0;i<4;i++)
  dataOut.m_floats[i] = float(m_floats[i]);
}

inline void btVector3::deSerializeFloat(const struct btVector3FloatData& dataIn)
{
 for (int i=0;i<4;i++)
  m_floats[i] = float(dataIn.m_floats[i]);
}


inline void btVector3::serializeDouble(struct btVector3DoubleData& dataOut) const
{

 for (int i=0;i<4;i++)
  dataOut.m_floats[i] = double(m_floats[i]);
}

inline void btVector3::deSerializeDouble(const struct btVector3DoubleData& dataIn)
{
 for (int i=0;i<4;i++)
  m_floats[i] = float(dataIn.m_floats[i]);
}


inline void btVector3::serialize(struct btVector3FloatData& dataOut) const
{

 for (int i=0;i<4;i++)
  dataOut.m_floats[i] = m_floats[i];
}

inline void btVector3::deSerialize(const struct btVector3FloatData& dataIn)
{
 for (int i=0;i<4;i++)
  m_floats[i] = dataIn.m_floats[i];
}
# 75 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 2
# 1 "../src/LinearMath/btTransform.h" 1
# 21 "../src/LinearMath/btTransform.h"
# 1 "../src/LinearMath/btMatrix3x3.h" 1
# 19 "../src/LinearMath/btMatrix3x3.h"
# 1 "../src/LinearMath/btVector3.h" 1
# 20 "../src/LinearMath/btMatrix3x3.h" 2
# 1 "../src/LinearMath/btQuaternion.h" 1
# 22 "../src/LinearMath/btQuaternion.h"
# 1 "../src/LinearMath/btQuadWord.h" 1
# 31 "../src/LinearMath/btQuadWord.h"
class btQuadWord



{
protected:
# 50 "../src/LinearMath/btQuadWord.h"
 float m_floats[4];


 public:



  inline const float& getX() const { return m_floats[0]; }

  inline const float& getY() const { return m_floats[1]; }

  inline const float& getZ() const { return m_floats[2]; }

  inline void setX(float x) { m_floats[0] = x;};

  inline void setY(float y) { m_floats[1] = y;};

  inline void setZ(float z) { m_floats[2] = z;};

  inline void setW(float w) { m_floats[3] = w;};

  inline const float& x() const { return m_floats[0]; }

  inline const float& y() const { return m_floats[1]; }

  inline const float& z() const { return m_floats[2]; }

  inline const float& w() const { return m_floats[3]; }




 inline operator float *() { return &m_floats[0]; }
 inline operator const float *() const { return &m_floats[0]; }

 inline bool operator==(const btQuadWord& other) const
 {
  return ((m_floats[3]==other.m_floats[3]) && (m_floats[2]==other.m_floats[2]) && (m_floats[1]==other.m_floats[1]) && (m_floats[0]==other.m_floats[0]));
 }

 inline bool operator!=(const btQuadWord& other) const
 {
  return !(*this == other);
 }






  inline void setValue(const float& x, const float& y, const float& z)
  {
   m_floats[0]=x;
   m_floats[1]=y;
   m_floats[2]=z;
   m_floats[3] = 0.f;
  }
# 121 "../src/LinearMath/btQuadWord.h"
  inline void setValue(const float& x, const float& y, const float& z,const float& w)
  {
   m_floats[0]=x;
   m_floats[1]=y;
   m_floats[2]=z;
   m_floats[3]=w;
  }

  inline btQuadWord()

  {
  }






  inline btQuadWord(const float& x, const float& y, const float& z)
  {
   m_floats[0] = x, m_floats[1] = y, m_floats[2] = z, m_floats[3] = 0.0f;
  }







  inline btQuadWord(const float& x, const float& y, const float& z,const float& w)
  {
   m_floats[0] = x, m_floats[1] = y, m_floats[2] = z, m_floats[3] = w;
  }




  inline void setMax(const btQuadWord& other)
  {
   btSetMax(m_floats[0], other.m_floats[0]);
   btSetMax(m_floats[1], other.m_floats[1]);
   btSetMax(m_floats[2], other.m_floats[2]);
   btSetMax(m_floats[3], other.m_floats[3]);
  }



  inline void setMin(const btQuadWord& other)
  {
   btSetMin(m_floats[0], other.m_floats[0]);
   btSetMin(m_floats[1], other.m_floats[1]);
   btSetMin(m_floats[2], other.m_floats[2]);
   btSetMin(m_floats[3], other.m_floats[3]);
  }



};
# 23 "../src/LinearMath/btQuaternion.h" 2


class btQuaternion : public btQuadWord {
public:

 btQuaternion() {}




 btQuaternion(const float& x, const float& y, const float& z, const float& w)
  : btQuadWord(x, y, z, w)
 {}



 btQuaternion(const btVector3& axis, const float& angle)
 {
  setRotation(axis, angle);
 }




 btQuaternion(const float& yaw, const float& pitch, const float& roll)
 {

  setEuler(yaw, pitch, roll);



 }



 void setRotation(const btVector3& axis, const float& angle)
 {
  float d = axis.length();
  ;
  float s = btSin(angle * float(0.5)) / d;
  setValue(axis.x() * s, axis.y() * s, axis.z() * s,
   btCos(angle * float(0.5)));
 }




 void setEuler(const float& yaw, const float& pitch, const float& roll)
 {
  float halfYaw = float(yaw) * float(0.5);
  float halfPitch = float(pitch) * float(0.5);
  float halfRoll = float(roll) * float(0.5);
  float cosYaw = btCos(halfYaw);
  float sinYaw = btSin(halfYaw);
  float cosPitch = btCos(halfPitch);
  float sinPitch = btSin(halfPitch);
  float cosRoll = btCos(halfRoll);
  float sinRoll = btSin(halfRoll);
  setValue(cosRoll * sinPitch * cosYaw + sinRoll * cosPitch * sinYaw,
   cosRoll * cosPitch * sinYaw - sinRoll * sinPitch * cosYaw,
   sinRoll * cosPitch * cosYaw - cosRoll * sinPitch * sinYaw,
   cosRoll * cosPitch * cosYaw + sinRoll * sinPitch * sinYaw);
 }




 void setEulerZYX(const float& yaw, const float& pitch, const float& roll)
 {
  float halfYaw = float(yaw) * float(0.5);
  float halfPitch = float(pitch) * float(0.5);
  float halfRoll = float(roll) * float(0.5);
  float cosYaw = btCos(halfYaw);
  float sinYaw = btSin(halfYaw);
  float cosPitch = btCos(halfPitch);
  float sinPitch = btSin(halfPitch);
  float cosRoll = btCos(halfRoll);
  float sinRoll = btSin(halfRoll);
  setValue(sinRoll * cosPitch * cosYaw - cosRoll * sinPitch * sinYaw,
                         cosRoll * sinPitch * cosYaw + sinRoll * cosPitch * sinYaw,
                         cosRoll * cosPitch * sinYaw - sinRoll * sinPitch * cosYaw,
                         cosRoll * cosPitch * cosYaw + sinRoll * sinPitch * sinYaw);
 }


 inline btQuaternion& operator+=(const btQuaternion& q)
 {
  m_floats[0] += q.x(); m_floats[1] += q.y(); m_floats[2] += q.z(); m_floats[3] += q.m_floats[3];
  return *this;
 }



 btQuaternion& operator-=(const btQuaternion& q)
 {
  m_floats[0] -= q.x(); m_floats[1] -= q.y(); m_floats[2] -= q.z(); m_floats[3] -= q.m_floats[3];
  return *this;
 }



 btQuaternion& operator*=(const float& s)
 {
  m_floats[0] *= s; m_floats[1] *= s; m_floats[2] *= s; m_floats[3] *= s;
  return *this;
 }




 btQuaternion& operator*=(const btQuaternion& q)
 {
  setValue(m_floats[3] * q.x() + m_floats[0] * q.m_floats[3] + m_floats[1] * q.z() - m_floats[2] * q.y(),
   m_floats[3] * q.y() + m_floats[1] * q.m_floats[3] + m_floats[2] * q.x() - m_floats[0] * q.z(),
   m_floats[3] * q.z() + m_floats[2] * q.m_floats[3] + m_floats[0] * q.y() - m_floats[1] * q.x(),
   m_floats[3] * q.m_floats[3] - m_floats[0] * q.x() - m_floats[1] * q.y() - m_floats[2] * q.z());
  return *this;
 }


 float dot(const btQuaternion& q) const
 {
  return m_floats[0] * q.x() + m_floats[1] * q.y() + m_floats[2] * q.z() + m_floats[3] * q.m_floats[3];
 }


 float length2() const
 {
  return dot(*this);
 }


 float length() const
 {
  return btSqrt(length2());
 }



 btQuaternion& normalize()
 {
  return *this /= length();
 }



 inline btQuaternion
 operator*(const float& s) const
 {
  return btQuaternion(x() * s, y() * s, z() * s, m_floats[3] * s);
 }




 btQuaternion operator/(const float& s) const
 {
  ;
  return *this * (float(1.0) / s);
 }



 btQuaternion& operator/=(const float& s)
 {
  ;
  return *this *= float(1.0) / s;
 }


 btQuaternion normalized() const
 {
  return *this / length();
 }


 float angle(const btQuaternion& q) const
 {
  float s = btSqrt(length2() * q.length2());
  ;
  return btAcos(dot(q) / s);
 }

 float getAngle() const
 {
  float s = float(2.) * btAcos(m_floats[3]);
  return s;
 }


 btVector3 getAxis() const
 {
  float s_squared = float(1.) - btPow(m_floats[3], float(2.));
  if (s_squared < float(10.) * 1.19209289550781250000e-7F)
   return btVector3(1.0, 0.0, 0.0);
  float s = btSqrt(s_squared);
  return btVector3(m_floats[0] / s, m_floats[1] / s, m_floats[2] / s);
 }


 btQuaternion inverse() const
 {
  return btQuaternion(-m_floats[0], -m_floats[1], -m_floats[2], m_floats[3]);
 }



 inline btQuaternion
 operator+(const btQuaternion& q2) const
 {
  const btQuaternion& q1 = *this;
  return btQuaternion(q1.x() + q2.x(), q1.y() + q2.y(), q1.z() + q2.z(), q1.m_floats[3] + q2.m_floats[3]);
 }



 inline btQuaternion
 operator-(const btQuaternion& q2) const
 {
  const btQuaternion& q1 = *this;
  return btQuaternion(q1.x() - q2.x(), q1.y() - q2.y(), q1.z() - q2.z(), q1.m_floats[3] - q2.m_floats[3]);
 }



 inline btQuaternion operator-() const
 {
  const btQuaternion& q2 = *this;
  return btQuaternion( - q2.x(), - q2.y(), - q2.z(), - q2.m_floats[3]);
 }

 inline btQuaternion farthest( const btQuaternion& qd) const
 {
  btQuaternion diff,sum;
  diff = *this - qd;
  sum = *this + qd;
  if( diff.dot(diff) > sum.dot(sum) )
   return qd;
  return (-qd);
 }


 inline btQuaternion nearest( const btQuaternion& qd) const
 {
  btQuaternion diff,sum;
  diff = *this - qd;
  sum = *this + qd;
  if( diff.dot(diff) < sum.dot(sum) )
   return qd;
  return (-qd);
 }






 btQuaternion slerp(const btQuaternion& q, const float& t) const
 {
  float theta = angle(q);
  if (theta != float(0.0))
  {
   float d = float(1.0) / btSin(theta);
   float s0 = btSin((float(1.0) - t) * theta);
   float s1 = btSin(t * theta);
                        if (dot(q) < 0)
                          return btQuaternion((m_floats[0] * s0 + -q.x() * s1) * d,
                                              (m_floats[1] * s0 + -q.y() * s1) * d,
                                              (m_floats[2] * s0 + -q.z() * s1) * d,
                                              (m_floats[3] * s0 + -q.m_floats[3] * s1) * d);
                        else
                          return btQuaternion((m_floats[0] * s0 + q.x() * s1) * d,
                                              (m_floats[1] * s0 + q.y() * s1) * d,
                                              (m_floats[2] * s0 + q.z() * s1) * d,
                                              (m_floats[3] * s0 + q.m_floats[3] * s1) * d);

  }
  else
  {
   return *this;
  }
 }

 static const btQuaternion& getIdentity()
 {
  static const btQuaternion identityQuat(float(0.),float(0.),float(0.),float(1.));
  return identityQuat;
 }

 inline const float& getW() const { return m_floats[3]; }


};



inline btQuaternion
operator-(const btQuaternion& q)
{
 return btQuaternion(-q.x(), -q.y(), -q.z(), -q.w());
}




inline btQuaternion
operator*(const btQuaternion& q1, const btQuaternion& q2) {
 return btQuaternion(q1.w() * q2.x() + q1.x() * q2.w() + q1.y() * q2.z() - q1.z() * q2.y(),
  q1.w() * q2.y() + q1.y() * q2.w() + q1.z() * q2.x() - q1.x() * q2.z(),
  q1.w() * q2.z() + q1.z() * q2.w() + q1.x() * q2.y() - q1.y() * q2.x(),
  q1.w() * q2.w() - q1.x() * q2.x() - q1.y() * q2.y() - q1.z() * q2.z());
}

inline btQuaternion
operator*(const btQuaternion& q, const btVector3& w)
{
 return btQuaternion( q.w() * w.x() + q.y() * w.z() - q.z() * w.y(),
  q.w() * w.y() + q.z() * w.x() - q.x() * w.z(),
  q.w() * w.z() + q.x() * w.y() - q.y() * w.x(),
  -q.x() * w.x() - q.y() * w.y() - q.z() * w.z());
}

inline btQuaternion
operator*(const btVector3& w, const btQuaternion& q)
{
 return btQuaternion( w.x() * q.w() + w.y() * q.z() - w.z() * q.y(),
  w.y() * q.w() + w.z() * q.x() - w.x() * q.z(),
  w.z() * q.w() + w.x() * q.y() - w.y() * q.x(),
  -w.x() * q.x() - w.y() * q.y() - w.z() * q.z());
}


inline float
dot(const btQuaternion& q1, const btQuaternion& q2)
{
 return q1.dot(q2);
}



inline float
length(const btQuaternion& q)
{
 return q.length();
}


inline float
angle(const btQuaternion& q1, const btQuaternion& q2)
{
 return q1.angle(q2);
}


inline btQuaternion
inverse(const btQuaternion& q)
{
 return q.inverse();
}






inline btQuaternion
slerp(const btQuaternion& q1, const btQuaternion& q2, const float& t)
{
 return q1.slerp(q2, t);
}

inline btVector3
quatRotate(const btQuaternion& rotation, const btVector3& v)
{
 btQuaternion q = rotation * v;
 q *= rotation.inverse();
 return btVector3(q.getX(),q.getY(),q.getZ());
}

inline btQuaternion
shortestArcQuat(const btVector3& v0, const btVector3& v1)
{
 btVector3 c = v0.cross(v1);
 float d = v0.dot(v1);

 if (d < -1.0 + 1.19209289550781250000e-7F)
 {
  btVector3 n,unused;
  btPlaneSpace1(v0,n,unused);
  return btQuaternion(n.x(),n.y(),n.z(),0.0f);
 }

 float s = btSqrt((1.0f + d) * 2.0f);
 float rs = 1.0f / s;

 return btQuaternion(c.getX()*rs,c.getY()*rs,c.getZ()*rs,s * 0.5f);
}

inline btQuaternion
shortestArcQuatNormalize2(btVector3& v0,btVector3& v1)
{
 v0.normalize();
 v1.normalize();
 return shortestArcQuat(v0,v1);
}
# 21 "../src/LinearMath/btMatrix3x3.h" 2
# 31 "../src/LinearMath/btMatrix3x3.h"
class btMatrix3x3 {


 btVector3 m_el[3];

public:

 btMatrix3x3 () {}




 explicit btMatrix3x3(const btQuaternion& q) { setRotation(q); }
# 52 "../src/LinearMath/btMatrix3x3.h"
 btMatrix3x3(const float& xx, const float& xy, const float& xz,
  const float& yx, const float& yy, const float& yz,
  const float& zx, const float& zy, const float& zz)
 {
  setValue(xx, xy, xz,
   yx, yy, yz,
   zx, zy, zz);
 }

 inline btMatrix3x3 (const btMatrix3x3& other)
 {
  m_el[0] = other.m_el[0];
  m_el[1] = other.m_el[1];
  m_el[2] = other.m_el[2];
 }

 inline btMatrix3x3& operator=(const btMatrix3x3& other)
 {
  m_el[0] = other.m_el[0];
  m_el[1] = other.m_el[1];
  m_el[2] = other.m_el[2];
  return *this;
 }



 inline btVector3 getColumn(int i) const
 {
  return btVector3(m_el[0][i],m_el[1][i],m_el[2][i]);
 }




 inline const btVector3& getRow(int i) const
 {
  ;
  return m_el[i];
 }



 inline btVector3& operator[](int i)
 {
  ;
  return m_el[i];
 }



 inline const btVector3& operator[](int i) const
 {
  ;
  return m_el[i];
 }




 btMatrix3x3& operator*=(const btMatrix3x3& m);




 btMatrix3x3& operator+=(const btMatrix3x3& m);




 btMatrix3x3& operator-=(const btMatrix3x3& m);



 void setFromOpenGLSubMatrix(const float *m)
 {
  m_el[0].setValue(m[0],m[4],m[8]);
  m_el[1].setValue(m[1],m[5],m[9]);
  m_el[2].setValue(m[2],m[6],m[10]);

 }
# 142 "../src/LinearMath/btMatrix3x3.h"
 void setValue(const float& xx, const float& xy, const float& xz,
  const float& yx, const float& yy, const float& yz,
  const float& zx, const float& zy, const float& zz)
 {
  m_el[0].setValue(xx,xy,xz);
  m_el[1].setValue(yx,yy,yz);
  m_el[2].setValue(zx,zy,zz);
 }



 void setRotation(const btQuaternion& q)
 {
  float d = q.length2();
  ;
  float s = float(2.0) / d;
  float xs = q.x() * s, ys = q.y() * s, zs = q.z() * s;
  float wx = q.w() * xs, wy = q.w() * ys, wz = q.w() * zs;
  float xx = q.x() * xs, xy = q.x() * ys, xz = q.x() * zs;
  float yy = q.y() * ys, yz = q.y() * zs, zz = q.z() * zs;
  setValue(float(1.0) - (yy + zz), xy - wz, xz + wy,
   xy + wz, float(1.0) - (xx + zz), yz - wx,
   xz - wy, yz + wx, float(1.0) - (xx + yy));
 }







 void setEulerYPR(const float& yaw, const float& pitch, const float& roll)
 {
  setEulerZYX(roll, pitch, yaw);
 }
# 187 "../src/LinearMath/btMatrix3x3.h"
 void setEulerZYX(float eulerX,float eulerY,float eulerZ) {

  float ci ( btCos(eulerX));
  float cj ( btCos(eulerY));
  float ch ( btCos(eulerZ));
  float si ( btSin(eulerX));
  float sj ( btSin(eulerY));
  float sh ( btSin(eulerZ));
  float cc = ci * ch;
  float cs = ci * sh;
  float sc = si * ch;
  float ss = si * sh;

  setValue(cj * ch, sj * sc - cs, sj * cc + ss,
   cj * sh, sj * ss + cc, sj * cs - sc,
   -sj, cj * si, cj * ci);
 }


 void setIdentity()
 {
  setValue(float(1.0), float(0.0), float(0.0),
   float(0.0), float(1.0), float(0.0),
   float(0.0), float(0.0), float(1.0));
 }

 static const btMatrix3x3& getIdentity()
 {
  static const btMatrix3x3 identityMatrix(float(1.0), float(0.0), float(0.0),
   float(0.0), float(1.0), float(0.0),
   float(0.0), float(0.0), float(1.0));
  return identityMatrix;
 }



 void getOpenGLSubMatrix(float *m) const
 {
  m[0] = float(m_el[0].x());
  m[1] = float(m_el[1].x());
  m[2] = float(m_el[2].x());
  m[3] = float(0.0);
  m[4] = float(m_el[0].y());
  m[5] = float(m_el[1].y());
  m[6] = float(m_el[2].y());
  m[7] = float(0.0);
  m[8] = float(m_el[0].z());
  m[9] = float(m_el[1].z());
  m[10] = float(m_el[2].z());
  m[11] = float(0.0);
 }



 void getRotation(btQuaternion& q) const
 {
  float trace = m_el[0].x() + m_el[1].y() + m_el[2].z();
  float temp[4];

  if (trace > float(0.0))
  {
   float s = btSqrt(trace + float(1.0));
   temp[3]=(s * float(0.5));
   s = float(0.5) / s;

   temp[0]=((m_el[2].y() - m_el[1].z()) * s);
   temp[1]=((m_el[0].z() - m_el[2].x()) * s);
   temp[2]=((m_el[1].x() - m_el[0].y()) * s);
  }
  else
  {
   int i = m_el[0].x() < m_el[1].y() ?
    (m_el[1].y() < m_el[2].z() ? 2 : 1) :
    (m_el[0].x() < m_el[2].z() ? 2 : 0);
   int j = (i + 1) % 3;
   int k = (i + 2) % 3;

   float s = btSqrt(m_el[i][i] - m_el[j][j] - m_el[k][k] + float(1.0));
   temp[i] = s * float(0.5);
   s = float(0.5) / s;

   temp[3] = (m_el[k][j] - m_el[j][k]) * s;
   temp[j] = (m_el[j][i] + m_el[i][j]) * s;
   temp[k] = (m_el[k][i] + m_el[i][k]) * s;
  }
  q.setValue(temp[0],temp[1],temp[2],temp[3]);
 }





 void getEulerYPR(float& yaw, float& pitch, float& roll) const
 {


  yaw = float(btAtan2(m_el[1].x(), m_el[0].x()));
  pitch = float(btAsin(-m_el[2].x()));
  roll = float(btAtan2(m_el[2].y(), m_el[2].z()));


  if (btFabs(pitch)==(float(6.283185307179586232) * float(0.25)))
  {
   if (yaw>0)
    yaw-=(float(6.283185307179586232) * float(0.5));
   else
    yaw+=(float(6.283185307179586232) * float(0.5));

   if (roll>0)
    roll-=(float(6.283185307179586232) * float(0.5));
   else
    roll+=(float(6.283185307179586232) * float(0.5));
  }
 };







 void getEulerZYX(float& yaw, float& pitch, float& roll, unsigned int solution_number = 1) const
 {
  class Euler
   { public: 
   float yaw;
   float pitch;
   float roll;
  };

  Euler euler_out;
  Euler euler_out2;



  if (btFabs(m_el[2].x()) >= 1)
  {
   euler_out.yaw = 0;
   euler_out2.yaw = 0;


   float delta = btAtan2(m_el[0].x(),m_el[0].z());
   if (m_el[2].x() > 0)
   {
    euler_out.pitch = (float(6.283185307179586232) * float(0.5)) / float(2.0);
    euler_out2.pitch = (float(6.283185307179586232) * float(0.5)) / float(2.0);
    euler_out.roll = euler_out.pitch + delta;
    euler_out2.roll = euler_out.pitch + delta;
   }
   else
   {
    euler_out.pitch = -(float(6.283185307179586232) * float(0.5)) / float(2.0);
    euler_out2.pitch = -(float(6.283185307179586232) * float(0.5)) / float(2.0);
    euler_out.roll = -euler_out.pitch + delta;
    euler_out2.roll = -euler_out.pitch + delta;
   }
  }
  else
  {
   euler_out.pitch = - btAsin(m_el[2].x());
   euler_out2.pitch = (float(6.283185307179586232) * float(0.5)) - euler_out.pitch;

   euler_out.roll = btAtan2(m_el[2].y()/btCos(euler_out.pitch),
    m_el[2].z()/btCos(euler_out.pitch));
   euler_out2.roll = btAtan2(m_el[2].y()/btCos(euler_out2.pitch),
    m_el[2].z()/btCos(euler_out2.pitch));

   euler_out.yaw = btAtan2(m_el[1].x()/btCos(euler_out.pitch),
    m_el[0].x()/btCos(euler_out.pitch));
   euler_out2.yaw = btAtan2(m_el[1].x()/btCos(euler_out2.pitch),
    m_el[0].x()/btCos(euler_out2.pitch));
  }

  if (solution_number == 1)
  {
   yaw = euler_out.yaw;
   pitch = euler_out.pitch;
   roll = euler_out.roll;
  }
  else
  {
   yaw = euler_out2.yaw;
   pitch = euler_out2.pitch;
   roll = euler_out2.roll;
  }
 }




 btMatrix3x3 scaled(const btVector3& s) const
 {
  return btMatrix3x3(m_el[0].x() * s.x(), m_el[0].y() * s.y(), m_el[0].z() * s.z(),
   m_el[1].x() * s.x(), m_el[1].y() * s.y(), m_el[1].z() * s.z(),
   m_el[2].x() * s.x(), m_el[2].y() * s.y(), m_el[2].z() * s.z());
 }


 float determinant() const;

 btMatrix3x3 adjoint() const;

 btMatrix3x3 absolute() const;

 btMatrix3x3 transpose() const;

 btMatrix3x3 inverse() const;

 btMatrix3x3 transposeTimes(const btMatrix3x3& m) const;
 btMatrix3x3 timesTranspose(const btMatrix3x3& m) const;

 inline float tdotx(const btVector3& v) const
 {
  return m_el[0].x() * v.x() + m_el[1].x() * v.y() + m_el[2].x() * v.z();
 }
 inline float tdoty(const btVector3& v) const
 {
  return m_el[0].y() * v.x() + m_el[1].y() * v.y() + m_el[2].y() * v.z();
 }
 inline float tdotz(const btVector3& v) const
 {
  return m_el[0].z() * v.x() + m_el[1].z() * v.y() + m_el[2].z() * v.z();
 }
# 421 "../src/LinearMath/btMatrix3x3.h"
 void diagonalize(btMatrix3x3& rot, float threshold, int maxSteps)
 {
  rot.setIdentity();
  for (int step = maxSteps; step > 0; step--)
  {

   int p = 0;
   int q = 1;
   int r = 2;
   float max = btFabs(m_el[0][1]);
   float v = btFabs(m_el[0][2]);
   if (v > max)
   {
    q = 2;
    r = 1;
    max = v;
   }
   v = btFabs(m_el[1][2]);
   if (v > max)
   {
    p = 1;
    q = 2;
    r = 0;
    max = v;
   }

   float t = threshold * (btFabs(m_el[0][0]) + btFabs(m_el[1][1]) + btFabs(m_el[2][2]));
   if (max <= t)
   {
    if (max <= 1.19209289550781250000e-7F * t)
    {
     return;
    }
    step = 1;
   }


   float mpq = m_el[p][q];
   float theta = (m_el[q][q] - m_el[p][p]) / (2 * mpq);
   float theta2 = theta * theta;
   float cos;
   float sin;
   if (theta2 * theta2 < float(10 / 1.19209289550781250000e-7F))
   {
    t = (theta >= 0) ? 1 / (theta + btSqrt(1 + theta2))
     : 1 / (theta - btSqrt(1 + theta2));
    cos = 1 / btSqrt(1 + t * t);
    sin = cos * t;
   }
   else
   {

    t = 1 / (theta * (2 + float(0.5) / theta2));
    cos = 1 - float(0.5) * t * t;
    sin = cos * t;
   }


   m_el[p][q] = m_el[q][p] = 0;
   m_el[p][p] -= t * mpq;
   m_el[q][q] += t * mpq;
   float mrp = m_el[r][p];
   float mrq = m_el[r][q];
   m_el[r][p] = m_el[p][r] = cos * mrp - sin * mrq;
   m_el[r][q] = m_el[q][r] = cos * mrq + sin * mrp;


   for (int i = 0; i < 3; i++)
   {
    btVector3& row = rot[i];
    mrp = row[p];
    mrq = row[q];
    row[p] = cos * mrp - sin * mrq;
    row[q] = cos * mrq + sin * mrp;
   }
  }
 }
# 509 "../src/LinearMath/btMatrix3x3.h"
 float cofac(int r1, int c1, int r2, int c2) const
 {
  return m_el[r1][c1] * m_el[r2][c2] - m_el[r1][c2] * m_el[r2][c1];
 }

 void serialize(struct btMatrix3x3FloatData& dataOut) const;

 void serializeFloat(struct btMatrix3x3FloatData& dataOut) const;

 void deSerialize(const struct btMatrix3x3FloatData& dataIn);

 void deSerializeFloat(const struct btMatrix3x3FloatData& dataIn);

 void deSerializeDouble(const struct btMatrix3x3DoubleData& dataIn);

};


inline btMatrix3x3&
btMatrix3x3::operator*=(const btMatrix3x3& m)
{
 setValue(m.tdotx(m_el[0]), m.tdoty(m_el[0]), m.tdotz(m_el[0]),
  m.tdotx(m_el[1]), m.tdoty(m_el[1]), m.tdotz(m_el[1]),
  m.tdotx(m_el[2]), m.tdoty(m_el[2]), m.tdotz(m_el[2]));
 return *this;
}

inline btMatrix3x3&
btMatrix3x3::operator+=(const btMatrix3x3& m)
{
 setValue(
  m_el[0][0]+m.m_el[0][0],
  m_el[0][1]+m.m_el[0][1],
  m_el[0][2]+m.m_el[0][2],
  m_el[1][0]+m.m_el[1][0],
  m_el[1][1]+m.m_el[1][1],
  m_el[1][2]+m.m_el[1][2],
  m_el[2][0]+m.m_el[2][0],
  m_el[2][1]+m.m_el[2][1],
  m_el[2][2]+m.m_el[2][2]);
 return *this;
}

inline btMatrix3x3
operator*(const btMatrix3x3& m, const float & k)
{
 return btMatrix3x3(
  m[0].x()*k,m[0].y()*k,m[0].z()*k,
  m[1].x()*k,m[1].y()*k,m[1].z()*k,
  m[2].x()*k,m[2].y()*k,m[2].z()*k);
}

 inline btMatrix3x3
operator+(const btMatrix3x3& m1, const btMatrix3x3& m2)
{
 return btMatrix3x3(
 m1[0][0]+m2[0][0],
 m1[0][1]+m2[0][1],
 m1[0][2]+m2[0][2],
 m1[1][0]+m2[1][0],
 m1[1][1]+m2[1][1],
 m1[1][2]+m2[1][2],
 m1[2][0]+m2[2][0],
 m1[2][1]+m2[2][1],
 m1[2][2]+m2[2][2]);
}

inline btMatrix3x3
operator-(const btMatrix3x3& m1, const btMatrix3x3& m2)
{
 return btMatrix3x3(
 m1[0][0]-m2[0][0],
 m1[0][1]-m2[0][1],
 m1[0][2]-m2[0][2],
 m1[1][0]-m2[1][0],
 m1[1][1]-m2[1][1],
 m1[1][2]-m2[1][2],
 m1[2][0]-m2[2][0],
 m1[2][1]-m2[2][1],
 m1[2][2]-m2[2][2]);
}


inline btMatrix3x3&
btMatrix3x3::operator-=(const btMatrix3x3& m)
{
 setValue(
 m_el[0][0]-m.m_el[0][0],
 m_el[0][1]-m.m_el[0][1],
 m_el[0][2]-m.m_el[0][2],
 m_el[1][0]-m.m_el[1][0],
 m_el[1][1]-m.m_el[1][1],
 m_el[1][2]-m.m_el[1][2],
 m_el[2][0]-m.m_el[2][0],
 m_el[2][1]-m.m_el[2][1],
 m_el[2][2]-m.m_el[2][2]);
 return *this;
}


inline float
btMatrix3x3::determinant() const
{
 return btTriple((*this)[0], (*this)[1], (*this)[2]);
}


inline btMatrix3x3
btMatrix3x3::absolute() const
{
 return btMatrix3x3(
  btFabs(m_el[0].x()), btFabs(m_el[0].y()), btFabs(m_el[0].z()),
  btFabs(m_el[1].x()), btFabs(m_el[1].y()), btFabs(m_el[1].z()),
  btFabs(m_el[2].x()), btFabs(m_el[2].y()), btFabs(m_el[2].z()));
}

inline btMatrix3x3
btMatrix3x3::transpose() const
{
 return btMatrix3x3(m_el[0].x(), m_el[1].x(), m_el[2].x(),
  m_el[0].y(), m_el[1].y(), m_el[2].y(),
  m_el[0].z(), m_el[1].z(), m_el[2].z());
}

inline btMatrix3x3
btMatrix3x3::adjoint() const
{
 return btMatrix3x3(cofac(1, 1, 2, 2), cofac(0, 2, 2, 1), cofac(0, 1, 1, 2),
  cofac(1, 2, 2, 0), cofac(0, 0, 2, 2), cofac(0, 2, 1, 0),
  cofac(1, 0, 2, 1), cofac(0, 1, 2, 0), cofac(0, 0, 1, 1));
}

inline btMatrix3x3
btMatrix3x3::inverse() const
{
 btVector3 co(cofac(1, 1, 2, 2), cofac(1, 2, 2, 0), cofac(1, 0, 2, 1));
 float det = (*this)[0].dot(co);
 ;
 float s = float(1.0) / det;
 return btMatrix3x3(co.x() * s, cofac(0, 2, 2, 1) * s, cofac(0, 1, 1, 2) * s,
  co.y() * s, cofac(0, 0, 2, 2) * s, cofac(0, 2, 1, 0) * s,
  co.z() * s, cofac(0, 1, 2, 0) * s, cofac(0, 0, 1, 1) * s);
}

inline btMatrix3x3
btMatrix3x3::transposeTimes(const btMatrix3x3& m) const
{
 return btMatrix3x3(
  m_el[0].x() * m[0].x() + m_el[1].x() * m[1].x() + m_el[2].x() * m[2].x(),
  m_el[0].x() * m[0].y() + m_el[1].x() * m[1].y() + m_el[2].x() * m[2].y(),
  m_el[0].x() * m[0].z() + m_el[1].x() * m[1].z() + m_el[2].x() * m[2].z(),
  m_el[0].y() * m[0].x() + m_el[1].y() * m[1].x() + m_el[2].y() * m[2].x(),
  m_el[0].y() * m[0].y() + m_el[1].y() * m[1].y() + m_el[2].y() * m[2].y(),
  m_el[0].y() * m[0].z() + m_el[1].y() * m[1].z() + m_el[2].y() * m[2].z(),
  m_el[0].z() * m[0].x() + m_el[1].z() * m[1].x() + m_el[2].z() * m[2].x(),
  m_el[0].z() * m[0].y() + m_el[1].z() * m[1].y() + m_el[2].z() * m[2].y(),
  m_el[0].z() * m[0].z() + m_el[1].z() * m[1].z() + m_el[2].z() * m[2].z());
}

inline btMatrix3x3
btMatrix3x3::timesTranspose(const btMatrix3x3& m) const
{
 return btMatrix3x3(
  m_el[0].dot(m[0]), m_el[0].dot(m[1]), m_el[0].dot(m[2]),
  m_el[1].dot(m[0]), m_el[1].dot(m[1]), m_el[1].dot(m[2]),
  m_el[2].dot(m[0]), m_el[2].dot(m[1]), m_el[2].dot(m[2]));

}

inline btVector3
operator*(const btMatrix3x3& m, const btVector3& v)
{
 return btVector3(m[0].dot(v), m[1].dot(v), m[2].dot(v));
}


inline btVector3
operator*(const btVector3& v, const btMatrix3x3& m)
{
 return btVector3(m.tdotx(v), m.tdoty(v), m.tdotz(v));
}

inline btMatrix3x3
operator*(const btMatrix3x3& m1, const btMatrix3x3& m2)
{
 return btMatrix3x3(
  m2.tdotx( m1[0]), m2.tdoty( m1[0]), m2.tdotz( m1[0]),
  m2.tdotx( m1[1]), m2.tdoty( m1[1]), m2.tdotz( m1[1]),
  m2.tdotx( m1[2]), m2.tdoty( m1[2]), m2.tdotz( m1[2]));
}
# 717 "../src/LinearMath/btMatrix3x3.h"
inline bool operator==(const btMatrix3x3& m1, const btMatrix3x3& m2)
{
 return ( m1[0][0] == m2[0][0] && m1[1][0] == m2[1][0] && m1[2][0] == m2[2][0] &&
  m1[0][1] == m2[0][1] && m1[1][1] == m2[1][1] && m1[2][1] == m2[2][1] &&
  m1[0][2] == m2[0][2] && m1[1][2] == m2[1][2] && m1[2][2] == m2[2][2] );
}


class btMatrix3x3FloatData
 { public: 
 btVector3FloatData m_el[3];
};


class btMatrix3x3DoubleData
 { public: 
 btVector3DoubleData m_el[3];
};




inline void btMatrix3x3::serialize(struct btMatrix3x3FloatData& dataOut) const
{
 for (int i=0;i<3;i++)
  m_el[i].serialize(dataOut.m_el[i]);
}

inline void btMatrix3x3::serializeFloat(struct btMatrix3x3FloatData& dataOut) const
{
 for (int i=0;i<3;i++)
  m_el[i].serializeFloat(dataOut.m_el[i]);
}


inline void btMatrix3x3::deSerialize(const struct btMatrix3x3FloatData& dataIn)
{
 for (int i=0;i<3;i++)
  m_el[i].deSerialize(dataIn.m_el[i]);
}

inline void btMatrix3x3::deSerializeFloat(const struct btMatrix3x3FloatData& dataIn)
{
 for (int i=0;i<3;i++)
  m_el[i].deSerializeFloat(dataIn.m_el[i]);
}

inline void btMatrix3x3::deSerializeDouble(const struct btMatrix3x3DoubleData& dataIn)
{
 for (int i=0;i<3;i++)
  m_el[i].deSerializeDouble(dataIn.m_el[i]);
}
# 22 "../src/LinearMath/btTransform.h" 2
# 34 "../src/LinearMath/btTransform.h"
class btTransform {


 btMatrix3x3 m_basis;

 btVector3 m_origin;

public:


 btTransform() {}



 explicit inline btTransform(const btQuaternion& q,
  const btVector3& c)
  : m_basis(q),
  m_origin(c)
 {}




 explicit inline btTransform(const btMatrix3x3& b,
  const btVector3& c)
  : m_basis(b),
  m_origin(c)
 {}

 inline btTransform (const btTransform& other)
  : m_basis(other.m_basis),
  m_origin(other.m_origin)
 {
 }

 inline btTransform& operator=(const btTransform& other)
 {
  m_basis = other.m_basis;
  m_origin = other.m_origin;
  return *this;
 }






  inline void mult(const btTransform& t1, const btTransform& t2) {
   m_basis = t1.m_basis * t2.m_basis;
   m_origin = t1(t2.m_origin);
  }
# 94 "../src/LinearMath/btTransform.h"
 inline btVector3 operator()(const btVector3& x) const
 {
  return btVector3(m_basis[0].dot(x) + m_origin.x(),
   m_basis[1].dot(x) + m_origin.y(),
   m_basis[2].dot(x) + m_origin.z());
 }


 inline btVector3 operator*(const btVector3& x) const
 {
  return (*this)(x);
 }


 inline btQuaternion operator*(const btQuaternion& q) const
 {
  return getRotation() * q;
 }


 inline btMatrix3x3& getBasis() { return m_basis; }

 inline const btMatrix3x3& getBasis() const { return m_basis; }


 inline btVector3& getOrigin() { return m_origin; }

 inline const btVector3& getOrigin() const { return m_origin; }


 btQuaternion getRotation() const {
  btQuaternion q;
  m_basis.getRotation(q);
  return q;
 }




 void setFromOpenGLMatrix(const float *m)
 {
  m_basis.setFromOpenGLSubMatrix(m);
  m_origin.setValue(m[12],m[13],m[14]);
 }



 void getOpenGLMatrix(float *m) const
 {
  m_basis.getOpenGLSubMatrix(m);
  m[12] = m_origin.x();
  m[13] = m_origin.y();
  m[14] = m_origin.z();
  m[15] = float(1.0);
 }



 inline void setOrigin(const btVector3& origin)
 {
  m_origin = origin;
 }

 inline btVector3 invXform(const btVector3& inVec) const;



 inline void setBasis(const btMatrix3x3& basis)
 {
  m_basis = basis;
 }


 inline void setRotation(const btQuaternion& q)
 {
  m_basis.setRotation(q);
 }



 void setIdentity()
 {
  m_basis.setIdentity();
  m_origin.setValue(float(0.0), float(0.0), float(0.0));
 }



 btTransform& operator*=(const btTransform& t)
 {
  m_origin += m_basis * t.m_origin;
  m_basis *= t.m_basis;
  return *this;
 }


 btTransform inverse() const
 {
  btMatrix3x3 inv = m_basis.transpose();
  return btTransform(inv, inv * -m_origin);
 }




 btTransform inverseTimes(const btTransform& t) const;


 btTransform operator*(const btTransform& t) const;


 static const btTransform& getIdentity()
 {
  static const btTransform identityTransform(btMatrix3x3::getIdentity());
  return identityTransform;
 }

 void serialize(struct btTransformFloatData& dataOut) const;

 void serializeFloat(struct btTransformFloatData& dataOut) const;

 void deSerialize(const struct btTransformFloatData& dataIn);

 void deSerializeDouble(const struct btTransformDoubleData& dataIn);

 void deSerializeFloat(const struct btTransformFloatData& dataIn);

};


inline btVector3
btTransform::invXform(const btVector3& inVec) const
{
 btVector3 v = inVec - m_origin;
 return (m_basis.transpose() * v);
}

inline btTransform
btTransform::inverseTimes(const btTransform& t) const
{
 btVector3 v = t.getOrigin() - m_origin;
  return btTransform(m_basis.transposeTimes(t.m_basis),
   v * m_basis);
}

inline btTransform
btTransform::operator*(const btTransform& t) const
{
 return btTransform(m_basis * t.m_basis,
  (*this)(t.m_origin));
}


inline bool operator==(const btTransform& t1, const btTransform& t2)
{
   return ( t1.getBasis() == t2.getBasis() &&
            t1.getOrigin() == t2.getOrigin() );
}



class btTransformFloatData
 { public: 
 btMatrix3x3FloatData m_basis;
 btVector3FloatData m_origin;
};

class btTransformDoubleData
 { public: 
 btMatrix3x3DoubleData m_basis;
 btVector3DoubleData m_origin;
};



inline void btTransform::serialize(btTransformFloatData& dataOut) const
{
 m_basis.serialize(dataOut.m_basis);
 m_origin.serialize(dataOut.m_origin);
}

inline void btTransform::serializeFloat(btTransformFloatData& dataOut) const
{
 m_basis.serializeFloat(dataOut.m_basis);
 m_origin.serializeFloat(dataOut.m_origin);
}


inline void btTransform::deSerialize(const btTransformFloatData& dataIn)
{
 m_basis.deSerialize(dataIn.m_basis);
 m_origin.deSerialize(dataIn.m_origin);
}

inline void btTransform::deSerializeFloat(const btTransformFloatData& dataIn)
{
 m_basis.deSerializeFloat(dataIn.m_basis);
 m_origin.deSerializeFloat(dataIn.m_origin);
}

inline void btTransform::deSerializeDouble(const btTransformDoubleData& dataIn)
{
 m_basis.deSerializeDouble(dataIn.m_basis);
 m_origin.deSerializeDouble(dataIn.m_origin);
}
# 76 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h" 1
# 28 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h"
struct btBroadphaseProxy;
class btCollisionShape;
struct btCollisionShapeData;
# 1 "../src/LinearMath/btMotionState.h" 1
# 19 "../src/LinearMath/btMotionState.h"
# 1 "../src/LinearMath/btTransform.h" 1
# 20 "../src/LinearMath/btMotionState.h" 2



class btMotionState
{
 public:

  virtual ~btMotionState()
  {

  }

  virtual void getWorldTransform(btTransform& worldTrans ) const =0;


  virtual void setWorldTransform(const btTransform& worldTrans)=0;


};
# 32 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h" 2
# 1 "../src/LinearMath/btAlignedAllocator.h" 1
# 38 "../src/LinearMath/btAlignedAllocator.h"
 void* btAlignedAllocInternal (size_t size, int alignment);
 void btAlignedFreeInternal (void* ptr);





typedef int size_type;

typedef void *(btAlignedAllocFunc)(size_t size, int alignment);
typedef void (btAlignedFreeFunc)(void *memblock);
typedef void *(btAllocFunc)(size_t size);
typedef void (btFreeFunc)(void *memblock);


void btAlignedAllocSetCustom(btAllocFunc *allocFunc, btFreeFunc *freeFunc);

void btAlignedAllocSetCustomAligned(btAlignedAllocFunc *allocFunc, btAlignedFreeFunc *freeFunc);




template < typename T , unsigned Alignment >
class btAlignedAllocator {

 typedef btAlignedAllocator< T , Alignment > self_type;

public:


 btAlignedAllocator() {}




 template < typename Other >
 btAlignedAllocator( const btAlignedAllocator< Other , Alignment > & ) {}

 typedef const T* const_pointer;
 typedef const T& const_reference;
 typedef T* pointer;
 typedef T& reference;
 typedef T value_type;

 pointer address ( reference ref ) const { return &ref; }
 const_pointer address ( const_reference ref ) const { return &ref; }
 pointer allocate ( size_type n , const_pointer * hint = 0 ) {
  ()hint;
  return reinterpret_cast< pointer >(btAlignedAllocInternal(sizeof(value_type) * n,Alignment));
 }
 void construct ( pointer ptr , const value_type & value ) { new (ptr) value_type( value ); }
 void deallocate( pointer ptr ) {
  btAlignedFreeInternal(reinterpret_cast< void * >( ptr ));
 }
 void destroy ( pointer ptr ) { ptr->~value_type(); }


 template < typename O > class rebind  { public: 
  typedef btAlignedAllocator< O , Alignment > other;
 };
 template < typename O >
 self_type & operator=( const btAlignedAllocator< O , Alignment > & ) { return *this; }

 friend bool operator==( const self_type & , const self_type & ) { return true; }
};
# 33 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h" 2
# 1 "../src/LinearMath/btAlignedObjectArray.h" 1
# 21 "../src/LinearMath/btAlignedObjectArray.h"
# 1 "../src/LinearMath/btAlignedAllocator.h" 1
# 22 "../src/LinearMath/btAlignedObjectArray.h" 2
# 38 "../src/LinearMath/btAlignedObjectArray.h"
# 1 "/usr/include/c++/4.8/new" 1 3
# 37 "/usr/include/c++/4.8/new" 3
       
# 38 "/usr/include/c++/4.8/new" 3

# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 1 3
# 184 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;




}
# 426 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/os_defines.h" 1 3
# 427 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 2 3


# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/cpu_defines.h" 1 3
# 430 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 2 3
# 40 "/usr/include/c++/4.8/new" 2 3
# 1 "/usr/include/c++/4.8/exception" 1 3
# 33 "/usr/include/c++/4.8/exception" 3
       
# 34 "/usr/include/c++/4.8/exception" 3

#pragma GCC visibility push(default)


# 1 "/usr/include/c++/4.8/bits/atomic_lockfree_defines.h" 1 3
# 33 "/usr/include/c++/4.8/bits/atomic_lockfree_defines.h" 3
       
# 34 "/usr/include/c++/4.8/bits/atomic_lockfree_defines.h" 3
# 39 "/usr/include/c++/4.8/exception" 2 3

extern "C++" {

namespace std
{
# 60 "/usr/include/c++/4.8/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 117 "/usr/include/c++/4.8/exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx
{

# 142 "/usr/include/c++/4.8/exception" 3
  void __verbose_terminate_handler();


}

}

#pragma GCC visibility pop
# 41 "/usr/include/c++/4.8/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  class nothrow_t  { public:  };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 91 "/usr/include/c++/4.8/new" 3
void* operator new(std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void operator delete(void*) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*) throw()
  __attribute__((__externally_visible__));
void* operator new(std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));


inline void* operator new(std::size_t, void* __p) throw()
{ return __p; }
inline void* operator new[](std::size_t, void* __p) throw()
{ return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 39 "../src/LinearMath/btAlignedObjectArray.h" 2





template <typename T>

class btAlignedObjectArray
{
 btAlignedAllocator<T , 16> m_allocator;

 int m_size;
 int m_capacity;
 T* m_data;

 bool m_ownsMemory;

 protected:
  inline int allocSize(int size)
  {
   return (size ? size*2 : 1);
  }
  inline void copy(int start,int end, T* dest) const
  {
   int i;
   for (i=start;i<end;++i)

    new (&dest[i]) T(m_data[i]);



  }

  inline void init()
  {

   m_ownsMemory = true;
   m_data = 0;
   m_size = 0;
   m_capacity = 0;
  }
  inline void destroy(int first,int last)
  {
   int i;
   for (i=first; i<last;i++)
   {
    m_data[i].~T();
   }
  }

  inline void* allocate(int size)
  {
   if (size)
    return m_allocator.allocate(size);
   return 0;
  }

  inline void deallocate()
  {
   if(m_data) {

    if (m_ownsMemory)
    {
     m_allocator.deallocate(m_data);
    }
    m_data = 0;
   }
  }




 public:

  btAlignedObjectArray()
  {
   init();
  }

  ~btAlignedObjectArray()
  {
   clear();
  }


  btAlignedObjectArray(const btAlignedObjectArray& otherArray)
  {
   init();

   int otherSize = otherArray.size();
   resize (otherSize);
   otherArray.copy(0, otherSize, m_data);
  }




  inline int size() const
  {
   return m_size;
  }

  inline const T& at(int n) const
  {
   return m_data[n];
  }

  inline T& at(int n)
  {
   return m_data[n];
  }

  inline const T& operator[](int n) const
  {
   return m_data[n];
  }

  inline T& operator[](int n)
  {
   return m_data[n];
  }



  inline void clear()
  {
   destroy(0,size());

   deallocate();

   init();
  }

  inline void pop_back()
  {
   m_size--;
   m_data[m_size].~T();
  }



  inline void resize(int newsize, const T& fillData=T())
  {
   int curSize = size();

   if (newsize < curSize)
   {
    for(int i = newsize; i < curSize; i++)
    {
     m_data[i].~T();
    }
   } else
   {
    if (newsize > size())
    {
     reserve(newsize);
    }

    for (int i=curSize;i<newsize;i++)
    {
     new ( &m_data[i]) T(fillData);
    }


   }

   m_size = newsize;
  }

  inline T& expandNonInitializing( )
  {
   int sz = size();
   if( sz == capacity() )
   {
    reserve( allocSize(size()) );
   }
   m_size++;

   return m_data[sz];
  }


  inline T& expand( const T& fillValue=T())
  {
   int sz = size();
   if( sz == capacity() )
   {
    reserve( allocSize(size()) );
   }
   m_size++;

   new (&m_data[sz]) T(fillValue);


   return m_data[sz];
  }


  inline void push_back(const T& _Val)
  {
   int sz = size();
   if( sz == capacity() )
   {
    reserve( allocSize(size()) );
   }


   new ( &m_data[m_size] ) T(_Val);




   m_size++;
  }



  inline int capacity() const
  {
   return m_capacity;
  }

  inline void reserve(int _Count)
  {
   if (capacity() < _Count)
   {
    T* s = (T*)allocate(_Count);

    copy(0, size(), s);

    destroy(0,size());

    deallocate();


    m_ownsMemory = true;

    m_data = s;

    m_capacity = _Count;

   }
  }


  class less
  {
   public:

    bool operator() ( const T& a, const T& b )
    {
     return ( a < b );
    }
  };

  template <typename L>
  void quickSortInternal(L CompareFunc,int lo, int hi)
  {


   int i=lo, j=hi;
   T x=m_data[(lo+hi)/2];


   do
   {
    while (CompareFunc(m_data[i],x))
     i++;
    while (CompareFunc(x,m_data[j]))
     j--;
    if (i<=j)
    {
     swap(i,j);
     i++; j--;
    }
   } while (i<=j);


   if (lo<j)
    quickSortInternal( CompareFunc, lo, j);
   if (i<hi)
    quickSortInternal( CompareFunc, i, hi);
  }


  template <typename L>
  void quickSort(L CompareFunc)
  {

   if (size()>1)
   {
    quickSortInternal(CompareFunc,0,size()-1);
   }
  }



  template <typename L>
  void downHeap(T *pArr, int k, int n,L CompareFunc)
  {



   T temp = pArr[k - 1];

   while (k <= n/2)
   {
    int child = 2*k;

    if ((child < n) && CompareFunc(pArr[child - 1] , pArr[child]))
    {
     child++;
    }

    if (CompareFunc(temp , pArr[child - 1]))
    {

     pArr[k - 1] = pArr[child - 1];
     k = child;
    }
    else
    {
     break;
    }
   }
   pArr[k - 1] = temp;
  }

  void swap(int index0,int index1)
  {






   T temp = m_data[index0];
   m_data[index0] = m_data[index1];
   m_data[index1] = temp;


  }

 template <typename L>
 void heapSort(L CompareFunc)
 {

  int k;
  int n = m_size;
  for (k = n/2; k > 0; k--)
  {
   downHeap(m_data, k, n, CompareFunc);
  }


  while ( n>=1 )
  {
   swap(0,n-1);


   n = n - 1;

   downHeap(m_data, 1, n, CompareFunc);
  }
 }


 int findBinarySearch(const T& key) const
 {
  int first = 0;
  int last = size()-1;


  while (first <= last) {
   int mid = (first + last) / 2;
   if (key > m_data[mid])
    first = mid + 1;
   else if (key < m_data[mid])
    last = mid - 1;
   else
    return mid;
  }
  return size();
 }


 int findLinearSearch(const T& key) const
 {
  int index=size();
  int i;

  for (i=0;i<size();i++)
  {
   if (m_data[i] == key)
   {
    index = i;
    break;
   }
  }
  return index;
 }

 void remove(const T& key)
 {

  int findIndex = findLinearSearch(key);
  if (findIndex<size())
  {
   swap( findIndex,size()-1);
   pop_back();
  }
 }


 void initializeFromBuffer(void *buffer, int size, int capacity)
 {
  clear();
  m_ownsMemory = false;
  m_data = (T*)buffer;
  m_size = size;
  m_capacity = capacity;
 }

 void copyFromArray(const btAlignedObjectArray& otherArray)
 {
  int otherSize = otherArray.size();
  resize (otherSize);
  otherArray.copy(0, otherSize, m_data);
 }

};
# 34 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h" 2

typedef btAlignedObjectArray<class btCollisionObject*> btCollisionObjectArray;
# 49 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h"
class btCollisionObject
{

protected:

 btTransform m_worldTransform;



 btTransform m_interpolationWorldTransform;


 btVector3 m_interpolationLinearVelocity;
 btVector3 m_interpolationAngularVelocity;

 btVector3 m_anisotropicFriction;
 int m_hasAnisotropicFriction;
 float m_contactProcessingThreshold;

 btBroadphaseProxy* m_broadphaseHandle;
 btCollisionShape* m_collisionShape;

 void* m_extensionPointer;




 btCollisionShape* m_rootCollisionShape;

 int m_collisionFlags;

 int m_islandTag1;
 int m_companionId;

 int m_activationState1;
 float m_deactivationTime;

 float m_friction;
 float m_restitution;



 int m_internalType;


 void* m_userObjectPointer;


 float m_hitFraction;


 float m_ccdSweptSphereRadius;


 float m_ccdMotionThreshold;


 int m_checkCollideWith;

 virtual bool checkCollideWithOverride(btCollisionObject* )
 {
  return true;
 }

public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 enum CollisionFlags
 {
  CF_STATIC_OBJECT= 1,
  CF_KINEMATIC_OBJECT= 2,
  CF_NO_CONTACT_RESPONSE = 4,
  CF_CUSTOM_MATERIAL_CALLBACK = 8,
  CF_CHARACTER_OBJECT = 16,
  CF_DISABLE_VISUALIZE_OBJECT = 32,
  CF_DISABLE_SPU_COLLISION_PROCESSING = 64
 };

 enum CollisionObjectTypes
 {
  CO_COLLISION_OBJECT =1,
  CO_RIGID_BODY=2,


  CO_GHOST_OBJECT=4,
  CO_SOFT_BODY=8,
  CO_HF_FLUID=16,
  CO_USER_TYPE=32
 };

 inline bool mergesSimulationIslands() const
 {

  return ((m_collisionFlags & (CF_STATIC_OBJECT | CF_KINEMATIC_OBJECT | CF_NO_CONTACT_RESPONSE) )==0);
 }

 const btVector3& getAnisotropicFriction() const
 {
  return m_anisotropicFriction;
 }
 void setAnisotropicFriction(const btVector3& anisotropicFriction)
 {
  m_anisotropicFriction = anisotropicFriction;
  m_hasAnisotropicFriction = (anisotropicFriction[0]!=1.f) || (anisotropicFriction[1]!=1.f) || (anisotropicFriction[2]!=1.f);
 }
 bool hasAnisotropicFriction() const
 {
  return m_hasAnisotropicFriction!=0;
 }



 void setContactProcessingThreshold( float contactProcessingThreshold)
 {
  m_contactProcessingThreshold = contactProcessingThreshold;
 }
 float getContactProcessingThreshold() const
 {
  return m_contactProcessingThreshold;
 }

 inline bool isStaticObject() const {
  return (m_collisionFlags & CF_STATIC_OBJECT) != 0;
 }

 inline bool isKinematicObject() const
 {
  return (m_collisionFlags & CF_KINEMATIC_OBJECT) != 0;
 }

 inline bool isStaticOrKinematicObject() const
 {
  return (m_collisionFlags & (CF_KINEMATIC_OBJECT | CF_STATIC_OBJECT)) != 0 ;
 }

 inline bool hasContactResponse() const {
  return (m_collisionFlags & CF_NO_CONTACT_RESPONSE)==0;
 }


 btCollisionObject();

 virtual ~btCollisionObject();

 virtual void setCollisionShape(btCollisionShape* collisionShape)
 {
  m_collisionShape = collisionShape;
  m_rootCollisionShape = collisionShape;
 }

 inline const btCollisionShape* getCollisionShape() const
 {
  return m_collisionShape;
 }

 inline btCollisionShape* getCollisionShape()
 {
  return m_collisionShape;
 }

 inline const btCollisionShape* getRootCollisionShape() const
 {
  return m_rootCollisionShape;
 }

 inline btCollisionShape* getRootCollisionShape()
 {
  return m_rootCollisionShape;
 }



 void internalSetTemporaryCollisionShape(btCollisionShape* collisionShape)
 {
  m_collisionShape = collisionShape;
 }



 void* internalGetExtensionPointer() const
 {
  return m_extensionPointer;
 }


 void internalSetExtensionPointer(void* pointer)
 {
  m_extensionPointer = pointer;
 }

 inline int getActivationState() const { return m_activationState1;}

 void setActivationState(int newState);

 void setDeactivationTime(float time)
 {
  m_deactivationTime = time;
 }
 float getDeactivationTime() const
 {
  return m_deactivationTime;
 }

 void forceActivationState(int newState);

 void activate(bool forceActivation = false);

 inline bool isActive() const
 {
  return ((getActivationState() != 2) && (getActivationState() != 5));
 }

 void setRestitution(float rest)
 {
  m_restitution = rest;
 }
 float getRestitution() const
 {
  return m_restitution;
 }
 void setFriction(float frict)
 {
  m_friction = frict;
 }
 float getFriction() const
 {
  return m_friction;
 }


 int getInternalType() const
 {
  return m_internalType;
 }

 btTransform& getWorldTransform()
 {
  return m_worldTransform;
 }

 const btTransform& getWorldTransform() const
 {
  return m_worldTransform;
 }

 void setWorldTransform(const btTransform& worldTrans)
 {
  m_worldTransform = worldTrans;
 }


 inline btBroadphaseProxy* getBroadphaseHandle()
 {
  return m_broadphaseHandle;
 }

 inline const btBroadphaseProxy* getBroadphaseHandle() const
 {
  return m_broadphaseHandle;
 }

 void setBroadphaseHandle(btBroadphaseProxy* handle)
 {
  m_broadphaseHandle = handle;
 }


 const btTransform& getInterpolationWorldTransform() const
 {
  return m_interpolationWorldTransform;
 }

 btTransform& getInterpolationWorldTransform()
 {
  return m_interpolationWorldTransform;
 }

 void setInterpolationWorldTransform(const btTransform& trans)
 {
  m_interpolationWorldTransform = trans;
 }

 void setInterpolationLinearVelocity(const btVector3& linvel)
 {
  m_interpolationLinearVelocity = linvel;
 }

 void setInterpolationAngularVelocity(const btVector3& angvel)
 {
  m_interpolationAngularVelocity = angvel;
 }

 const btVector3& getInterpolationLinearVelocity() const
 {
  return m_interpolationLinearVelocity;
 }

 const btVector3& getInterpolationAngularVelocity() const
 {
  return m_interpolationAngularVelocity;
 }

 inline int getIslandTag() const
 {
  return m_islandTag1;
 }

 void setIslandTag(int tag)
 {
  m_islandTag1 = tag;
 }

 inline int getCompanionId() const
 {
  return m_companionId;
 }

 void setCompanionId(int id)
 {
  m_companionId = id;
 }

 inline float getHitFraction() const
 {
  return m_hitFraction;
 }

 void setHitFraction(float hitFraction)
 {
  m_hitFraction = hitFraction;
 }


 inline int getCollisionFlags() const
 {
  return m_collisionFlags;
 }

 void setCollisionFlags(int flags)
 {
  m_collisionFlags = flags;
 }


 float getCcdSweptSphereRadius() const
 {
  return m_ccdSweptSphereRadius;
 }


 void setCcdSweptSphereRadius(float radius)
 {
  m_ccdSweptSphereRadius = radius;
 }

 float getCcdMotionThreshold() const
 {
  return m_ccdMotionThreshold;
 }

 float getCcdSquareMotionThreshold() const
 {
  return m_ccdMotionThreshold*m_ccdMotionThreshold;
 }




 void setCcdMotionThreshold(float ccdMotionThreshold)
 {
  m_ccdMotionThreshold = ccdMotionThreshold;
 }


 void* getUserPointer() const
 {
  return m_userObjectPointer;
 }


 void setUserPointer(void* userPointer)
 {
  m_userObjectPointer = userPointer;
 }


 inline bool checkCollideWith(btCollisionObject* co)
 {
  if (m_checkCollideWith)
   return checkCollideWithOverride(co);

  return true;
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, class btSerializer* serializer) const;

 virtual void serializeSingleObject(class btSerializer* serializer) const;

};


class btCollisionObjectDoubleData
 { public: 
 void *m_broadphaseHandle;
 void *m_collisionShape;
 btCollisionShapeData *m_rootCollisionShape;
 char *m_name;

 btTransformDoubleData m_worldTransform;
 btTransformDoubleData m_interpolationWorldTransform;
 btVector3DoubleData m_interpolationLinearVelocity;
 btVector3DoubleData m_interpolationAngularVelocity;
 btVector3DoubleData m_anisotropicFriction;
 double m_contactProcessingThreshold;
 double m_deactivationTime;
 double m_friction;
 double m_restitution;
 double m_hitFraction;
 double m_ccdSweptSphereRadius;
 double m_ccdMotionThreshold;

 int m_hasAnisotropicFriction;
 int m_collisionFlags;
 int m_islandTag1;
 int m_companionId;
 int m_activationState1;
 int m_internalType;
 int m_checkCollideWith;

 char m_padding[4];
};


class btCollisionObjectFloatData
 { public: 
 void *m_broadphaseHandle;
 void *m_collisionShape;
 btCollisionShapeData *m_rootCollisionShape;
 char *m_name;

 btTransformFloatData m_worldTransform;
 btTransformFloatData m_interpolationWorldTransform;
 btVector3FloatData m_interpolationLinearVelocity;
 btVector3FloatData m_interpolationAngularVelocity;
 btVector3FloatData m_anisotropicFriction;
 float m_contactProcessingThreshold;
 float m_deactivationTime;
 float m_friction;
 float m_restitution;
 float m_hitFraction;
 float m_ccdSweptSphereRadius;
 float m_ccdMotionThreshold;

 int m_hasAnisotropicFriction;
 int m_collisionFlags;
 int m_islandTag1;
 int m_companionId;
 int m_activationState1;
 int m_internalType;
 int m_checkCollideWith;
};



inline int btCollisionObject::calculateSerializeBufferSize() const
{
 return sizeof(btCollisionObjectFloatData);
}
# 77 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h"
# 1 "../src/BulletCollision/BroadphaseCollision/btDispatcher.h" 1
# 20 "../src/BulletCollision/BroadphaseCollision/btDispatcher.h"
class btCollisionAlgorithm;
struct btBroadphaseProxy;
class btRigidBody;
class btCollisionObject;
class btOverlappingPairCache;


class btPersistentManifold;
class btStackAlloc;
class btPoolAllocator;

class btDispatcherInfo
 { public: 
 enum DispatchFunc
 {
  DISPATCH_DISCRETE = 1,
  DISPATCH_CONTINUOUS
 };
 btDispatcherInfo()
  :m_timeStep(float(0.)),
  m_stepCount(0),
  m_dispatchFunc(DISPATCH_DISCRETE),
  m_timeOfImpact(float(1.)),
  m_useContinuous(true),
  m_debugDraw(0),
  m_enableSatConvex(false),
  m_enableSPU(true),
  m_useEpa(true),
  m_allowedCcdPenetration(float(0.04)),
  m_useConvexConservativeDistanceUtil(false),
  m_convexConservativeDistanceThreshold(0.0f),
  m_stackAllocator(0)
 {

 }
 float m_timeStep;
 int m_stepCount;
 int m_dispatchFunc;
 mutable float m_timeOfImpact;
 bool m_useContinuous;
 class btIDebugDraw* m_debugDraw;
 bool m_enableSatConvex;
 bool m_enableSPU;
 bool m_useEpa;
 float m_allowedCcdPenetration;
 bool m_useConvexConservativeDistanceUtil;
 float m_convexConservativeDistanceThreshold;
 btStackAlloc* m_stackAllocator;
};



class btDispatcher
{


public:
 virtual ~btDispatcher() ;

 virtual btCollisionAlgorithm* findAlgorithm(btCollisionObject* body0,btCollisionObject* body1,btPersistentManifold* sharedManifold=0) = 0;

 virtual btPersistentManifold* getNewManifold(void* body0,void* body1)=0;

 virtual void releaseManifold(btPersistentManifold* manifold)=0;

 virtual void clearManifold(btPersistentManifold* manifold)=0;

 virtual bool needsCollision(btCollisionObject* body0,btCollisionObject* body1) = 0;

 virtual bool needsResponse(btCollisionObject* body0,btCollisionObject* body1)=0;

 virtual void dispatchAllCollisionPairs(btOverlappingPairCache* pairCache,const btDispatcherInfo& dispatchInfo,btDispatcher* dispatcher) =0;

 virtual int getNumManifolds() const = 0;

 virtual btPersistentManifold* getManifoldByIndexInternal(int index) = 0;

 virtual btPersistentManifold** getInternalManifoldPointer() = 0;

 virtual btPoolAllocator* getInternalManifoldPool() = 0;

 virtual const btPoolAllocator* getInternalManifoldPool() const = 0;

 virtual void* allocateCollisionAlgorithm(int size) = 0;

 virtual void freeCollisionAlgorithm(void* ptr) = 0;

};
# 20 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 2
# 1 "../src/BulletCollision/NarrowPhaseCollision/btPersistentManifold.h" 1
# 22 "../src/BulletCollision/NarrowPhaseCollision/btPersistentManifold.h"
# 1 "../src/BulletCollision/NarrowPhaseCollision/btManifoldPoint.h" 1
# 20 "../src/BulletCollision/NarrowPhaseCollision/btManifoldPoint.h"
# 1 "../src/LinearMath/btTransformUtil.h" 1
# 25 "../src/LinearMath/btTransformUtil.h"
inline btVector3 btAabbSupport(const btVector3& halfExtents,const btVector3& supportDir)
{
 return btVector3(supportDir.x() < float(0.0) ? -halfExtents.x() : halfExtents.x(),
      supportDir.y() < float(0.0) ? -halfExtents.y() : halfExtents.y(),
      supportDir.z() < float(0.0) ? -halfExtents.z() : halfExtents.z());
}







class btTransformUtil
{

public:

 static void integrateTransform(const btTransform& curTrans,const btVector3& linvel,const btVector3& angvel,float timeStep,btTransform& predictedTransform)
 {
  predictedTransform.setOrigin(curTrans.getOrigin() + linvel * timeStep);
# 55 "../src/LinearMath/btTransformUtil.h"
  btVector3 axis;
  float fAngle = angvel.length();

  if (fAngle*timeStep > float(0.5)*(float(6.283185307179586232) * float(0.25)))
  {
   fAngle = float(0.5)*(float(6.283185307179586232) * float(0.25)) / timeStep;
  }

  if ( fAngle < float(0.001) )
  {

   axis = angvel*( float(0.5)*timeStep-(timeStep*timeStep*timeStep)*(float(0.020833333333))*fAngle*fAngle );
  }
  else
  {

   axis = angvel*( btSin(float(0.5)*fAngle*timeStep)/fAngle );
  }
  btQuaternion dorn (axis.x(),axis.y(),axis.z(),btCos( fAngle*timeStep*float(0.5) ));
  btQuaternion orn0 = curTrans.getRotation();

  btQuaternion predictedOrn = dorn * orn0;
  predictedOrn.normalize();

  predictedTransform.setRotation(predictedOrn);
 }

 static void calculateVelocityQuaternion(const btVector3& pos0,const btVector3& pos1,const btQuaternion& orn0,const btQuaternion& orn1,float timeStep,btVector3& linVel,btVector3& angVel)
 {
  linVel = (pos1 - pos0) / timeStep;
  btVector3 axis;
  float angle;
  if (orn0 != orn1)
  {
   calculateDiffAxisAngleQuaternion(orn0,orn1,axis,angle);
   angVel = axis * angle / timeStep;
  } else
  {
   angVel.setValue(0,0,0);
  }
 }

 static void calculateDiffAxisAngleQuaternion(const btQuaternion& orn0,const btQuaternion& orn1a,btVector3& axis,float& angle)
 {
  btQuaternion orn1 = orn0.nearest(orn1a);
  btQuaternion dorn = orn1 * orn0.inverse();
  angle = dorn.getAngle();
  axis = btVector3(dorn.x(),dorn.y(),dorn.z());
  axis[3] = float(0.);

  float len = axis.length2();
  if (len < 1.19209289550781250000e-7F*1.19209289550781250000e-7F)
   axis = btVector3(float(1.),float(0.),float(0.));
  else
   axis /= btSqrt(len);
 }

 static void calculateVelocity(const btTransform& transform0,const btTransform& transform1,float timeStep,btVector3& linVel,btVector3& angVel)
 {
  linVel = (transform1.getOrigin() - transform0.getOrigin()) / timeStep;
  btVector3 axis;
  float angle;
  calculateDiffAxisAngle(transform0,transform1,axis,angle);
  angVel = axis * angle / timeStep;
 }

 static void calculateDiffAxisAngle(const btTransform& transform0,const btTransform& transform1,btVector3& axis,float& angle)
 {
  btMatrix3x3 dmat = transform1.getBasis() * transform0.getBasis().inverse();
  btQuaternion dorn;
  dmat.getRotation(dorn);


  dorn.normalize();

  angle = dorn.getAngle();
  axis = btVector3(dorn.x(),dorn.y(),dorn.z());
  axis[3] = float(0.);

  float len = axis.length2();
  if (len < 1.19209289550781250000e-7F*1.19209289550781250000e-7F)
   axis = btVector3(float(1.),float(0.),float(0.));
  else
   axis /= btSqrt(len);
 }

};




class btConvexSeparatingDistanceUtil
{
 btQuaternion m_ornA;
 btQuaternion m_ornB;
 btVector3 m_posA;
 btVector3 m_posB;

 btVector3 m_separatingNormal;

 float m_boundingRadiusA;
 float m_boundingRadiusB;
 float m_separatingDistance;

public:

 btConvexSeparatingDistanceUtil(float boundingRadiusA,float boundingRadiusB)
  :m_boundingRadiusA(boundingRadiusA),
  m_boundingRadiusB(boundingRadiusB),
  m_separatingDistance(0.f)
 {
 }

 float getConservativeSeparatingDistance()
 {
  return m_separatingDistance;
 }

 void updateSeparatingDistance(const btTransform& transA,const btTransform& transB)
 {
  const btVector3& toPosA = transA.getOrigin();
  const btVector3& toPosB = transB.getOrigin();
  btQuaternion toOrnA = transA.getRotation();
  btQuaternion toOrnB = transB.getRotation();

  if (m_separatingDistance>0.f)
  {


   btVector3 linVelA,angVelA,linVelB,angVelB;
   btTransformUtil::calculateVelocityQuaternion(m_posA,toPosA,m_ornA,toOrnA,float(1.),linVelA,angVelA);
   btTransformUtil::calculateVelocityQuaternion(m_posB,toPosB,m_ornB,toOrnB,float(1.),linVelB,angVelB);
   float maxAngularProjectedVelocity = angVelA.length() * m_boundingRadiusA + angVelB.length() * m_boundingRadiusB;
   btVector3 relLinVel = (linVelB-linVelA);
   float relLinVelocLength = relLinVel.dot(m_separatingNormal);
   if (relLinVelocLength<0.f)
   {
    relLinVelocLength = 0.f;
   }

   float projectedMotion = maxAngularProjectedVelocity +relLinVelocLength;
   m_separatingDistance -= projectedMotion;
  }

  m_posA = toPosA;
  m_posB = toPosB;
  m_ornA = toOrnA;
  m_ornB = toOrnB;
 }

 void initSeparatingDistance(const btVector3& separatingVector,float separatingDistance,const btTransform& transA,const btTransform& transB)
 {
  m_separatingDistance = separatingDistance;

  if (m_separatingDistance>0.f)
  {
   m_separatingNormal = separatingVector;

   const btVector3& toPosA = transA.getOrigin();
   const btVector3& toPosB = transB.getOrigin();
   btQuaternion toOrnA = transA.getRotation();
   btQuaternion toOrnB = transB.getRotation();
   m_posA = toPosA;
   m_posB = toPosB;
   m_ornA = toOrnA;
   m_ornB = toOrnB;
  }
 }

};
# 21 "../src/BulletCollision/NarrowPhaseCollision/btManifoldPoint.h" 2






 class btConstraintRow  { public: 
  float m_normal[3];
  float m_rhs;
  float m_jacDiagInv;
  float m_lowerLimit;
  float m_upperLimit;
  float m_accumImpulse;
 };
 typedef btConstraintRow PfxConstraintRow;






class btManifoldPoint
 {
  public:
   btManifoldPoint()
    :m_userPersistentData(0),
    m_appliedImpulse(0.f),
    m_lateralFrictionInitialized(false),
    m_appliedImpulseLateral1(0.f),
    m_appliedImpulseLateral2(0.f),
    m_contactMotion1(0.f),
    m_contactMotion2(0.f),
    m_contactCFM1(0.f),
    m_contactCFM2(0.f),
    m_lifeTime(0)
   {
   }

   btManifoldPoint( const btVector3 &pointA, const btVector3 &pointB,
     const btVector3 &normal,
     float distance ) :
     m_localPointA( pointA ),
     m_localPointB( pointB ),
     m_normalWorldOnB( normal ),
     m_distance1( distance ),
     m_combinedFriction(float(0.)),
     m_combinedRestitution(float(0.)),
     m_userPersistentData(0),
     m_appliedImpulse(0.f),
     m_lateralFrictionInitialized(false),
     m_appliedImpulseLateral1(0.f),
     m_appliedImpulseLateral2(0.f),
     m_contactMotion1(0.f),
     m_contactMotion2(0.f),
     m_contactCFM1(0.f),
     m_contactCFM2(0.f),
     m_lifeTime(0)
   {
    mConstraintRow[0].m_accumImpulse = 0.f;
    mConstraintRow[1].m_accumImpulse = 0.f;
    mConstraintRow[2].m_accumImpulse = 0.f;
   }



   btVector3 m_localPointA;
   btVector3 m_localPointB;
   btVector3 m_positionWorldOnB;

   btVector3 m_positionWorldOnA;
   btVector3 m_normalWorldOnB;

   float m_distance1;
   float m_combinedFriction;
   float m_combinedRestitution;


         int m_partId0;
         int m_partId1;
         int m_index0;
         int m_index1;

   mutable void* m_userPersistentData;
   float m_appliedImpulse;

   bool m_lateralFrictionInitialized;
   float m_appliedImpulseLateral1;
   float m_appliedImpulseLateral2;
   float m_contactMotion1;
   float m_contactMotion2;
   float m_contactCFM1;
   float m_contactCFM2;

   int m_lifeTime;

   btVector3 m_lateralFrictionDir1;
   btVector3 m_lateralFrictionDir2;



   btConstraintRow mConstraintRow[3];


   float getDistance() const
   {
    return m_distance1;
   }
   int getLifeTime() const
   {
    return m_lifeTime;
   }

   const btVector3& getPositionWorldOnA() const {
    return m_positionWorldOnA;

   }

   const btVector3& getPositionWorldOnB() const
   {
    return m_positionWorldOnB;
   }

   void setDistance(float dist)
   {
    m_distance1 = dist;
   }


   float getAppliedImpulse() const
   {
    return m_appliedImpulse;
   }



 };
# 23 "../src/BulletCollision/NarrowPhaseCollision/btPersistentManifold.h" 2


struct btCollisionResult;


extern float gContactBreakingThreshold;

typedef bool (*ContactDestroyedCallback)(void* userPersistentData);
typedef bool (*ContactProcessedCallback)(btManifoldPoint& cp,void* body0,void* body1);
extern ContactDestroyedCallback gContactDestroyedCallback;
extern ContactProcessedCallback gContactProcessedCallback;


enum btContactManifoldTypes
{
 MIN_CONTACT_MANIFOLD_TYPE = 1024,
 BT_PERSISTENT_MANIFOLD_TYPE
};
# 53 "../src/BulletCollision/NarrowPhaseCollision/btPersistentManifold.h"
class btPersistentManifold : public btTypedObject

{

 btManifoldPoint m_pointCache[4];



 void* m_body0;
 void* m_body1;

 int m_cachedPoints;

 float m_contactBreakingThreshold;
 float m_contactProcessingThreshold;



 int sortCachedPoints(const btManifoldPoint& pt);

 int findContactPoint(const btManifoldPoint* unUsed, int numUnused,const btManifoldPoint& pt);

public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 int m_companionIdA;
 int m_companionIdB;

 int m_index1a;

 btPersistentManifold();

 btPersistentManifold(void* body0,void* body1,int , float contactBreakingThreshold,float contactProcessingThreshold)
  : btTypedObject(BT_PERSISTENT_MANIFOLD_TYPE),
 m_body0(body0),m_body1(body1),m_cachedPoints(0),
  m_contactBreakingThreshold(contactBreakingThreshold),
  m_contactProcessingThreshold(contactProcessingThreshold)
 {
 }

 inline void* getBody0() { return m_body0;}
 inline void* getBody1() { return m_body1;}

 inline const void* getBody0() const { return m_body0;}
 inline const void* getBody1() const { return m_body1;}

 void setBodies(void* body0,void* body1)
 {
  m_body0 = body0;
  m_body1 = body1;
 }

 void clearUserCache(btManifoldPoint& pt);





 inline int getNumContacts() const { return m_cachedPoints;}

 inline const btManifoldPoint& getContactPoint(int index) const
 {
  ;
  return m_pointCache[index];
 }

 inline btManifoldPoint& getContactPoint(int index)
 {
  ;
  return m_pointCache[index];
 }


 float getContactBreakingThreshold() const;

 float getContactProcessingThreshold() const
 {
  return m_contactProcessingThreshold;
 }

 int getCacheEntry(const btManifoldPoint& newPoint) const;

 int addManifoldPoint( const btManifoldPoint& newPoint);

 void removeContactPoint (int index)
 {
  clearUserCache(m_pointCache[index]);

  int lastUsedIndex = getNumContacts() - 1;

  if(index != lastUsedIndex)
  {
   m_pointCache[index] = m_pointCache[lastUsedIndex];

   m_pointCache[lastUsedIndex].m_userPersistentData = 0;
   m_pointCache[lastUsedIndex].mConstraintRow[0].m_accumImpulse = 0.f;
   m_pointCache[lastUsedIndex].mConstraintRow[1].m_accumImpulse = 0.f;
   m_pointCache[lastUsedIndex].mConstraintRow[2].m_accumImpulse = 0.f;

   m_pointCache[lastUsedIndex].m_appliedImpulse = 0.f;
   m_pointCache[lastUsedIndex].m_lateralFrictionInitialized = false;
   m_pointCache[lastUsedIndex].m_appliedImpulseLateral1 = 0.f;
   m_pointCache[lastUsedIndex].m_appliedImpulseLateral2 = 0.f;
   m_pointCache[lastUsedIndex].m_lifeTime = 0;
  }

  ;
  m_cachedPoints--;
 }
 void replaceContactPoint(const btManifoldPoint& newPoint,int insertIndex)
 {
  ;



  int lifeTime = m_pointCache[insertIndex].getLifeTime();
  float appliedImpulse = m_pointCache[insertIndex].mConstraintRow[0].m_accumImpulse;
  float appliedLateralImpulse1 = m_pointCache[insertIndex].mConstraintRow[1].m_accumImpulse;
  float appliedLateralImpulse2 = m_pointCache[insertIndex].mConstraintRow[2].m_accumImpulse;




  ;
  void* cache = m_pointCache[insertIndex].m_userPersistentData;

  m_pointCache[insertIndex] = newPoint;

  m_pointCache[insertIndex].m_userPersistentData = cache;
  m_pointCache[insertIndex].m_appliedImpulse = appliedImpulse;
  m_pointCache[insertIndex].m_appliedImpulseLateral1 = appliedLateralImpulse1;
  m_pointCache[insertIndex].m_appliedImpulseLateral2 = appliedLateralImpulse2;

  m_pointCache[insertIndex].mConstraintRow[0].m_accumImpulse = appliedImpulse;
  m_pointCache[insertIndex].mConstraintRow[1].m_accumImpulse = appliedLateralImpulse1;
  m_pointCache[insertIndex].mConstraintRow[2].m_accumImpulse = appliedLateralImpulse2;


  m_pointCache[insertIndex].m_lifeTime = lifeTime;





 }

 bool validContactDistance(const btManifoldPoint& pt) const
 {
  if (pt.m_lifeTime >1)
  {
   return pt.m_distance1 <= getContactBreakingThreshold();
  }
  return pt.m_distance1 <= getContactProcessingThreshold();

 }

 void refreshContactPoints( const btTransform& trA,const btTransform& trB);


 inline void clearManifold()
 {
  int i;
  for (i=0;i<m_cachedPoints;i++)
  {
   clearUserCache(m_pointCache[i]);
  }
  m_cachedPoints = 0;
 }



}
;
# 21 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 2

# 1 "../src/BulletCollision/CollisionDispatch/btManifoldResult.h" 1
# 20 "../src/BulletCollision/CollisionDispatch/btManifoldResult.h"
class btCollisionObject;

class btManifoldPoint;

# 1 "../src/BulletCollision/NarrowPhaseCollision/btDiscreteCollisionDetectorInterface.h" 1
# 22 "../src/BulletCollision/NarrowPhaseCollision/btDiscreteCollisionDetectorInterface.h"
class btStackAlloc;






class btDiscreteCollisionDetectorInterface
 { public: 

 class Result
  { public: 

  virtual ~Result(){}


  virtual void setShapeIdentifiersA(int partId0,int index0)=0;
  virtual void setShapeIdentifiersB(int partId1,int index1)=0;
  virtual void addContactPoint(const btVector3& normalOnBInWorld,const btVector3& pointInWorld,float depth)=0;
 };

 class ClosestPointInput
  { public: 
  ClosestPointInput()
   :m_maximumDistanceSquared(float(1e18f)),
   m_stackAlloc(0)
  {
  }

  btTransform m_transformA;
  btTransform m_transformB;
  float m_maximumDistanceSquared;
  btStackAlloc* m_stackAlloc;
 };

 virtual ~btDiscreteCollisionDetectorInterface() {};





 virtual void getClosestPoints(const ClosestPointInput& input,Result& output,class btIDebugDraw* debugDraw,bool swapResults=false) = 0;

};

class btStorageResult : public btDiscreteCollisionDetectorInterface::Result
 { public: 
  btVector3 m_normalOnSurfaceB;
  btVector3 m_closestPointInB;
  float m_distance;

  btStorageResult() : m_distance(float(1e18f))
  {

  }
  virtual ~btStorageResult() {};

  virtual void addContactPoint(const btVector3& normalOnBInWorld,const btVector3& pointInWorld,float depth)
  {
   if (depth < m_distance)
   {
    m_normalOnSurfaceB = normalOnBInWorld;
    m_closestPointInB = pointInWorld;
    m_distance = depth;
   }
  }
};
# 25 "../src/BulletCollision/CollisionDispatch/btManifoldResult.h" 2



typedef bool (*ContactAddedCallback)(btManifoldPoint& cp, const btCollisionObject* colObj0,int partId0,int index0,const btCollisionObject* colObj1,int partId1,int index1);
extern ContactAddedCallback gContactAddedCallback;






class btManifoldResult : public btDiscreteCollisionDetectorInterface::Result
{
protected:

 btPersistentManifold* m_manifoldPtr;


 btTransform m_rootTransA;
 btTransform m_rootTransB;

 btCollisionObject* m_body0;
 btCollisionObject* m_body1;
 int m_partId0;
 int m_partId1;
 int m_index0;
 int m_index1;


public:

 btManifoldResult()

  :
 m_partId0(-1),
 m_partId1(-1),
 m_index0(-1),
 m_index1(-1)

 {
 }

 btManifoldResult(btCollisionObject* body0,btCollisionObject* body1);

 virtual ~btManifoldResult() {};

 void setPersistentManifold(btPersistentManifold* manifoldPtr)
 {
  m_manifoldPtr = manifoldPtr;
 }

 const btPersistentManifold* getPersistentManifold() const
 {
  return m_manifoldPtr;
 }
 btPersistentManifold* getPersistentManifold()
 {
  return m_manifoldPtr;
 }

 virtual void setShapeIdentifiersA(int partId0,int index0)
 {
  m_partId0=partId0;
  m_index0=index0;
 }

 virtual void setShapeIdentifiersB( int partId1,int index1)
 {
  m_partId1=partId1;
  m_index1=index1;
 }


 virtual void addContactPoint(const btVector3& normalOnBInWorld,const btVector3& pointInWorld,float depth);

 inline void refreshContactPoints()
 {
  ;
  if (!m_manifoldPtr->getNumContacts())
   return;

  bool isSwapped = m_manifoldPtr->getBody0() != m_body0;

  if (isSwapped)
  {
   m_manifoldPtr->refreshContactPoints(m_rootTransB,m_rootTransA);
  } else
  {
   m_manifoldPtr->refreshContactPoints(m_rootTransA,m_rootTransB);
  }
 }

 const btCollisionObject* getBody0Internal() const
 {
  return m_body0;
 }

 const btCollisionObject* getBody1Internal() const
 {
  return m_body1;
 }

};
# 23 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 2

# 1 "../src/BulletCollision/BroadphaseCollision/btBroadphaseProxy.h" 1
# 28 "../src/BulletCollision/BroadphaseCollision/btBroadphaseProxy.h"
enum BroadphaseNativeTypes
{

 BOX_SHAPE_PROXYTYPE,
 TRIANGLE_SHAPE_PROXYTYPE,
 TETRAHEDRAL_SHAPE_PROXYTYPE,
 CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE,
 CONVEX_HULL_SHAPE_PROXYTYPE,
 CONVEX_POINT_CLOUD_SHAPE_PROXYTYPE,
 CUSTOM_POLYHEDRAL_SHAPE_TYPE,

IMPLICIT_CONVEX_SHAPES_START_HERE,
 SPHERE_SHAPE_PROXYTYPE,
 MULTI_SPHERE_SHAPE_PROXYTYPE,
 CAPSULE_SHAPE_PROXYTYPE,
 CONE_SHAPE_PROXYTYPE,
 CONVEX_SHAPE_PROXYTYPE,
 CYLINDER_SHAPE_PROXYTYPE,
 UNIFORM_SCALING_SHAPE_PROXYTYPE,
 MINKOWSKI_SUM_SHAPE_PROXYTYPE,
 MINKOWSKI_DIFFERENCE_SHAPE_PROXYTYPE,
 BOX_2D_SHAPE_PROXYTYPE,
 CONVEX_2D_SHAPE_PROXYTYPE,
 CUSTOM_CONVEX_SHAPE_TYPE,

CONCAVE_SHAPES_START_HERE,

 TRIANGLE_MESH_SHAPE_PROXYTYPE,
 SCALED_TRIANGLE_MESH_SHAPE_PROXYTYPE,

 FAST_CONCAVE_MESH_PROXYTYPE,

 TERRAIN_SHAPE_PROXYTYPE,

 GIMPACT_SHAPE_PROXYTYPE,

    MULTIMATERIAL_TRIANGLE_MESH_PROXYTYPE,

 EMPTY_SHAPE_PROXYTYPE,
 STATIC_PLANE_PROXYTYPE,
 CUSTOM_CONCAVE_SHAPE_TYPE,
CONCAVE_SHAPES_END_HERE,

 COMPOUND_SHAPE_PROXYTYPE,

 SOFTBODY_SHAPE_PROXYTYPE,
 HFFLUID_SHAPE_PROXYTYPE,
 HFFLUID_BUOYANT_CONVEX_SHAPE_PROXYTYPE,
 INVALID_SHAPE_PROXYTYPE,

 MAX_BROADPHASE_COLLISION_TYPES

};




class btBroadphaseProxy
 { public: 

inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };


 enum CollisionFilterGroups
 {
         DefaultFilter = 1,
         StaticFilter = 2,
         KinematicFilter = 4,
         DebrisFilter = 8,
   SensorTrigger = 16,
   CharacterFilter = 32,
         AllFilter = -1
 };


 void* m_clientObject;
 short int m_collisionFilterGroup;
 short int m_collisionFilterMask;
 void* m_multiSapParentProxy;
 int m_uniqueId;

 btVector3 m_aabbMin;
 btVector3 m_aabbMax;

 inline int getUid() const
 {
  return m_uniqueId;
 }


 btBroadphaseProxy() :m_clientObject(0),m_multiSapParentProxy(0)
 {
 }

 btBroadphaseProxy(const btVector3& aabbMin,const btVector3& aabbMax,void* userPtr,short int collisionFilterGroup, short int collisionFilterMask,void* multiSapParentProxy=0)
  :m_clientObject(userPtr),
  m_collisionFilterGroup(collisionFilterGroup),
  m_collisionFilterMask(collisionFilterMask),
  m_aabbMin(aabbMin),
  m_aabbMax(aabbMax)
 {
  m_multiSapParentProxy = multiSapParentProxy;
 }



 static inline bool isPolyhedral(int proxyType)
 {
  return (proxyType < IMPLICIT_CONVEX_SHAPES_START_HERE);
 }

 static inline bool isConvex(int proxyType)
 {
  return (proxyType < CONCAVE_SHAPES_START_HERE);
 }

 static inline bool isNonMoving(int proxyType)
 {
  return (isConcave(proxyType) && !(proxyType==GIMPACT_SHAPE_PROXYTYPE));
 }

 static inline bool isConcave(int proxyType)
 {
  return ((proxyType > CONCAVE_SHAPES_START_HERE) &&
   (proxyType < CONCAVE_SHAPES_END_HERE));
 }
 static inline bool isCompound(int proxyType)
 {
  return (proxyType == COMPOUND_SHAPE_PROXYTYPE);
 }

 static inline bool isSoftBody(int proxyType)
 {
  return (proxyType == SOFTBODY_SHAPE_PROXYTYPE);
 }

 static inline bool isInfinite(int proxyType)
 {
  return (proxyType == STATIC_PLANE_PROXYTYPE);
 }

 static inline bool isConvex2d(int proxyType)
 {
  return (proxyType == BOX_2D_SHAPE_PROXYTYPE) || (proxyType == CONVEX_2D_SHAPE_PROXYTYPE);
 }


}
;

class btCollisionAlgorithm;

struct btBroadphaseProxy;





class btBroadphasePair
 { public: 
 btBroadphasePair ()
  :
 m_pProxy0(0),
  m_pProxy1(0),
  m_algorithm(0),
  m_internalInfo1(0)
 {
 }

inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btBroadphasePair(const btBroadphasePair& other)
  : m_pProxy0(other.m_pProxy0),
    m_pProxy1(other.m_pProxy1),
    m_algorithm(other.m_algorithm),
    m_internalInfo1(other.m_internalInfo1)
 {
 }
 btBroadphasePair(btBroadphaseProxy& proxy0,btBroadphaseProxy& proxy1)
 {


  if (proxy0.m_uniqueId < proxy1.m_uniqueId)
        {
            m_pProxy0 = &proxy0;
            m_pProxy1 = &proxy1;
        }
        else
        {
   m_pProxy0 = &proxy1;
            m_pProxy1 = &proxy0;
        }

  m_algorithm = 0;
  m_internalInfo1 = 0;

 }

 btBroadphaseProxy* m_pProxy0;
 btBroadphaseProxy* m_pProxy1;

 mutable btCollisionAlgorithm* m_algorithm;
 union { void* m_internalInfo1; int m_internalTmpValue;};

};
# 245 "../src/BulletCollision/BroadphaseCollision/btBroadphaseProxy.h"
class btBroadphasePairSortPredicate
{
 public:

  bool operator() ( const btBroadphasePair& a, const btBroadphasePair& b )
  {
   const int uidA0 = a.m_pProxy0 ? a.m_pProxy0->m_uniqueId : -1;
   const int uidB0 = b.m_pProxy0 ? b.m_pProxy0->m_uniqueId : -1;
   const int uidA1 = a.m_pProxy1 ? a.m_pProxy1->m_uniqueId : -1;
   const int uidB1 = b.m_pProxy1 ? b.m_pProxy1->m_uniqueId : -1;

    return uidA0 > uidB0 ||
    (a.m_pProxy0 == b.m_pProxy0 && uidA1 > uidB1) ||
    (a.m_pProxy0 == b.m_pProxy0 && a.m_pProxy1 == b.m_pProxy1 && a.m_algorithm > b.m_algorithm);
  }
};


inline bool operator==(const btBroadphasePair& a, const btBroadphasePair& b)
{
  return (a.m_pProxy0 == b.m_pProxy0) && (a.m_pProxy1 == b.m_pProxy1);
}
# 25 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 2


class btIDebugDraw;
class btOverlappingPairCache;
class btPoolAllocator;
class btCollisionConfiguration;

# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionCreateFunc.h" 1
# 20 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionCreateFunc.h"
class btCollisionAlgorithm;
class btCollisionObject;

struct btCollisionAlgorithmConstructionInfo;


class btCollisionAlgorithmCreateFunc
 { public: 
 bool m_swapped;

 btCollisionAlgorithmCreateFunc()
  :m_swapped(false)
 {
 }
 virtual ~btCollisionAlgorithmCreateFunc(){};

 virtual btCollisionAlgorithm* CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo& , btCollisionObject* body0,btCollisionObject* body1)
 {

  ()body0;
  ()body1;
  return 0;
 }
};
# 33 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 2



class btCollisionDispatcher;

typedef void (*btNearCallback)(btBroadphasePair& collisionPair, btCollisionDispatcher& dispatcher, const btDispatcherInfo& dispatchInfo);




class btCollisionDispatcher : public btDispatcher
{

protected:

 int m_dispatcherFlags;

 btAlignedObjectArray<btPersistentManifold*> m_manifoldsPtr;

 btManifoldResult m_defaultManifoldResult;

 btNearCallback m_nearCallback;

 btPoolAllocator* m_collisionAlgorithmPoolAllocator;

 btPoolAllocator* m_persistentManifoldPoolAllocator;

 btCollisionAlgorithmCreateFunc* m_doubleDispatch[MAX_BROADPHASE_COLLISION_TYPES][MAX_BROADPHASE_COLLISION_TYPES];

 btCollisionConfiguration* m_collisionConfiguration;


public:

 enum DispatcherFlags
 {
  CD_STATIC_STATIC_REPORTED = 1,
  CD_USE_RELATIVE_CONTACT_BREAKING_THRESHOLD = 2,
  CD_DISABLE_CONTACTPOOL_DYNAMIC_ALLOCATION = 4
 };

 int getDispatcherFlags() const
 {
  return m_dispatcherFlags;
 }

 void setDispatcherFlags(int flags)
 {
  m_dispatcherFlags = flags;
 }


 void registerCollisionCreateFunc(int proxyType0,int proxyType1, btCollisionAlgorithmCreateFunc* createFunc);

 int getNumManifolds() const
 {
  return int( m_manifoldsPtr.size());
 }

 btPersistentManifold** getInternalManifoldPointer()
 {
  return &m_manifoldsPtr[0];
 }

  btPersistentManifold* getManifoldByIndexInternal(int index)
 {
  return m_manifoldsPtr[index];
 }

  const btPersistentManifold* getManifoldByIndexInternal(int index) const
 {
  return m_manifoldsPtr[index];
 }

 btCollisionDispatcher (btCollisionConfiguration* collisionConfiguration);

 virtual ~btCollisionDispatcher();

 virtual btPersistentManifold* getNewManifold(void* b0,void* b1);

 virtual void releaseManifold(btPersistentManifold* manifold);


 virtual void clearManifold(btPersistentManifold* manifold);


 btCollisionAlgorithm* findAlgorithm(btCollisionObject* body0,btCollisionObject* body1,btPersistentManifold* sharedManifold = 0);

 virtual bool needsCollision(btCollisionObject* body0,btCollisionObject* body1);

 virtual bool needsResponse(btCollisionObject* body0,btCollisionObject* body1);

 virtual void dispatchAllCollisionPairs(btOverlappingPairCache* pairCache,const btDispatcherInfo& dispatchInfo,btDispatcher* dispatcher) ;

 void setNearCallback(btNearCallback nearCallback)
 {
  m_nearCallback = nearCallback;
 }

 btNearCallback getNearCallback() const
 {
  return m_nearCallback;
 }


 static void defaultNearCallback(btBroadphasePair& collisionPair, btCollisionDispatcher& dispatcher, const btDispatcherInfo& dispatchInfo);

 virtual void* allocateCollisionAlgorithm(int size);

 virtual void freeCollisionAlgorithm(void* ptr);

 btCollisionConfiguration* getCollisionConfiguration()
 {
  return m_collisionConfiguration;
 }

 const btCollisionConfiguration* getCollisionConfiguration() const
 {
  return m_collisionConfiguration;
 }

 void setCollisionConfiguration(btCollisionConfiguration* config)
 {
  m_collisionConfiguration = config;
 }

 virtual btPoolAllocator* getInternalManifoldPool()
 {
  return m_persistentManifoldPoolAllocator;
 }

 virtual const btPoolAllocator* getInternalManifoldPool() const
 {
  return m_persistentManifoldPoolAllocator;
 }

};
# 78 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 2
# 1 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h" 1
# 20 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h"
# 1 "../src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h" 1
# 21 "../src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h"
struct btDispatcherInfo;
class btDispatcher;
# 1 "../src/BulletCollision/BroadphaseCollision/btBroadphaseProxy.h" 1
# 24 "../src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h" 2

class btOverlappingPairCache;



class btBroadphaseAabbCallback
 { public: 
 virtual ~btBroadphaseAabbCallback() {}
 virtual bool process(const btBroadphaseProxy* proxy) = 0;
};


class btBroadphaseRayCallback : public btBroadphaseAabbCallback
 { public: 

 btVector3 m_rayDirectionInverse;
 unsigned int m_signs[3];
 float m_lambda_max;

 virtual ~btBroadphaseRayCallback() {}
};






class btBroadphaseInterface
{
public:
 virtual ~btBroadphaseInterface() {}

 virtual btBroadphaseProxy* createProxy( const btVector3& aabbMin, const btVector3& aabbMax,int shapeType,void* userPtr, short int collisionFilterGroup,short int collisionFilterMask, btDispatcher* dispatcher,void* multiSapProxy) =0;
 virtual void destroyProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher)=0;
 virtual void setAabb(btBroadphaseProxy* proxy,const btVector3& aabbMin,const btVector3& aabbMax, btDispatcher* dispatcher)=0;
 virtual void getAabb(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const =0;

 virtual void rayTest(const btVector3& rayFrom,const btVector3& rayTo, btBroadphaseRayCallback& rayCallback, const btVector3& aabbMin=btVector3, const btVector3& aabbMax = btVector3(0,0,0)) = 0;

 virtual void aabbTest(const btVector3& aabbMin, const btVector3& aabbMax, btBroadphaseAabbCallback& callback) = 0;


 virtual void calculateOverlappingPairs(btDispatcher* dispatcher)=0;

 virtual btOverlappingPairCache* getOverlappingPairCache()=0;
 virtual const btOverlappingPairCache* getOverlappingPairCache() const =0;



 virtual void getBroadphaseAabb(btVector3& aabbMin,btVector3& aabbMax) const =0;


 virtual void resetPool(btDispatcher* dispatcher) { () dispatcher; };

 virtual void printStats() = 0;

};
# 21 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h" 2

# 1 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h" 1
# 20 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h"
class btDispatcher;
struct btBroadphasePair;


class btOverlappingPairCallback
{
public:
 virtual ~btOverlappingPairCallback()
 {

 }

 virtual btBroadphasePair* addOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1) = 0;

 virtual void* removeOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1,btDispatcher* dispatcher) = 0;

 virtual void removeOverlappingPairsContainingProxy(btBroadphaseProxy* proxy0,btDispatcher* dispatcher) = 0;

};
# 23 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h" 2


class btDispatcher;

typedef btAlignedObjectArray<btBroadphasePair> btBroadphasePairArray;

class btOverlapCallback
 { public: 
 virtual ~btOverlapCallback()
 {}

 virtual bool processOverlap(btBroadphasePair& pair) = 0;

};

class btOverlapFilterCallback
 { public: 
 virtual ~btOverlapFilterCallback()
 {}

 virtual bool needBroadphaseCollision(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1) const = 0;
};







extern int gRemovePairs;
extern int gAddedPairs;
extern int gFindPairs;

const int BT_NULL_PAIR=0xffffffff;



class btOverlappingPairCache : public btOverlappingPairCallback
{
public:
 virtual ~btOverlappingPairCache() {}

 virtual btBroadphasePair* getOverlappingPairArrayPtr() = 0;

 virtual const btBroadphasePair* getOverlappingPairArrayPtr() const = 0;

 virtual btBroadphasePairArray& getOverlappingPairArray() = 0;

 virtual void cleanOverlappingPair(btBroadphasePair& pair,btDispatcher* dispatcher) = 0;

 virtual int getNumOverlappingPairs() const = 0;

 virtual void cleanProxyFromPairs(btBroadphaseProxy* proxy,btDispatcher* dispatcher) = 0;

 virtual void setOverlapFilterCallback(btOverlapFilterCallback* callback) = 0;

 virtual void processAllOverlappingPairs(btOverlapCallback*,btDispatcher* dispatcher) = 0;

 virtual btBroadphasePair* findPair(btBroadphaseProxy* proxy0, btBroadphaseProxy* proxy1) = 0;

 virtual bool hasDeferredRemoval() = 0;

 virtual void setInternalGhostPairCallback(btOverlappingPairCallback* ghostPairCallback)=0;

 virtual void sortOverlappingPairs(btDispatcher* dispatcher) = 0;


};


class btHashedOverlappingPairCache : public btOverlappingPairCache
{
 btBroadphasePairArray m_overlappingPairArray;
 btOverlapFilterCallback* m_overlapFilterCallback;
 bool m_blockedForChanges;


public:
 btHashedOverlappingPairCache();
 virtual ~btHashedOverlappingPairCache();


 void removeOverlappingPairsContainingProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher);

 virtual void* removeOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1,btDispatcher* dispatcher);

 inline bool needsBroadphaseCollision(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1) const
 {
  if (m_overlapFilterCallback)
   return m_overlapFilterCallback->needBroadphaseCollision(proxy0,proxy1);

  bool collides = (proxy0->m_collisionFilterGroup & proxy1->m_collisionFilterMask) != 0;
  collides = collides && (proxy1->m_collisionFilterGroup & proxy0->m_collisionFilterMask);

  return collides;
 }



 virtual btBroadphasePair* addOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1)
 {
  gAddedPairs++;

  if (!needsBroadphaseCollision(proxy0,proxy1))
   return 0;

  return internalAddPair(proxy0,proxy1);
 }



 void cleanProxyFromPairs(btBroadphaseProxy* proxy,btDispatcher* dispatcher);


 virtual void processAllOverlappingPairs(btOverlapCallback*,btDispatcher* dispatcher);

 virtual btBroadphasePair* getOverlappingPairArrayPtr()
 {
  return &m_overlappingPairArray[0];
 }

 const btBroadphasePair* getOverlappingPairArrayPtr() const
 {
  return &m_overlappingPairArray[0];
 }

 btBroadphasePairArray& getOverlappingPairArray()
 {
  return m_overlappingPairArray;
 }

 const btBroadphasePairArray& getOverlappingPairArray() const
 {
  return m_overlappingPairArray;
 }

 void cleanOverlappingPair(btBroadphasePair& pair,btDispatcher* dispatcher);



 btBroadphasePair* findPair(btBroadphaseProxy* proxy0, btBroadphaseProxy* proxy1);

 int GetCount() const { return m_overlappingPairArray.size(); }


 btOverlapFilterCallback* getOverlapFilterCallback()
 {
  return m_overlapFilterCallback;
 }

 void setOverlapFilterCallback(btOverlapFilterCallback* callback)
 {
  m_overlapFilterCallback = callback;
 }

 int getNumOverlappingPairs() const
 {
  return m_overlappingPairArray.size();
 }
private:

 btBroadphasePair* internalAddPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1);

 void growTables();

 inline bool equalsPair(const btBroadphasePair& pair, int proxyId1, int proxyId2)
 {
  return pair.m_pProxy0->getUid() == proxyId1 && pair.m_pProxy1->getUid() == proxyId2;
 }
# 211 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h"
 inline unsigned int getHash(unsigned int proxyId1, unsigned int proxyId2)
 {
  int key = static_cast<int>(((unsigned int)proxyId1) | (((unsigned int)proxyId2) <<16));


  key += ~(key << 15);
  key ^= (key >> 10);
  key += (key << 3);
  key ^= (key >> 6);
  key += ~(key << 11);
  key ^= (key >> 16);
  return static_cast<unsigned int>(key);
 }





 inline btBroadphasePair* internalFindPair(btBroadphaseProxy* proxy0, btBroadphaseProxy* proxy1, int hash)
 {
  int proxyId1 = proxy0->getUid();
  int proxyId2 = proxy1->getUid();





  int index = m_hashTable[hash];

  while( index != BT_NULL_PAIR && equalsPair(m_overlappingPairArray[index], proxyId1, proxyId2) == false)
  {
   index = m_next[index];
  }

  if ( index == BT_NULL_PAIR )
  {
   return __null;
  }

  ;

  return &m_overlappingPairArray[index];
 }

 virtual bool hasDeferredRemoval()
 {
  return false;
 }

 virtual void setInternalGhostPairCallback(btOverlappingPairCallback* ghostPairCallback)
 {
  m_ghostPairCallback = ghostPairCallback;
 }

 virtual void sortOverlappingPairs(btDispatcher* dispatcher);


protected:

 btAlignedObjectArray<int> m_hashTable;
 btAlignedObjectArray<int> m_next;
 btOverlappingPairCallback* m_ghostPairCallback;

};






class btSortedOverlappingPairCache : public btOverlappingPairCache
{
 protected:

  btBroadphasePairArray m_overlappingPairArray;


  bool m_blockedForChanges;


  bool m_hasDeferredRemoval;


  btOverlapFilterCallback* m_overlapFilterCallback;

  btOverlappingPairCallback* m_ghostPairCallback;

 public:

  btSortedOverlappingPairCache();
  virtual ~btSortedOverlappingPairCache();

  virtual void processAllOverlappingPairs(btOverlapCallback*,btDispatcher* dispatcher);

  void* removeOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1,btDispatcher* dispatcher);

  void cleanOverlappingPair(btBroadphasePair& pair,btDispatcher* dispatcher);

  btBroadphasePair* addOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1);

  btBroadphasePair* findPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1);


  void cleanProxyFromPairs(btBroadphaseProxy* proxy,btDispatcher* dispatcher);

  void removeOverlappingPairsContainingProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher);


  inline bool needsBroadphaseCollision(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1) const
  {
   if (m_overlapFilterCallback)
    return m_overlapFilterCallback->needBroadphaseCollision(proxy0,proxy1);

   bool collides = (proxy0->m_collisionFilterGroup & proxy1->m_collisionFilterMask) != 0;
   collides = collides && (proxy1->m_collisionFilterGroup & proxy0->m_collisionFilterMask);

   return collides;
  }

  btBroadphasePairArray& getOverlappingPairArray()
  {
   return m_overlappingPairArray;
  }

  const btBroadphasePairArray& getOverlappingPairArray() const
  {
   return m_overlappingPairArray;
  }




  btBroadphasePair* getOverlappingPairArrayPtr()
  {
   return &m_overlappingPairArray[0];
  }

  const btBroadphasePair* getOverlappingPairArrayPtr() const
  {
   return &m_overlappingPairArray[0];
  }

  int getNumOverlappingPairs() const
  {
   return m_overlappingPairArray.size();
  }

  btOverlapFilterCallback* getOverlapFilterCallback()
  {
   return m_overlapFilterCallback;
  }

  void setOverlapFilterCallback(btOverlapFilterCallback* callback)
  {
   m_overlapFilterCallback = callback;
  }

  virtual bool hasDeferredRemoval()
  {
   return m_hasDeferredRemoval;
  }

  virtual void setInternalGhostPairCallback(btOverlappingPairCallback* ghostPairCallback)
  {
   m_ghostPairCallback = ghostPairCallback;
  }

  virtual void sortOverlappingPairs(btDispatcher* dispatcher);


};




class btNullPairCache : public btOverlappingPairCache
{

 btBroadphasePairArray m_overlappingPairArray;

public:

 virtual btBroadphasePair* getOverlappingPairArrayPtr()
 {
  return &m_overlappingPairArray[0];
 }
 const btBroadphasePair* getOverlappingPairArrayPtr() const
 {
  return &m_overlappingPairArray[0];
 }
 btBroadphasePairArray& getOverlappingPairArray()
 {
  return m_overlappingPairArray;
 }

 virtual void cleanOverlappingPair(btBroadphasePair& ,btDispatcher* )
 {

 }

 virtual int getNumOverlappingPairs() const
 {
  return 0;
 }

 virtual void cleanProxyFromPairs(btBroadphaseProxy* ,btDispatcher* )
 {

 }

 virtual void setOverlapFilterCallback(btOverlapFilterCallback* )
 {
 }

 virtual void processAllOverlappingPairs(btOverlapCallback*,btDispatcher* )
 {
 }

 virtual btBroadphasePair* findPair(btBroadphaseProxy* , btBroadphaseProxy* )
 {
  return 0;
 }

 virtual bool hasDeferredRemoval()
 {
  return true;
 }

 virtual void setInternalGhostPairCallback(btOverlappingPairCallback* )
 {

 }

 virtual btBroadphasePair* addOverlappingPair(btBroadphaseProxy* ,btBroadphaseProxy* )
 {
  return 0;
 }

 virtual void* removeOverlappingPair(btBroadphaseProxy* ,btBroadphaseProxy* ,btDispatcher* )
 {
  return 0;
 }

 virtual void removeOverlappingPairsContainingProxy(btBroadphaseProxy* ,btDispatcher* )
 {
 }

 virtual void sortOverlappingPairs(btDispatcher* dispatcher)
 {
        () dispatcher;
 }


};
# 79 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 2



class btCollisionWorld
{


protected:

 btAlignedObjectArray<btCollisionObject*> m_collisionObjects;

 btDispatcher* m_dispatcher1;

 btDispatcherInfo m_dispatchInfo;

 btStackAlloc* m_stackAlloc;

 btBroadphaseInterface* m_broadphasePairCache;

 btIDebugDraw* m_debugDrawer;



 bool m_forceUpdateAllAabbs;

 void serializeCollisionObjects(btSerializer* serializer);

public:


 btCollisionWorld(btDispatcher* dispatcher,btBroadphaseInterface* broadphasePairCache, btCollisionConfiguration* collisionConfiguration);

 virtual ~btCollisionWorld();

 void setBroadphase(btBroadphaseInterface* pairCache)
 {
  m_broadphasePairCache = pairCache;
 }

 const btBroadphaseInterface* getBroadphase() const
 {
  return m_broadphasePairCache;
 }

 btBroadphaseInterface* getBroadphase()
 {
  return m_broadphasePairCache;
 }

 btOverlappingPairCache* getPairCache()
 {
  return m_broadphasePairCache->getOverlappingPairCache();
 }


 btDispatcher* getDispatcher()
 {
  return m_dispatcher1;
 }

 const btDispatcher* getDispatcher() const
 {
  return m_dispatcher1;
 }

 void updateSingleAabb(btCollisionObject* colObj);

 virtual void updateAabbs();

 virtual void setDebugDrawer(btIDebugDraw* debugDrawer)
 {
   m_debugDrawer = debugDrawer;
 }

 virtual btIDebugDraw* getDebugDrawer()
 {
  return m_debugDrawer;
 }

 virtual void debugDrawWorld();

 virtual void debugDrawObject(const btTransform& worldTransform, const btCollisionShape* shape, const btVector3& color);




 class LocalShapeInfo
  { public: 
  int m_shapePart;
  int m_triangleIndex;



 };

 class LocalRayResult
  { public: 
  LocalRayResult(btCollisionObject* collisionObject,
   btCollisionWorld::LocalShapeInfo* localShapeInfo,
   const btVector3& hitNormalLocal,
   float hitFraction)
  :m_collisionObject(collisionObject),
  m_localShapeInfo(localShapeInfo),
  m_hitNormalLocal(hitNormalLocal),
  m_hitFraction(hitFraction)
  {
  }

  btCollisionObject* m_collisionObject;
  btCollisionWorld::LocalShapeInfo* m_localShapeInfo;
  btVector3 m_hitNormalLocal;
  float m_hitFraction;

 };


 class RayResultCallback
  { public: 
  float m_closestHitFraction;
  btCollisionObject* m_collisionObject;
  short int m_collisionFilterGroup;
  short int m_collisionFilterMask;

      unsigned int m_flags;

  virtual ~RayResultCallback()
  {
  }
  bool hasHit() const
  {
   return (m_collisionObject != 0);
  }

  RayResultCallback()
   :m_closestHitFraction(float(1.)),
   m_collisionObject(0),
   m_collisionFilterGroup(btBroadphaseProxy::DefaultFilter),
   m_collisionFilterMask(btBroadphaseProxy::AllFilter),

         m_flags(0)
  {
  }

  virtual bool needsCollision(btBroadphaseProxy* proxy0) const
  {
   bool collides = (proxy0->m_collisionFilterGroup & m_collisionFilterMask) != 0;
   collides = collides && (m_collisionFilterGroup & proxy0->m_collisionFilterMask);
   return collides;
  }


  virtual float addSingleResult(LocalRayResult& rayResult,bool normalInWorldSpace) = 0;
 };

 class ClosestRayResultCallback : public RayResultCallback
  { public: 
  ClosestRayResultCallback(const btVector3& rayFromWorld,const btVector3& rayToWorld)
  :m_rayFromWorld(rayFromWorld),
  m_rayToWorld(rayToWorld)
  {
  }

  btVector3 m_rayFromWorld;
  btVector3 m_rayToWorld;

  btVector3 m_hitNormalWorld;
  btVector3 m_hitPointWorld;

  virtual float addSingleResult(LocalRayResult& rayResult,bool normalInWorldSpace)
  {

   ;

   m_closestHitFraction = rayResult.m_hitFraction;
   m_collisionObject = rayResult.m_collisionObject;
   if (normalInWorldSpace)
   {
    m_hitNormalWorld = rayResult.m_hitNormalLocal;
   } else
   {

    m_hitNormalWorld = m_collisionObject->getWorldTransform().getBasis()*rayResult.m_hitNormalLocal;
   }
   m_hitPointWorld.setInterpolate3(m_rayFromWorld,m_rayToWorld,rayResult.m_hitFraction);
   return rayResult.m_hitFraction;
  }
 };

 class AllHitsRayResultCallback : public RayResultCallback
  { public: 
  AllHitsRayResultCallback(const btVector3& rayFromWorld,const btVector3& rayToWorld)
  :m_rayFromWorld(rayFromWorld),
  m_rayToWorld(rayToWorld)
  {
  }

  btAlignedObjectArray<btCollisionObject*> m_collisionObjects;

  btVector3 m_rayFromWorld;
  btVector3 m_rayToWorld;

  btAlignedObjectArray<btVector3> m_hitNormalWorld;
  btAlignedObjectArray<btVector3> m_hitPointWorld;
  btAlignedObjectArray<float> m_hitFractions;

  virtual float addSingleResult(LocalRayResult& rayResult,bool normalInWorldSpace)
  {
   m_collisionObject = rayResult.m_collisionObject;
   m_collisionObjects.push_back(rayResult.m_collisionObject);
   btVector3 hitNormalWorld;
   if (normalInWorldSpace)
   {
    hitNormalWorld = rayResult.m_hitNormalLocal;
   } else
   {

    hitNormalWorld = m_collisionObject->getWorldTransform().getBasis()*rayResult.m_hitNormalLocal;
   }
   m_hitNormalWorld.push_back(hitNormalWorld);
   btVector3 hitPointWorld;
   hitPointWorld.setInterpolate3(m_rayFromWorld,m_rayToWorld,rayResult.m_hitFraction);
   m_hitPointWorld.push_back(hitPointWorld);
   m_hitFractions.push_back(rayResult.m_hitFraction);
   return m_closestHitFraction;
  }
 };


 class LocalConvexResult
  { public: 
  LocalConvexResult(btCollisionObject* hitCollisionObject,
   btCollisionWorld::LocalShapeInfo* localShapeInfo,
   const btVector3& hitNormalLocal,
   const btVector3& hitPointLocal,
   float hitFraction
   )
  :m_hitCollisionObject(hitCollisionObject),
  m_localShapeInfo(localShapeInfo),
  m_hitNormalLocal(hitNormalLocal),
  m_hitPointLocal(hitPointLocal),
  m_hitFraction(hitFraction)
  {
  }

  btCollisionObject* m_hitCollisionObject;
  btCollisionWorld::LocalShapeInfo* m_localShapeInfo;
  btVector3 m_hitNormalLocal;
  btVector3 m_hitPointLocal;
  float m_hitFraction;
 };


 class ConvexResultCallback
  { public: 
  float m_closestHitFraction;
  short int m_collisionFilterGroup;
  short int m_collisionFilterMask;

  ConvexResultCallback()
   :m_closestHitFraction(float(1.)),
   m_collisionFilterGroup(btBroadphaseProxy::DefaultFilter),
   m_collisionFilterMask(btBroadphaseProxy::AllFilter)
  {
  }

  virtual ~ConvexResultCallback()
  {
  }

  bool hasHit() const
  {
   return (m_closestHitFraction < float(1.));
  }



  virtual bool needsCollision(btBroadphaseProxy* proxy0) const
  {
   bool collides = (proxy0->m_collisionFilterGroup & m_collisionFilterMask) != 0;
   collides = collides && (m_collisionFilterGroup & proxy0->m_collisionFilterMask);
   return collides;
  }

  virtual float addSingleResult(LocalConvexResult& convexResult,bool normalInWorldSpace) = 0;
 };

 class ClosestConvexResultCallback : public ConvexResultCallback
  { public: 
  ClosestConvexResultCallback(const btVector3& convexFromWorld,const btVector3& convexToWorld)
  :m_convexFromWorld(convexFromWorld),
  m_convexToWorld(convexToWorld),
  m_hitCollisionObject(0)
  {
  }

  btVector3 m_convexFromWorld;
  btVector3 m_convexToWorld;

  btVector3 m_hitNormalWorld;
  btVector3 m_hitPointWorld;
  btCollisionObject* m_hitCollisionObject;

  virtual float addSingleResult(LocalConvexResult& convexResult,bool normalInWorldSpace)
  {

   ;

   m_closestHitFraction = convexResult.m_hitFraction;
   m_hitCollisionObject = convexResult.m_hitCollisionObject;
   if (normalInWorldSpace)
   {
    m_hitNormalWorld = convexResult.m_hitNormalLocal;
   } else
   {

    m_hitNormalWorld = m_hitCollisionObject->getWorldTransform().getBasis()*convexResult.m_hitNormalLocal;
   }
   m_hitPointWorld = convexResult.m_hitPointLocal;
   return convexResult.m_hitFraction;
  }
 };


 class ContactResultCallback
  { public: 
  short int m_collisionFilterGroup;
  short int m_collisionFilterMask;

  ContactResultCallback()
   :m_collisionFilterGroup(btBroadphaseProxy::DefaultFilter),
   m_collisionFilterMask(btBroadphaseProxy::AllFilter)
  {
  }

  virtual ~ContactResultCallback()
  {
  }

  virtual bool needsCollision(btBroadphaseProxy* proxy0) const
  {
   bool collides = (proxy0->m_collisionFilterGroup & m_collisionFilterMask) != 0;
   collides = collides && (m_collisionFilterGroup & proxy0->m_collisionFilterMask);
   return collides;
  }

  virtual float addSingleResult(btManifoldPoint& cp, const btCollisionObject* colObj0,int partId0,int index0,const btCollisionObject* colObj1,int partId1,int index1) = 0;
 };



 int getNumCollisionObjects() const
 {
  return int(m_collisionObjects.size());
 }



 virtual void rayTest(const btVector3& rayFromWorld, const btVector3& rayToWorld, btCollisionWorld::RayResultCallback& resultCallback) const;



 void convexSweepTest (const btConvexShape* castShape, const btTransform& from, const btTransform& to, btCollisionWorld::ConvexResultCallback& resultCallback, float allowedCcdPenetration = float(0.)) const;



 void contactTest(btCollisionObject* colObj, btCollisionWorld::ContactResultCallback& resultCallback);



 void contactPairTest(btCollisionObject* colObjA, btCollisionObject* colObjB, btCollisionWorld::ContactResultCallback& resultCallback);





 static void rayTestSingle(const btTransform& rayFromTrans,const btTransform& rayToTrans,
       btCollisionObject* collisionObject,
       const btCollisionShape* collisionShape,
       const btTransform& colObjWorldTransform,
       btCollisionWorld::RayResultCallback& resultCallback);


 static void objectQuerySingle(const btConvexShape* castShape, const btTransform& rayFromTrans,const btTransform& rayToTrans,
       btCollisionObject* collisionObject,
       const btCollisionShape* collisionShape,
       const btTransform& colObjWorldTransform,
       btCollisionWorld::ConvexResultCallback& resultCallback, float allowedPenetration);

 virtual void addCollisionObject(btCollisionObject* collisionObject,short int collisionFilterGroup=btBroadphaseProxy::DefaultFilter,short int collisionFilterMask=btBroadphaseProxy::AllFilter);

 btCollisionObjectArray& getCollisionObjectArray()
 {
  return m_collisionObjects;
 }

 const btCollisionObjectArray& getCollisionObjectArray() const
 {
  return m_collisionObjects;
 }


 virtual void removeCollisionObject(btCollisionObject* collisionObject);

 virtual void performDiscreteCollisionDetection();

 btDispatcherInfo& getDispatchInfo()
 {
  return m_dispatchInfo;
 }

 const btDispatcherInfo& getDispatchInfo() const
 {
  return m_dispatchInfo;
 }

 bool getForceUpdateAllAabbs() const
 {
  return m_forceUpdateAllAabbs;
 }
 void setForceUpdateAllAabbs( bool forceUpdateAllAabbs)
 {
  m_forceUpdateAllAabbs = forceUpdateAllAabbs;
 }


 virtual void serialize(btSerializer* serializer);

};
# 23 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionObject.h" 1
# 24 "../../bullet/src/btBulletCollisionCommon.h" 2


# 1 "../../bullet/src/BulletCollision/CollisionShapes/btBoxShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btBoxShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btPolyhedralConvexShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btPolyhedralConvexShape.h"
# 1 "../src/LinearMath/btMatrix3x3.h" 1
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btPolyhedralConvexShape.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btConvexShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btConvexShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h" 1
# 23 "../../bullet/src/BulletCollision/CollisionShapes/btCollisionShape.h"
class btSerializer;



class btCollisionShape
{
protected:
 int m_shapeType;
 void* m_userPointer;

public:

 btCollisionShape() : m_shapeType (INVALID_SHAPE_PROXYTYPE), m_userPointer(0)
 {
 }

 virtual ~btCollisionShape()
 {
 }


 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const =0;

 virtual void getBoundingSphere(btVector3& center,float& radius) const;


 virtual float getAngularMotionDisc() const;

 virtual float getContactBreakingThreshold(float defaultContactThresholdFactor) const;




 void calculateTemporalAabb(const btTransform& curTrans,const btVector3& linvel,const btVector3& angvel,float timeStep, btVector3& temporalAabbMin,btVector3& temporalAabbMax) const;



 inline bool isPolyhedral() const
 {
  return btBroadphaseProxy::isPolyhedral(getShapeType());
 }

 inline bool isConvex2d() const
 {
  return btBroadphaseProxy::isConvex2d(getShapeType());
 }

 inline bool isConvex() const
 {
  return btBroadphaseProxy::isConvex(getShapeType());
 }
 inline bool isNonMoving() const
 {
  return btBroadphaseProxy::isNonMoving(getShapeType());
 }
 inline bool isConcave() const
 {
  return btBroadphaseProxy::isConcave(getShapeType());
 }
 inline bool isCompound() const
 {
  return btBroadphaseProxy::isCompound(getShapeType());
 }

 inline bool isSoftBody() const
 {
  return btBroadphaseProxy::isSoftBody(getShapeType());
 }


 inline bool isInfinite() const
 {
  return btBroadphaseProxy::isInfinite(getShapeType());
 }


 virtual void setLocalScaling(const btVector3& scaling) =0;
 virtual const btVector3& getLocalScaling() const =0;
 virtual void calculateLocalInertia(float mass,btVector3& inertia) const = 0;



 virtual const char* getName()const =0 ;



 int getShapeType() const { return m_shapeType; }
 virtual void setMargin(float margin) = 0;
 virtual float getMargin() const = 0;



 void setUserPointer(void* userPtr)
 {
  m_userPointer = userPtr;
 }

 void* getUserPointer() const
 {
  return m_userPointer;
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

 virtual void serializeSingleShape(btSerializer* serializer) const;

};


class btCollisionShapeData
 { public: 
 char *m_name;
 int m_shapeType;
 char m_padding[4];
};

inline int btCollisionShape::calculateSerializeBufferSize() const
{
 return sizeof(btCollisionShapeData);
}
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btConvexShape.h" 2




# 1 "../../bullet/src/BulletCollision/CollisionShapes/btCollisionMargin.h" 1
# 25 "../../bullet/src/BulletCollision/CollisionShapes/btConvexShape.h" 2






class btConvexShape : public btCollisionShape
{


public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btConvexShape ();

 virtual ~btConvexShape();

 virtual btVector3 localGetSupportingVertex(const btVector3& vec)const = 0;



 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec) const=0;


 btVector3 localGetSupportVertexWithoutMarginNonVirtual (const btVector3& vec) const;
 btVector3 localGetSupportVertexNonVirtual (const btVector3& vec) const;
 float getMarginNonVirtual () const;
 void getAabbNonVirtual (const btTransform& t, btVector3& aabbMin, btVector3& aabbMax) const;



 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const= 0;


 void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const =0;

 virtual void getAabbSlow(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const =0;

 virtual void setLocalScaling(const btVector3& scaling) =0;
 virtual const btVector3& getLocalScaling() const =0;

 virtual void setMargin(float margin)=0;

 virtual float getMargin() const=0;

 virtual int getNumPreferredPenetrationDirections() const=0;

 virtual void getPreferredPenetrationDirection(int index, btVector3& penetrationVector) const=0;




};
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h" 2
# 1 "../src/LinearMath/btAabbUtil2.h" 1
# 26 "../src/LinearMath/btAabbUtil2.h"
inline void AabbExpand (btVector3& aabbMin,
           btVector3& aabbMax,
           const btVector3& expansionMin,
           const btVector3& expansionMax)
{
 aabbMin = aabbMin + expansionMin;
 aabbMax = aabbMax + expansionMax;
}


inline bool TestPointAgainstAabb2(const btVector3 &aabbMin1, const btVector3 &aabbMax1,
        const btVector3 &point)
{
 bool overlap = true;
 overlap = (aabbMin1.getX() > point.getX() || aabbMax1.getX() < point.getX()) ? false : overlap;
 overlap = (aabbMin1.getZ() > point.getZ() || aabbMax1.getZ() < point.getZ()) ? false : overlap;
 overlap = (aabbMin1.getY() > point.getY() || aabbMax1.getY() < point.getY()) ? false : overlap;
 return overlap;
}



inline bool TestAabbAgainstAabb2(const btVector3 &aabbMin1, const btVector3 &aabbMax1,
        const btVector3 &aabbMin2, const btVector3 &aabbMax2)
{
 bool overlap = true;
 overlap = (aabbMin1.getX() > aabbMax2.getX() || aabbMax1.getX() < aabbMin2.getX()) ? false : overlap;
 overlap = (aabbMin1.getZ() > aabbMax2.getZ() || aabbMax1.getZ() < aabbMin2.getZ()) ? false : overlap;
 overlap = (aabbMin1.getY() > aabbMax2.getY() || aabbMax1.getY() < aabbMin2.getY()) ? false : overlap;
 return overlap;
}


inline bool TestTriangleAgainstAabb2(const btVector3 *vertices,
         const btVector3 &aabbMin, const btVector3 &aabbMax)
{
 const btVector3 &p1 = vertices[0];
 const btVector3 &p2 = vertices[1];
 const btVector3 &p3 = vertices[2];

 if (btMin(btMin(p1[0], p2[0]), p3[0]) > aabbMax[0]) return false;
 if (btMax(btMax(p1[0], p2[0]), p3[0]) < aabbMin[0]) return false;

 if (btMin(btMin(p1[2], p2[2]), p3[2]) > aabbMax[2]) return false;
 if (btMax(btMax(p1[2], p2[2]), p3[2]) < aabbMin[2]) return false;

 if (btMin(btMin(p1[1], p2[1]), p3[1]) > aabbMax[1]) return false;
 if (btMax(btMax(p1[1], p2[1]), p3[1]) < aabbMin[1]) return false;
 return true;
}


inline int btOutcode(const btVector3& p,const btVector3& halfExtent)
{
 return (p.getX() < -halfExtent.getX() ? 0x01 : 0x0) |
     (p.getX() > halfExtent.getX() ? 0x08 : 0x0) |
     (p.getY() < -halfExtent.getY() ? 0x02 : 0x0) |
     (p.getY() > halfExtent.getY() ? 0x10 : 0x0) |
     (p.getZ() < -halfExtent.getZ() ? 0x4 : 0x0) |
     (p.getZ() > halfExtent.getZ() ? 0x20 : 0x0);
}



inline bool btRayAabb2(const btVector3& rayFrom,
          const btVector3& rayInvDirection,
          const unsigned int raySign[3],
          const btVector3 bounds[2],
          float& tmin,
          float lambda_min,
          float lambda_max)
{
 float tmax, tymin, tymax, tzmin, tzmax;
 tmin = (bounds[raySign[0]].getX() - rayFrom.getX()) * rayInvDirection.getX();
 tmax = (bounds[1-raySign[0]].getX() - rayFrom.getX()) * rayInvDirection.getX();
 tymin = (bounds[raySign[1]].getY() - rayFrom.getY()) * rayInvDirection.getY();
 tymax = (bounds[1-raySign[1]].getY() - rayFrom.getY()) * rayInvDirection.getY();

 if ( (tmin > tymax) || (tymin > tmax) )
  return false;

 if (tymin > tmin)
  tmin = tymin;

 if (tymax < tmax)
  tmax = tymax;

 tzmin = (bounds[raySign[2]].getZ() - rayFrom.getZ()) * rayInvDirection.getZ();
 tzmax = (bounds[1-raySign[2]].getZ() - rayFrom.getZ()) * rayInvDirection.getZ();

 if ( (tmin > tzmax) || (tzmin > tmax) )
  return false;
 if (tzmin > tmin)
  tmin = tzmin;
 if (tzmax < tmax)
  tmax = tzmax;
 return ( (tmin < lambda_max) && (tmax > lambda_min) );
}

inline bool btRayAabb(const btVector3& rayFrom,
         const btVector3& rayTo,
         const btVector3& aabbMin,
         const btVector3& aabbMax,
       float& param, btVector3& normal)
{
 btVector3 aabbHalfExtent = (aabbMax-aabbMin)* float(0.5);
 btVector3 aabbCenter = (aabbMax+aabbMin)* float(0.5);
 btVector3 source = rayFrom - aabbCenter;
 btVector3 target = rayTo - aabbCenter;
 int sourceOutcode = btOutcode(source,aabbHalfExtent);
 int targetOutcode = btOutcode(target,aabbHalfExtent);
 if ((sourceOutcode & targetOutcode) == 0x0)
 {
  float lambda_enter = float(0.0);
  float lambda_exit = param;
  btVector3 r = target - source;
  int i;
  float normSign = 1;
  btVector3 hitNormal(0,0,0);
  int bit=1;

  for (int j=0;j<2;j++)
  {
   for (i = 0; i != 3; ++i)
   {
    if (sourceOutcode & bit)
    {
     float lambda = (-source[i] - aabbHalfExtent[i]*normSign) / r[i];
     if (lambda_enter <= lambda)
     {
      lambda_enter = lambda;
      hitNormal.setValue(0,0,0);
      hitNormal[i] = normSign;
     }
    }
    else if (targetOutcode & bit)
    {
     float lambda = (-source[i] - aabbHalfExtent[i]*normSign) / r[i];
     btSetMin(lambda_exit, lambda);
    }
    bit<<=1;
   }
   normSign = float(-1.);
  }
  if (lambda_enter <= lambda_exit)
  {
   param = lambda_enter;
   normal = hitNormal;
   return true;
  }
 }
 return false;
}



inline void btTransformAabb(const btVector3& halfExtents, float margin,const btTransform& t,btVector3& aabbMinOut,btVector3& aabbMaxOut)
{
 btVector3 halfExtentsWithMargin = halfExtents+btVector3(margin,margin,margin);
 btMatrix3x3 abs_b = t.getBasis().absolute();
 btVector3 center = t.getOrigin();
 btVector3 extent = btVector3(abs_b[0].dot(halfExtentsWithMargin),
     abs_b[1].dot(halfExtentsWithMargin),
    abs_b[2].dot(halfExtentsWithMargin));
 aabbMinOut = center - extent;
 aabbMaxOut = center + extent;
}


inline void btTransformAabb(const btVector3& localAabbMin,const btVector3& localAabbMax, float margin,const btTransform& trans,btVector3& aabbMinOut,btVector3& aabbMaxOut)
{
  ;
  ;
  ;
  btVector3 localHalfExtents = float(0.5)*(localAabbMax-localAabbMin);
  localHalfExtents+=btVector3(margin,margin,margin);

  btVector3 localCenter = float(0.5)*(localAabbMax+localAabbMin);
  btMatrix3x3 abs_b = trans.getBasis().absolute();
  btVector3 center = trans(localCenter);
  btVector3 extent = btVector3(abs_b[0].dot(localHalfExtents),
      abs_b[1].dot(localHalfExtents),
     abs_b[2].dot(localHalfExtents));
  aabbMinOut = center-extent;
  aabbMaxOut = center+extent;
}




 inline unsigned testQuantizedAabbAgainstQuantizedAabb(const unsigned short int* aabbMin1,const unsigned short int* aabbMax1,const unsigned short int* aabbMin2,const unsigned short int* aabbMax2)
 {
  return static_cast<unsigned int>(btSelect((unsigned)((aabbMin1[0] <= aabbMax2[0]) & (aabbMax1[0] >= aabbMin2[0])
   & (aabbMin1[2] <= aabbMax2[2]) & (aabbMax1[2] >= aabbMin2[2])
   & (aabbMin1[1] <= aabbMax2[1]) & (aabbMax1[1] >= aabbMin2[1])),
   1, 0));
 }
# 21 "../../bullet/src/BulletCollision/CollisionShapes/btConvexInternalShape.h" 2



class btConvexInternalShape : public btConvexShape
{

 protected:


 btVector3 m_localScaling;

 btVector3 m_implicitShapeDimensions;

 float m_collisionMargin;

 float m_padding;

 btConvexInternalShape();

public:



 virtual ~btConvexInternalShape()
 {

 }

 virtual btVector3 localGetSupportingVertex(const btVector3& vec)const;

 const btVector3& getImplicitShapeDimensions() const
 {
  return m_implicitShapeDimensions;
 }





 void setImplicitShapeDimensions(const btVector3& dimensions)
 {
  m_implicitShapeDimensions = dimensions;
 }


 void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const
 {
  getAabbSlow(t,aabbMin,aabbMax);
 }



 virtual void getAabbSlow(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;


 virtual void setLocalScaling(const btVector3& scaling);
 virtual const btVector3& getLocalScaling() const
 {
  return m_localScaling;
 }

 const btVector3& getLocalScalingNV() const
 {
  return m_localScaling;
 }

 virtual void setMargin(float margin)
 {
  m_collisionMargin = margin;
 }
 virtual float getMargin() const
 {
  return m_collisionMargin;
 }

 float getMarginNV() const
 {
  return m_collisionMargin;
 }

 virtual int getNumPreferredPenetrationDirections() const
 {
  return 0;
 }

 virtual void getPreferredPenetrationDirection(int index, btVector3& penetrationVector) const
 {
  ()penetrationVector;
  ()index;
  ;
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btConvexInternalShapeData
 { public: 
 btCollisionShapeData m_collisionShapeData;

 btVector3FloatData m_localScaling;

 btVector3FloatData m_implicitShapeDimensions;

 float m_collisionMargin;

 int m_padding;

};



inline int btConvexInternalShape::calculateSerializeBufferSize() const
{
 return sizeof(btConvexInternalShapeData);
}


inline const char* btConvexInternalShape::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btConvexInternalShapeData* shapeData = (btConvexInternalShapeData*) dataBuffer;
 btCollisionShape::serialize(&shapeData->m_collisionShapeData, serializer);

 m_implicitShapeDimensions.serializeFloat(shapeData->m_implicitShapeDimensions);
 m_localScaling.serializeFloat(shapeData->m_localScaling);
 shapeData->m_collisionMargin = float(m_collisionMargin);

 return "btConvexInternalShapeData";
}





class btConvexInternalAabbCachingShape : public btConvexInternalShape
{
 btVector3 m_localAabbMin;
 btVector3 m_localAabbMax;
 bool m_isLocalAabbValid;

protected:

 btConvexInternalAabbCachingShape();

 void setCachedLocalAabb (const btVector3& aabbMin, const btVector3& aabbMax)
 {
  m_isLocalAabbValid = true;
  m_localAabbMin = aabbMin;
  m_localAabbMax = aabbMax;
 }

 inline void getCachedLocalAabb (btVector3& aabbMin, btVector3& aabbMax) const
 {
  ;
  aabbMin = m_localAabbMin;
  aabbMax = m_localAabbMax;
 }

 inline void getNonvirtualAabb(const btTransform& trans,btVector3& aabbMin,btVector3& aabbMax, float margin) const
 {


  ;
  btTransformAabb(m_localAabbMin,m_localAabbMax,margin,trans,aabbMin,aabbMax);
 }

public:

 virtual void setLocalScaling(const btVector3& scaling);

 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 void recalcLocalAabb();

};
# 21 "../../bullet/src/BulletCollision/CollisionShapes/btPolyhedralConvexShape.h" 2
class btConvexPolyhedron;



class btPolyhedralConvexShape : public btConvexInternalShape
{


protected:

 btConvexPolyhedron* m_polyhedron;

public:

 btPolyhedralConvexShape();

 virtual ~btPolyhedralConvexShape();


 virtual bool initializePolyhedralFeatures();

 const btConvexPolyhedron* getConvexPolyhedron() const
 {
  return m_polyhedron;
 }



 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;
 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;


 virtual int getNumVertices() const = 0 ;
 virtual int getNumEdges() const = 0;
 virtual void getEdge(int i,btVector3& pa,btVector3& pb) const = 0;
 virtual void getVertex(int i,btVector3& vtx) const = 0;
 virtual int getNumPlanes() const = 0;
 virtual void getPlane(btVector3& planeNormal,btVector3& planeSupport,int i ) const = 0;


 virtual bool isInside(const btVector3& pt,float tolerance) const = 0;

};



class btPolyhedralConvexAabbCachingShape : public btPolyhedralConvexShape
{

 btVector3 m_localAabbMin;
 btVector3 m_localAabbMax;
 bool m_isLocalAabbValid;

protected:

 void setCachedLocalAabb (const btVector3& aabbMin, const btVector3& aabbMax)
 {
  m_isLocalAabbValid = true;
  m_localAabbMin = aabbMin;
  m_localAabbMax = aabbMax;
 }

 inline void getCachedLocalAabb (btVector3& aabbMin, btVector3& aabbMax) const
 {
  ;
  aabbMin = m_localAabbMin;
  aabbMax = m_localAabbMax;
 }

public:

 btPolyhedralConvexAabbCachingShape();

 inline void getNonvirtualAabb(const btTransform& trans,btVector3& aabbMin,btVector3& aabbMax, float margin) const
 {


  ;
  btTransformAabb(m_localAabbMin,m_localAabbMax,margin,trans,aabbMin,aabbMax);
 }

 virtual void setLocalScaling(const btVector3& scaling);

 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 void recalcLocalAabb();

};
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btBoxShape.h" 2



# 1 "../src/LinearMath/btMinMax.h" 1
# 24 "../../bullet/src/BulletCollision/CollisionShapes/btBoxShape.h" 2


class btBoxShape: public btPolyhedralConvexShape
{




public:

 btVector3 getHalfExtentsWithMargin() const
 {
  btVector3 halfExtents = getHalfExtentsWithoutMargin();
  btVector3 margin(getMargin(),getMargin(),getMargin());
  halfExtents += margin;
  return halfExtents;
 }

 const btVector3& getHalfExtentsWithoutMargin() const
 {
  return m_implicitShapeDimensions;
 }


 virtual btVector3 localGetSupportingVertex(const btVector3& vec) const
 {
  btVector3 halfExtents = getHalfExtentsWithoutMargin();
  btVector3 margin(getMargin(),getMargin(),getMargin());
  halfExtents += margin;

  return btVector3((float)btFsel(vec.x(),halfExtents.x(),-halfExtents.x()),
   (float)btFsel(vec.y(),halfExtents.y(),-halfExtents.y()),
   (float)btFsel(vec.z(),halfExtents.z(),-halfExtents.z()));
 }

 inline btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const
 {
  const btVector3& halfExtents = getHalfExtentsWithoutMargin();

  return btVector3((float)btFsel(vec.x(),halfExtents.x(),-halfExtents.x()),
   (float)btFsel(vec.y(),halfExtents.y(),-halfExtents.y()),
   (float)btFsel(vec.z(),halfExtents.z(),-halfExtents.z()));
 }

 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const
 {
  const btVector3& halfExtents = getHalfExtentsWithoutMargin();

  for (int i=0;i<numVectors;i++)
  {
   const btVector3& vec = vectors[i];
   supportVerticesOut[i].setValue((float)btFsel(vec.x(),halfExtents.x(),-halfExtents.x()),
    (float)btFsel(vec.y(),halfExtents.y(),-halfExtents.y()),
    (float)btFsel(vec.z(),halfExtents.z(),-halfExtents.z()));
  }

 }


 btBoxShape( const btVector3& boxHalfExtents)
  : btPolyhedralConvexShape()
 {
  m_shapeType = BOX_SHAPE_PROXYTYPE;
  btVector3 margin(getMargin(),getMargin(),getMargin());
  m_implicitShapeDimensions = (boxHalfExtents * m_localScaling) - margin;
 };

 virtual void setMargin(float collisionMargin)
 {

  btVector3 oldMargin(getMargin(),getMargin(),getMargin());
  btVector3 implicitShapeDimensionsWithMargin = m_implicitShapeDimensions+oldMargin;

  btConvexInternalShape::setMargin(collisionMargin);
  btVector3 newMargin(getMargin(),getMargin(),getMargin());
  m_implicitShapeDimensions = implicitShapeDimensionsWithMargin - newMargin;

 }
 virtual void setLocalScaling(const btVector3& scaling)
 {
  btVector3 oldMargin(getMargin(),getMargin(),getMargin());
  btVector3 implicitShapeDimensionsWithMargin = m_implicitShapeDimensions+oldMargin;
  btVector3 unScaledImplicitShapeDimensionsWithMargin = implicitShapeDimensionsWithMargin / m_localScaling;

  btConvexInternalShape::setLocalScaling(scaling);

  m_implicitShapeDimensions = (unScaledImplicitShapeDimensionsWithMargin * m_localScaling) - oldMargin;

 }

 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;



 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void getPlane(btVector3& planeNormal,btVector3& planeSupport,int i ) const
 {

  btVector4 plane ;
  getPlaneEquation(plane,i);
  planeNormal = btVector3(plane.getX(),plane.getY(),plane.getZ());
  planeSupport = localGetSupportingVertex(-planeNormal);
 }


 virtual int getNumPlanes() const
 {
  return 6;
 }

 virtual int getNumVertices() const
 {
  return 8;
 }

 virtual int getNumEdges() const
 {
  return 12;
 }


 virtual void getVertex(int i,btVector3& vtx) const
 {
  btVector3 halfExtents = getHalfExtentsWithMargin();

  vtx = btVector3(
    halfExtents.x() * (1-(i&1)) - halfExtents.x() * (i&1),
    halfExtents.y() * (1-((i&2)>>1)) - halfExtents.y() * ((i&2)>>1),
    halfExtents.z() * (1-((i&4)>>2)) - halfExtents.z() * ((i&4)>>2));
 }


 virtual void getPlaneEquation(btVector4& plane,int i) const
 {
  btVector3 halfExtents = getHalfExtentsWithoutMargin();

  switch (i)
  {
  case 0:
   plane.setValue(float(1.),float(0.),float(0.),-halfExtents.x());
   break;
  case 1:
   plane.setValue(float(-1.),float(0.),float(0.),-halfExtents.x());
   break;
  case 2:
   plane.setValue(float(0.),float(1.),float(0.),-halfExtents.y());
   break;
  case 3:
   plane.setValue(float(0.),float(-1.),float(0.),-halfExtents.y());
   break;
  case 4:
   plane.setValue(float(0.),float(0.),float(1.),-halfExtents.z());
   break;
  case 5:
   plane.setValue(float(0.),float(0.),float(-1.),-halfExtents.z());
   break;
  default:
   ;
  }
 }


 virtual void getEdge(int i,btVector3& pa,btVector3& pb) const

 {
  int edgeVert0 = 0;
  int edgeVert1 = 0;

  switch (i)
  {
  case 0:
    edgeVert0 = 0;
    edgeVert1 = 1;
   break;
  case 1:
    edgeVert0 = 0;
    edgeVert1 = 2;
   break;
  case 2:
   edgeVert0 = 1;
   edgeVert1 = 3;

   break;
  case 3:
   edgeVert0 = 2;
   edgeVert1 = 3;
   break;
  case 4:
   edgeVert0 = 0;
   edgeVert1 = 4;
   break;
  case 5:
   edgeVert0 = 1;
   edgeVert1 = 5;

   break;
  case 6:
   edgeVert0 = 2;
   edgeVert1 = 6;
   break;
  case 7:
   edgeVert0 = 3;
   edgeVert1 = 7;
   break;
  case 8:
   edgeVert0 = 4;
   edgeVert1 = 5;
   break;
  case 9:
   edgeVert0 = 4;
   edgeVert1 = 6;
   break;
  case 10:
   edgeVert0 = 5;
   edgeVert1 = 7;
   break;
  case 11:
   edgeVert0 = 6;
   edgeVert1 = 7;
   break;
  default:
   ;

  }

  getVertex(edgeVert0,pa );
  getVertex(edgeVert1,pb );
 }





 virtual bool isInside(const btVector3& pt,float tolerance) const
 {
  btVector3 halfExtents = getHalfExtentsWithoutMargin();



  bool result = (pt.x() <= (halfExtents.x()+tolerance)) &&
      (pt.x() >= (-halfExtents.x()-tolerance)) &&
      (pt.y() <= (halfExtents.y()+tolerance)) &&
      (pt.y() >= (-halfExtents.y()-tolerance)) &&
      (pt.z() <= (halfExtents.z()+tolerance)) &&
      (pt.z() >= (-halfExtents.z()-tolerance));

  return result;
 }



 virtual const char* getName()const
 {
  return "Box";
 }

 virtual int getNumPreferredPenetrationDirections() const
 {
  return 6;
 }

 virtual void getPreferredPenetrationDirection(int index, btVector3& penetrationVector) const
 {
  switch (index)
  {
  case 0:
   penetrationVector.setValue(float(1.),float(0.),float(0.));
   break;
  case 1:
   penetrationVector.setValue(float(-1.),float(0.),float(0.));
   break;
  case 2:
   penetrationVector.setValue(float(0.),float(1.),float(0.));
   break;
  case 3:
   penetrationVector.setValue(float(0.),float(-1.),float(0.));
   break;
  case 4:
   penetrationVector.setValue(float(0.),float(0.),float(1.));
   break;
  case 5:
   penetrationVector.setValue(float(0.),float(0.),float(-1.));
   break;
  default:
   ;
  }
 }

};
# 27 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btSphereShape.h" 1
# 22 "../../bullet/src/BulletCollision/CollisionShapes/btSphereShape.h"
class btSphereShape : public btConvexInternalShape

{

public:
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btSphereShape (float radius) : btConvexInternalShape ()
 {
  m_shapeType = SPHERE_SHAPE_PROXYTYPE;
  m_implicitShapeDimensions.setX(radius);
  m_collisionMargin = radius;
 }

 virtual btVector3 localGetSupportingVertex(const btVector3& vec)const;
 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;

 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;


 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;


 float getRadius() const { return m_implicitShapeDimensions.getX() * m_localScaling.getX();}

 void setUnscaledRadius(float radius)
 {
  m_implicitShapeDimensions.setX(radius);
  btConvexInternalShape::setMargin(radius);
 }


 virtual const char* getName()const {return "SPHERE";}

 virtual void setMargin(float margin)
 {
  btConvexInternalShape::setMargin(margin);
 }
 virtual float getMargin() const
 {


  return getRadius();
 }


};
# 28 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btCapsuleShape.h" 1
# 26 "../../bullet/src/BulletCollision/CollisionShapes/btCapsuleShape.h"
class btCapsuleShape : public btConvexInternalShape
{
protected:
 int m_upAxis;

protected:

 btCapsuleShape() : btConvexInternalShape() {m_shapeType = CAPSULE_SHAPE_PROXYTYPE;};

public:
 btCapsuleShape(float radius,float height);


 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;


 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;

 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;

 virtual void setMargin(float collisionMargin)
 {

  btVector3 oldMargin(getMargin(),getMargin(),getMargin());
  btVector3 implicitShapeDimensionsWithMargin = m_implicitShapeDimensions+oldMargin;

  btConvexInternalShape::setMargin(collisionMargin);
  btVector3 newMargin(getMargin(),getMargin(),getMargin());
  m_implicitShapeDimensions = implicitShapeDimensionsWithMargin - newMargin;

 }

 virtual void getAabb (const btTransform& t, btVector3& aabbMin, btVector3& aabbMax) const
 {
   btVector3 halfExtents(getRadius(),getRadius(),getRadius());
   halfExtents[m_upAxis] = getRadius() + getHalfHeight();
   halfExtents += btVector3(getMargin(),getMargin(),getMargin());
   btMatrix3x3 abs_b = t.getBasis().absolute();
   btVector3 center = t.getOrigin();
   btVector3 extent = btVector3(abs_b[0].dot(halfExtents),abs_b[1].dot(halfExtents),abs_b[2].dot(halfExtents));

   aabbMin = center - extent;
   aabbMax = center + extent;
 }

 virtual const char* getName()const
 {
  return "CapsuleShape";
 }

 int getUpAxis() const
 {
  return m_upAxis;
 }

 float getRadius() const
 {
  int radiusAxis = (m_upAxis+2)%3;
  return m_implicitShapeDimensions[radiusAxis];
 }

 float getHalfHeight() const
 {
  return m_implicitShapeDimensions[m_upAxis];
 }

 virtual void setLocalScaling(const btVector3& scaling)
 {
  btVector3 oldMargin(getMargin(),getMargin(),getMargin());
  btVector3 implicitShapeDimensionsWithMargin = m_implicitShapeDimensions+oldMargin;
  btVector3 unScaledImplicitShapeDimensionsWithMargin = implicitShapeDimensionsWithMargin / m_localScaling;

  btConvexInternalShape::setLocalScaling(scaling);

  m_implicitShapeDimensions = (unScaledImplicitShapeDimensionsWithMargin * m_localScaling) - oldMargin;

 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};



class btCapsuleShapeX : public btCapsuleShape
{
public:

 btCapsuleShapeX(float radius,float height);


 virtual const char* getName()const
 {
  return "CapsuleX";
 }



};



class btCapsuleShapeZ : public btCapsuleShape
{
public:
 btCapsuleShapeZ(float radius,float height);


 virtual const char* getName()const
 {
  return "CapsuleZ";
 }


};


class btCapsuleShapeData
 { public: 
 btConvexInternalShapeData m_convexInternalShapeData;

 int m_upAxis;

 char m_padding[4];
};

inline int btCapsuleShape::calculateSerializeBufferSize() const
{
 return sizeof(btCapsuleShapeData);
}


inline const char* btCapsuleShape::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btCapsuleShapeData* shapeData = (btCapsuleShapeData*) dataBuffer;

 btConvexInternalShape::serialize(&shapeData->m_convexInternalShapeData,serializer);

 shapeData->m_upAxis = m_upAxis;

 return "btCapsuleShapeData";
}
# 29 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btBoxShape.h" 1
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btCylinderShape.h" 2




class btCylinderShape : public btConvexInternalShape

{

protected:

 int m_upAxis;

public:

 btVector3 getHalfExtentsWithMargin() const
 {
  btVector3 halfExtents = getHalfExtentsWithoutMargin();
  btVector3 margin(getMargin(),getMargin(),getMargin());
  halfExtents += margin;
  return halfExtents;
 }

 const btVector3& getHalfExtentsWithoutMargin() const
 {
  return m_implicitShapeDimensions;
 }

 btCylinderShape (const btVector3& halfExtents);

 void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;

 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;

 virtual void setMargin(float collisionMargin)
 {

  btVector3 oldMargin(getMargin(),getMargin(),getMargin());
  btVector3 implicitShapeDimensionsWithMargin = m_implicitShapeDimensions+oldMargin;

  btConvexInternalShape::setMargin(collisionMargin);
  btVector3 newMargin(getMargin(),getMargin(),getMargin());
  m_implicitShapeDimensions = implicitShapeDimensionsWithMargin - newMargin;

 }

 virtual btVector3 localGetSupportingVertex(const btVector3& vec) const
 {

  btVector3 supVertex;
  supVertex = localGetSupportingVertexWithoutMargin(vec);

  if ( getMargin()!=float(0.) )
  {
   btVector3 vecnorm = vec;
   if (vecnorm .length2() < (1.19209289550781250000e-7F*1.19209289550781250000e-7F))
   {
    vecnorm.setValue(float(-1.),float(-1.),float(-1.));
   }
   vecnorm.normalize();
   supVertex+= getMargin() * vecnorm;
  }
  return supVertex;
 }






 int getUpAxis() const
 {
  return m_upAxis;
 }

 virtual float getRadius() const
 {
  return getHalfExtentsWithMargin().getX();
 }

 virtual void setLocalScaling(const btVector3& scaling)
 {
  btVector3 oldMargin(getMargin(),getMargin(),getMargin());
  btVector3 implicitShapeDimensionsWithMargin = m_implicitShapeDimensions+oldMargin;
  btVector3 unScaledImplicitShapeDimensionsWithMargin = implicitShapeDimensionsWithMargin / m_localScaling;

  btConvexInternalShape::setLocalScaling(scaling);

  m_implicitShapeDimensions = (unScaledImplicitShapeDimensionsWithMargin * m_localScaling) - oldMargin;

 }


 virtual const char* getName()const
 {
  return "CylinderY";
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

};

class btCylinderShapeX : public btCylinderShape
{
public:
 btCylinderShapeX (const btVector3& halfExtents);

 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;
 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;


 virtual const char* getName()const
 {
  return "CylinderX";
 }

 virtual float getRadius() const
 {
  return getHalfExtentsWithMargin().getY();
 }

};

class btCylinderShapeZ : public btCylinderShape
{
public:
 btCylinderShapeZ (const btVector3& halfExtents);

 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;
 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;


 virtual const char* getName()const
 {
  return "CylinderZ";
 }

 virtual float getRadius() const
 {
  return getHalfExtentsWithMargin().getX();
 }

};


class btCylinderShapeData
 { public: 
 btConvexInternalShapeData m_convexInternalShapeData;

 int m_upAxis;

 char m_padding[4];
};

inline int btCylinderShape::calculateSerializeBufferSize() const
{
 return sizeof(btCylinderShapeData);
}


inline const char* btCylinderShape::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btCylinderShapeData* shapeData = (btCylinderShapeData*) dataBuffer;

 btConvexInternalShape::serialize(&shapeData->m_convexInternalShapeData,serializer);

 shapeData->m_upAxis = m_upAxis;

 return "btCylinderShapeData";
}
# 30 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btConeShape.h" 1
# 23 "../../bullet/src/BulletCollision/CollisionShapes/btConeShape.h"
class btConeShape : public btConvexInternalShape

{

 float m_sinAngle;
 float m_radius;
 float m_height;
 int m_coneIndices[3];
 btVector3 coneLocalSupport(const btVector3& v) const;


public:
 btConeShape (float radius,float height);

 virtual btVector3 localGetSupportingVertex(const btVector3& vec) const;
 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec) const;
 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;

 float getRadius() const { return m_radius;}
 float getHeight() const { return m_height;}


 virtual void calculateLocalInertia(float mass,btVector3& inertia) const
 {
  btTransform identity;
  identity.setIdentity();
  btVector3 aabbMin,aabbMax;
  getAabb(identity,aabbMin,aabbMax);

  btVector3 halfExtents = (aabbMax-aabbMin)*float(0.5);

  float margin = getMargin();

  float lx=float(2.)*(halfExtents.x()+margin);
  float ly=float(2.)*(halfExtents.y()+margin);
  float lz=float(2.)*(halfExtents.z()+margin);
  const float x2 = lx*lx;
  const float y2 = ly*ly;
  const float z2 = lz*lz;
  const float scaledmass = mass * float(0.08333333);

  inertia = scaledmass * (btVector3(y2+z2,x2+z2,x2+y2));




 }


  virtual const char* getName()const
  {
   return "Cone";
  }


  void setConeUpIndex(int upIndex);

  int getConeUpIndex() const
  {
   return m_coneIndices[1];
  }

 virtual void setLocalScaling(const btVector3& scaling);

};


class btConeShapeX : public btConeShape
{
 public:
  btConeShapeX(float radius,float height);
};


class btConeShapeZ : public btConeShape
{
 public:
  btConeShapeZ(float radius,float height);
};
# 31 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btStaticPlaneShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btStaticPlaneShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h" 1
# 21 "../../bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleCallback.h" 1
# 24 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleCallback.h"
class btTriangleCallback
{
public:

 virtual ~btTriangleCallback();
 virtual void processTriangle(btVector3* triangle, int partId, int triangleIndex) = 0;
};

class btInternalTriangleIndexCallback
{
public:

 virtual ~btInternalTriangleIndexCallback();
 virtual void internalProcessTriangleIndex(btVector3* triangle,int partId,int triangleIndex) = 0;
};
# 22 "../../bullet/src/BulletCollision/CollisionShapes/btConcaveShape.h" 2



typedef enum PHY_ScalarType {
 PHY_FLOAT,
 PHY_DOUBLE,
 PHY_INTEGER,
 PHY_SHORT,
 PHY_FIXEDPOINT88,
 PHY_UCHAR
} PHY_ScalarType;



class btConcaveShape : public btCollisionShape
{
protected:
 float m_collisionMargin;

public:
 btConcaveShape();

 virtual ~btConcaveShape();

 virtual void processAllTriangles(btTriangleCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const = 0;

 virtual float getMargin() const {
  return m_collisionMargin;
 }
 virtual void setMargin(float collisionMargin)
 {
  m_collisionMargin = collisionMargin;
 }



};
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btStaticPlaneShape.h" 2



class btStaticPlaneShape : public btConcaveShape
{
protected:
 btVector3 m_localAabbMin;
 btVector3 m_localAabbMax;

 btVector3 m_planeNormal;
 float m_planeConstant;
 btVector3 m_localScaling;

public:
 btStaticPlaneShape(const btVector3& planeNormal,float planeConstant);

 virtual ~btStaticPlaneShape();


 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 virtual void processAllTriangles(btTriangleCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const;

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void setLocalScaling(const btVector3& scaling);
 virtual const btVector3& getLocalScaling() const;

 const btVector3& getPlaneNormal() const
 {
  return m_planeNormal;
 }

 const float& getPlaneConstant() const
 {
  return m_planeConstant;
 }


 virtual const char* getName()const {return "STATICPLANE";}

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btStaticPlaneShapeData
 { public: 
 btCollisionShapeData m_collisionShapeData;

 btVector3FloatData m_localScaling;
 btVector3FloatData m_planeNormal;
 float m_planeConstant;
 char m_pad[4];
};


inline int btStaticPlaneShape::calculateSerializeBufferSize() const
{
 return sizeof(btStaticPlaneShapeData);
}


inline const char* btStaticPlaneShape::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btStaticPlaneShapeData* planeData = (btStaticPlaneShapeData*) dataBuffer;
 btCollisionShape::serialize(&planeData->m_collisionShapeData,serializer);

 m_localScaling.serializeFloat(planeData->m_localScaling);
 m_planeNormal.serializeFloat(planeData->m_planeNormal);
 planeData->m_planeConstant = float(m_planeConstant);

 return "btStaticPlaneShapeData";
}
# 32 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btConvexHullShape.h" 1
# 26 "../../bullet/src/BulletCollision/CollisionShapes/btConvexHullShape.h"
class btConvexHullShape : public btPolyhedralConvexAabbCachingShape
{
 btAlignedObjectArray<btVector3> m_unscaledPoints;

public:
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };





 btConvexHullShape(const float* points=0,int numPoints=0, int stride=sizeof(btVector3));

 void addPoint(const btVector3& point);


 btVector3* getUnscaledPoints()
 {
  return &m_unscaledPoints[0];
 }

 const btVector3* getUnscaledPoints() const
 {
  return &m_unscaledPoints[0];
 }


 const btVector3* getPoints() const
 {
  return getUnscaledPoints();
 }




 inline btVector3 getScaledPoint(int i) const
 {
  return m_unscaledPoints[i] * m_localScaling;
 }

 inline int getNumPoints() const
 {
  return m_unscaledPoints.size();
 }

 virtual btVector3 localGetSupportingVertex(const btVector3& vec)const;
 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;
 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;




 virtual const char* getName()const {return "Convex";}


 virtual int getNumVertices() const;
 virtual int getNumEdges() const;
 virtual void getEdge(int i,btVector3& pa,btVector3& pb) const;
 virtual void getVertex(int i,btVector3& vtx) const;
 virtual int getNumPlanes() const;
 virtual void getPlane(btVector3& planeNormal,btVector3& planeSupport,int i ) const;
 virtual bool isInside(const btVector3& pt,float tolerance) const;


 virtual void setLocalScaling(const btVector3& scaling);

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

};


class btConvexHullShapeData
 { public: 
 btConvexInternalShapeData m_convexInternalShapeData;

 btVector3FloatData *m_unscaledPointsFloatPtr;
 btVector3DoubleData *m_unscaledPointsDoublePtr;

 int m_numUnscaledPoints;
 char m_padding3[4];

};


inline int btConvexHullShape::calculateSerializeBufferSize() const
{
 return sizeof(btConvexHullShapeData);
}
# 33 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleMesh.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleMesh.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btStridingMeshInterface.h" 1
# 30 "../../bullet/src/BulletCollision/CollisionShapes/btStridingMeshInterface.h"
class btStridingMeshInterface
{
 protected:

  btVector3 m_scaling;

 public:
  btStridingMeshInterface() :m_scaling(float(1.),float(1.),float(1.))
  {

  }

  virtual ~btStridingMeshInterface();



  virtual void InternalProcessAllTriangles(btInternalTriangleIndexCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const;


  void calculateAabbBruteForce(btVector3& aabbMin,btVector3& aabbMax);






  virtual void getLockedVertexIndexBase(unsigned char **vertexbase, int& numverts,PHY_ScalarType& type, int& stride,unsigned char **indexbase,int & indexstride,int& numfaces,PHY_ScalarType& indicestype,int subpart=0)=0;

  virtual void getLockedReadOnlyVertexIndexBase(const unsigned char **vertexbase, int& numverts,PHY_ScalarType& type, int& stride,const unsigned char **indexbase,int & indexstride,int& numfaces,PHY_ScalarType& indicestype,int subpart=0) const=0;



  virtual void unLockVertexBase(int subpart)=0;

  virtual void unLockReadOnlyVertexBase(int subpart) const=0;




  virtual int getNumSubParts() const=0;

  virtual void preallocateVertices(int numverts)=0;
  virtual void preallocateIndices(int numindices)=0;

  virtual bool hasPremadeAabb() const { return false; }
  virtual void setPremadeAabb(const btVector3& aabbMin, const btVector3& aabbMax ) const
                {
                        () aabbMin;
                        () aabbMax;
                }
  virtual void getPremadeAabb(btVector3* aabbMin, btVector3* aabbMax ) const
        {
            () aabbMin;
            () aabbMax;
        }

  const btVector3& getScaling() const {
   return m_scaling;
  }
  void setScaling(const btVector3& scaling)
  {
   m_scaling = scaling;
  }

  virtual int calculateSerializeBufferSize() const;


  virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};

class btIntIndexData
 { public: 
 int m_value;
};

class btShortIntIndexData
 { public: 
 short m_value;
 char m_pad[2];
};

class btShortIntIndexTripletData
 { public: 
 short m_values[3];
 char m_pad[2];
};

class btCharIndexTripletData
 { public: 
 unsigned char m_values[3];
 char m_pad;
};



class btMeshPartData
 { public: 
 btVector3FloatData *m_vertices3f;
 btVector3DoubleData *m_vertices3d;

 btIntIndexData *m_indices32;
 btShortIntIndexTripletData *m_3indices16;
 btCharIndexTripletData *m_3indices8;

 btShortIntIndexData *m_indices16;

 int m_numTriangles;
 int m_numVertices;
};



class btStridingMeshInterfaceData
 { public: 
 btMeshPartData *m_meshPartsPtr;
 btVector3FloatData m_scaling;
 int m_numMeshParts;
 char m_padding[4];
};




inline int btStridingMeshInterface::calculateSerializeBufferSize() const
{
 return sizeof(btStridingMeshInterfaceData);
}
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h" 2






class btIndexedMesh
 { public: 
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

   int m_numTriangles;
   const unsigned char * m_triangleIndexBase;
   int m_triangleIndexStride;
   int m_numVertices;
   const unsigned char * m_vertexBase;
   int m_vertexStride;



   PHY_ScalarType m_indexType;




   PHY_ScalarType m_vertexType;


   btIndexedMesh()
    :m_indexType(PHY_INTEGER),



      m_vertexType(PHY_FLOAT)

      {
      }
}
;


typedef btAlignedObjectArray<btIndexedMesh> IndexedMeshArray;





class btTriangleIndexVertexArray : public btStridingMeshInterface
{
protected:
 IndexedMeshArray m_indexedMeshes;
 int m_pad[2];
 mutable int m_hasAabb;
 mutable btVector3 m_aabbMin;
 mutable btVector3 m_aabbMax;

public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btTriangleIndexVertexArray() : m_hasAabb(0)
 {
 }

 virtual ~btTriangleIndexVertexArray();


 btTriangleIndexVertexArray(int numTriangles,int* triangleIndexBase,int triangleIndexStride,int numVertices,float* vertexBase,int vertexStride);

 void addIndexedMesh(const btIndexedMesh& mesh, PHY_ScalarType indexType = PHY_INTEGER)
 {
  m_indexedMeshes.push_back(mesh);
  m_indexedMeshes[m_indexedMeshes.size()-1].m_indexType = indexType;
 }


 virtual void getLockedVertexIndexBase(unsigned char **vertexbase, int& numverts,PHY_ScalarType& type, int& vertexStride,unsigned char **indexbase,int & indexstride,int& numfaces,PHY_ScalarType& indicestype,int subpart=0);

 virtual void getLockedReadOnlyVertexIndexBase(const unsigned char **vertexbase, int& numverts,PHY_ScalarType& type, int& vertexStride,const unsigned char **indexbase,int & indexstride,int& numfaces,PHY_ScalarType& indicestype,int subpart=0) const;



 virtual void unLockVertexBase(int subpart) {()subpart;}

 virtual void unLockReadOnlyVertexBase(int subpart) const {()subpart;}



 virtual int getNumSubParts() const {
  return (int)m_indexedMeshes.size();
 }

 IndexedMeshArray& getIndexedMeshArray()
 {
  return m_indexedMeshes;
 }

 const IndexedMeshArray& getIndexedMeshArray() const
 {
  return m_indexedMeshes;
 }

 virtual void preallocateVertices(int numverts){() numverts;}
 virtual void preallocateIndices(int numindices){() numindices;}

 virtual bool hasPremadeAabb() const;
 virtual void setPremadeAabb(const btVector3& aabbMin, const btVector3& aabbMax ) const;
 virtual void getPremadeAabb(btVector3* aabbMin, btVector3* aabbMax ) const;

}
;
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleMesh.h" 2







class btTriangleMesh : public btTriangleIndexVertexArray
{
 btAlignedObjectArray<btVector3> m_4componentVertices;
 btAlignedObjectArray<float> m_3componentVertices;

 btAlignedObjectArray<unsigned int> m_32bitIndices;
 btAlignedObjectArray<unsigned short int> m_16bitIndices;
 bool m_use32bitIndices;
 bool m_use4componentVertices;


 public:
  float m_weldingThreshold;

  btTriangleMesh (bool use32bitIndices=true,bool use4componentVertices=true);

  bool getUse32bitIndices() const
  {
   return m_use32bitIndices;
  }

  bool getUse4componentVertices() const
  {
   return m_use4componentVertices;
  }


  void addTriangle(const btVector3& vertex0,const btVector3& vertex1,const btVector3& vertex2, bool removeDuplicateVertices=false);

  int getNumTriangles() const;

  virtual void preallocateVertices(int numverts){() numverts;}
  virtual void preallocateIndices(int numindices){() numindices;}


  int findOrAddVertex(const btVector3& vertex, bool removeDuplicateVertices);

  void addIndex(int index);

};
# 34 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btConvexTriangleMeshShape.h" 1
# 25 "../../bullet/src/BulletCollision/CollisionShapes/btConvexTriangleMeshShape.h"
class btConvexTriangleMeshShape : public btPolyhedralConvexAabbCachingShape
{

 class btStridingMeshInterface* m_stridingMesh;

public:
 btConvexTriangleMeshShape(btStridingMeshInterface* meshInterface, bool calcAabb = true);

 class btStridingMeshInterface* getMeshInterface()
 {
  return m_stridingMesh;
 }
 const class btStridingMeshInterface* getMeshInterface() const
 {
  return m_stridingMesh;
 }

 virtual btVector3 localGetSupportingVertex(const btVector3& vec)const;
 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;
 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;


 virtual const char* getName()const {return "ConvexTrimesh";}

 virtual int getNumVertices() const;
 virtual int getNumEdges() const;
 virtual void getEdge(int i,btVector3& pa,btVector3& pb) const;
 virtual void getVertex(int i,btVector3& vtx) const;
 virtual int getNumPlanes() const;
 virtual void getPlane(btVector3& planeNormal,btVector3& planeSupport,int i ) const;
 virtual bool isInside(const btVector3& pt,float tolerance) const;


 virtual void setLocalScaling(const btVector3& scaling);
 virtual const btVector3& getLocalScaling() const;






 void calculatePrincipalAxisTransform(btTransform& principal, btVector3& inertia, float& volume) const;

};
# 35 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h"
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleMeshShape.h" 1
# 24 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleMeshShape.h"
class btTriangleMeshShape : public btConcaveShape
{
protected:
 btVector3 m_localAabbMin;
 btVector3 m_localAabbMax;
 btStridingMeshInterface* m_meshInterface;



 btTriangleMeshShape(btStridingMeshInterface* meshInterface);

public:

 virtual ~btTriangleMeshShape();

 virtual btVector3 localGetSupportingVertex(const btVector3& vec) const;

 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const
 {
  ;
  return localGetSupportingVertex(vec);
 }

 void recalcLocalAabb();

 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 virtual void processAllTriangles(btTriangleCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const;

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void setLocalScaling(const btVector3& scaling);
 virtual const btVector3& getLocalScaling() const;

 btStridingMeshInterface* getMeshInterface()
 {
  return m_meshInterface;
 }

 const btStridingMeshInterface* getMeshInterface() const
 {
  return m_meshInterface;
 }

 const btVector3& getLocalAabbMin() const
 {
  return m_localAabbMin;
 }
 const btVector3& getLocalAabbMax() const
 {
  return m_localAabbMax;
 }




 virtual const char* getName()const {return "TRIANGLEMESH";}



};
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btOptimizedBvh.h" 1
# 21 "../../bullet/src/BulletCollision/CollisionShapes/btOptimizedBvh.h"
# 1 "../src/BulletCollision/BroadphaseCollision/btQuantizedBvh.h" 1
# 19 "../src/BulletCollision/BroadphaseCollision/btQuantizedBvh.h"
class btSerializer;
# 58 "../src/BulletCollision/BroadphaseCollision/btQuantizedBvh.h"
class btQuantizedBvhNode
 { public: 
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };


 unsigned short int m_quantizedAabbMin[3];
 unsigned short int m_quantizedAabbMax[3];

 int m_escapeIndexOrTriangleIndex;

 bool isLeafNode() const
 {

  return (m_escapeIndexOrTriangleIndex >= 0);
 }
 int getEscapeIndex() const
 {
  ;
  return -m_escapeIndexOrTriangleIndex;
 }
 int getTriangleIndex() const
 {
  ;

  return (m_escapeIndexOrTriangleIndex&~((~0)<<(31-10)));
 }
 int getPartId() const
 {
  ;

  return (m_escapeIndexOrTriangleIndex>>(31-10));
 }
}
;



class btOptimizedBvhNode
 { public: 
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };


 btVector3 m_aabbMinOrg;
 btVector3 m_aabbMaxOrg;


 int m_escapeIndex;



 int m_subPart;
 int m_triangleIndex;
 int m_padding[5];


};



class btBvhSubtreeInfo
{
public:
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };


 unsigned short int m_quantizedAabbMin[3];
 unsigned short int m_quantizedAabbMax[3];

 int m_rootNodeIndex;

 int m_subtreeSize;
 int m_padding[3];

 btBvhSubtreeInfo()
 {

 }


 void setAabbFromQuantizeNode(const btQuantizedBvhNode& quantizedNode)
 {
  m_quantizedAabbMin[0] = quantizedNode.m_quantizedAabbMin[0];
  m_quantizedAabbMin[1] = quantizedNode.m_quantizedAabbMin[1];
  m_quantizedAabbMin[2] = quantizedNode.m_quantizedAabbMin[2];
  m_quantizedAabbMax[0] = quantizedNode.m_quantizedAabbMax[0];
  m_quantizedAabbMax[1] = quantizedNode.m_quantizedAabbMax[1];
  m_quantizedAabbMax[2] = quantizedNode.m_quantizedAabbMax[2];
 }
}
;


class btNodeOverlapCallback
{
public:
 virtual ~btNodeOverlapCallback() {};

 virtual void processNode(int subPart, int triangleIndex) = 0;
};







typedef btAlignedObjectArray<btOptimizedBvhNode> NodeArray;
typedef btAlignedObjectArray<btQuantizedBvhNode> QuantizedNodeArray;
typedef btAlignedObjectArray<btBvhSubtreeInfo> BvhSubtreeInfoArray;





class btQuantizedBvh
{
public:
 enum btQuantizedBvh::btTraversalMode
 {
  TRAVERSAL_STACKLESS = 0,
  TRAVERSAL_STACKLESS_CACHE_FRIENDLY,
  TRAVERSAL_RECURSIVE
 };

protected:


 btVector3 m_bvhAabbMin;
 btVector3 m_bvhAabbMax;
 btVector3 m_bvhQuantization;

 int m_bulletVersion;

 int m_curNodeIndex;

 bool m_useQuantization;



 NodeArray m_leafNodes;
 NodeArray m_contiguousNodes;
 QuantizedNodeArray m_quantizedLeafNodes;
 QuantizedNodeArray m_quantizedContiguousNodes;

 btQuantizedBvh::btTraversalMode m_traversalMode;
 BvhSubtreeInfoArray m_SubtreeHeaders;


 mutable int m_subtreeHeaderCount;







 void setInternalNodeAabbMin(int nodeIndex, const btVector3& aabbMin)
 {
  if (m_useQuantization)
  {
   quantize(&m_quantizedContiguousNodes[nodeIndex].m_quantizedAabbMin[0] ,aabbMin,0);
  } else
  {
   m_contiguousNodes[nodeIndex].m_aabbMinOrg = aabbMin;

  }
 }
 void setInternalNodeAabbMax(int nodeIndex,const btVector3& aabbMax)
 {
  if (m_useQuantization)
  {
   quantize(&m_quantizedContiguousNodes[nodeIndex].m_quantizedAabbMax[0],aabbMax,1);
  } else
  {
   m_contiguousNodes[nodeIndex].m_aabbMaxOrg = aabbMax;
  }
 }

 btVector3 getAabbMin(int nodeIndex) const
 {
  if (m_useQuantization)
  {
   return unQuantize(&m_quantizedLeafNodes[nodeIndex].m_quantizedAabbMin[0]);
  }

  return m_leafNodes[nodeIndex].m_aabbMinOrg;

 }
 btVector3 getAabbMax(int nodeIndex) const
 {
  if (m_useQuantization)
  {
   return unQuantize(&m_quantizedLeafNodes[nodeIndex].m_quantizedAabbMax[0]);
  }

  return m_leafNodes[nodeIndex].m_aabbMaxOrg;

 }


 void setInternalNodeEscapeIndex(int nodeIndex, int escapeIndex)
 {
  if (m_useQuantization)
  {
   m_quantizedContiguousNodes[nodeIndex].m_escapeIndexOrTriangleIndex = -escapeIndex;
  }
  else
  {
   m_contiguousNodes[nodeIndex].m_escapeIndex = escapeIndex;
  }

 }

 void mergeInternalNodeAabb(int nodeIndex,const btVector3& newAabbMin,const btVector3& newAabbMax)
 {
  if (m_useQuantization)
  {
   unsigned short int quantizedAabbMin[3];
   unsigned short int quantizedAabbMax[3];
   quantize(quantizedAabbMin,newAabbMin,0);
   quantize(quantizedAabbMax,newAabbMax,1);
   for (int i=0;i<3;i++)
   {
    if (m_quantizedContiguousNodes[nodeIndex].m_quantizedAabbMin[i] > quantizedAabbMin[i])
     m_quantizedContiguousNodes[nodeIndex].m_quantizedAabbMin[i] = quantizedAabbMin[i];

    if (m_quantizedContiguousNodes[nodeIndex].m_quantizedAabbMax[i] < quantizedAabbMax[i])
     m_quantizedContiguousNodes[nodeIndex].m_quantizedAabbMax[i] = quantizedAabbMax[i];

   }
  } else
  {

   m_contiguousNodes[nodeIndex].m_aabbMinOrg.setMin(newAabbMin);
   m_contiguousNodes[nodeIndex].m_aabbMaxOrg.setMax(newAabbMax);
  }
 }

 void swapLeafNodes(int firstIndex,int secondIndex);

 void assignInternalNodeFromLeafNode(int internalNode,int leafNodeIndex);

protected:



 void buildTree (int startIndex,int endIndex);

 int calcSplittingAxis(int startIndex,int endIndex);

 int sortAndCalcSplittingIndex(int startIndex,int endIndex,int splitAxis);

 void walkStacklessTree(btNodeOverlapCallback* nodeCallback,const btVector3& aabbMin,const btVector3& aabbMax) const;

 void walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback* nodeCallback, const btVector3& raySource, const btVector3& rayTarget, const btVector3& aabbMin, const btVector3& aabbMax, int startNodeIndex,int endNodeIndex) const;
 void walkStacklessQuantizedTree(btNodeOverlapCallback* nodeCallback,unsigned short int* quantizedQueryAabbMin,unsigned short int* quantizedQueryAabbMax,int startNodeIndex,int endNodeIndex) const;
 void walkStacklessTreeAgainstRay(btNodeOverlapCallback* nodeCallback, const btVector3& raySource, const btVector3& rayTarget, const btVector3& aabbMin, const btVector3& aabbMax, int startNodeIndex,int endNodeIndex) const;


 void walkStacklessQuantizedTreeCacheFriendly(btNodeOverlapCallback* nodeCallback,unsigned short int* quantizedQueryAabbMin,unsigned short int* quantizedQueryAabbMax) const;


 void walkRecursiveQuantizedTreeAgainstQueryAabb(const btQuantizedBvhNode* currentNode,btNodeOverlapCallback* nodeCallback,unsigned short int* quantizedQueryAabbMin,unsigned short int* quantizedQueryAabbMax) const;


 void walkRecursiveQuantizedTreeAgainstQuantizedTree(const btQuantizedBvhNode* treeNodeA,const btQuantizedBvhNode* treeNodeB,btNodeOverlapCallback* nodeCallback) const;




 void updateSubtreeHeaders(int leftChildNodexIndex,int rightChildNodexIndex);

public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btQuantizedBvh();

 virtual ~btQuantizedBvh();



 void setQuantizationValues(const btVector3& bvhAabbMin,const btVector3& bvhAabbMax,float quantizationMargin=float(1.0));
 QuantizedNodeArray& getLeafNodeArray() { return m_quantizedLeafNodes; }

 void buildInternal();


 void reportAabbOverlappingNodex(btNodeOverlapCallback* nodeCallback,const btVector3& aabbMin,const btVector3& aabbMax) const;
 void reportRayOverlappingNodex (btNodeOverlapCallback* nodeCallback, const btVector3& raySource, const btVector3& rayTarget) const;
 void reportBoxCastOverlappingNodex(btNodeOverlapCallback* nodeCallback, const btVector3& raySource, const btVector3& rayTarget, const btVector3& aabbMin,const btVector3& aabbMax) const;

  inline void quantize(unsigned short* out, const btVector3& point,int isMax) const
 {

  ;

  ;
  ;
  ;

  ;
  ;
  ;

  btVector3 v = (point - m_bvhAabbMin) * m_bvhQuantization;



  if (isMax)
  {
   out[0] = (unsigned short) (((unsigned short)(v.getX()+float(1.)) | 1));
   out[1] = (unsigned short) (((unsigned short)(v.getY()+float(1.)) | 1));
   out[2] = (unsigned short) (((unsigned short)(v.getZ()+float(1.)) | 1));
  } else
  {
   out[0] = (unsigned short) (((unsigned short)(v.getX()) & 0xfffe));
   out[1] = (unsigned short) (((unsigned short)(v.getY()) & 0xfffe));
   out[2] = (unsigned short) (((unsigned short)(v.getZ()) & 0xfffe));
  }
# 414 "../src/BulletCollision/BroadphaseCollision/btQuantizedBvh.h"
 }


 inline void quantizeWithClamp(unsigned short* out, const btVector3& point2,int isMax) const
 {

  ;

  btVector3 clampedPoint(point2);
  clampedPoint.setMax(m_bvhAabbMin);
  clampedPoint.setMin(m_bvhAabbMax);

  quantize(out,clampedPoint,isMax);

 }

 inline btVector3 unQuantize(const unsigned short* vecIn) const
 {
   btVector3 vecOut;
   vecOut.setValue(
   (float)(vecIn[0]) / (m_bvhQuantization.getX()),
   (float)(vecIn[1]) / (m_bvhQuantization.getY()),
   (float)(vecIn[2]) / (m_bvhQuantization.getZ()));
   vecOut += m_bvhAabbMin;
   return vecOut;
 }


 void setTraversalMode(btQuantizedBvh::btTraversalMode traversalMode)
 {
  m_traversalMode = traversalMode;
 }


 inline QuantizedNodeArray& getQuantizedNodeArray()
 {
  return m_quantizedContiguousNodes;
 }


 inline BvhSubtreeInfoArray& getSubtreeInfoArray()
 {
  return m_SubtreeHeaders;
 }




 unsigned calculateSerializeBufferSize() const;


 virtual bool serialize(void *o_alignedDataBuffer, unsigned i_dataBufferSize, bool i_swapEndian) const;


 static btQuantizedBvh *deSerializeInPlace(void *i_alignedDataBuffer, unsigned int i_dataBufferSize, bool i_swapEndian);

 static unsigned int getAlignmentSerializationPadding();



 virtual int calculateSerializeBufferSizeNew() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

 virtual void deSerializeFloat(struct btQuantizedBvhFloatData& quantizedBvhFloatData);

 virtual void deSerializeDouble(struct btQuantizedBvhDoubleData& quantizedBvhDoubleData);




 inline bool isQuantized()
 {
  return m_useQuantization;
 }

private:



 btQuantizedBvh(btQuantizedBvh &other, bool ownsMemory);

}
;


class btBvhSubtreeInfoData
 { public: 
 int m_rootNodeIndex;
 int m_subtreeSize;
 unsigned short m_quantizedAabbMin[3];
 unsigned short m_quantizedAabbMax[3];
};

class btOptimizedBvhNodeFloatData
 { public: 
 btVector3FloatData m_aabbMinOrg;
 btVector3FloatData m_aabbMaxOrg;
 int m_escapeIndex;
 int m_subPart;
 int m_triangleIndex;
 char m_pad[4];
};

class btOptimizedBvhNodeDoubleData
 { public: 
 btVector3DoubleData m_aabbMinOrg;
 btVector3DoubleData m_aabbMaxOrg;
 int m_escapeIndex;
 int m_subPart;
 int m_triangleIndex;
 char m_pad[4];
};


class btQuantizedBvhNodeData
 { public: 
 unsigned short m_quantizedAabbMin[3];
 unsigned short m_quantizedAabbMax[3];
 int m_escapeIndexOrTriangleIndex;
};

class btQuantizedBvhFloatData
 { public: 
 btVector3FloatData m_bvhAabbMin;
 btVector3FloatData m_bvhAabbMax;
 btVector3FloatData m_bvhQuantization;
 int m_curNodeIndex;
 int m_useQuantization;
 int m_numContiguousLeafNodes;
 int m_numQuantizedContiguousNodes;
 btOptimizedBvhNodeFloatData *m_contiguousNodesPtr;
 btQuantizedBvhNodeData *m_quantizedContiguousNodesPtr;
 btBvhSubtreeInfoData *m_subTreeInfoPtr;
 int m_traversalMode;
 int m_numSubtreeHeaders;

};

class btQuantizedBvhDoubleData
 { public: 
 btVector3DoubleData m_bvhAabbMin;
 btVector3DoubleData m_bvhAabbMax;
 btVector3DoubleData m_bvhQuantization;
 int m_curNodeIndex;
 int m_useQuantization;
 int m_numContiguousLeafNodes;
 int m_numQuantizedContiguousNodes;
 btOptimizedBvhNodeDoubleData *m_contiguousNodesPtr;
 btQuantizedBvhNodeData *m_quantizedContiguousNodesPtr;

 int m_traversalMode;
 int m_numSubtreeHeaders;
 btBvhSubtreeInfoData *m_subTreeInfoPtr;
};


inline int btQuantizedBvh::calculateSerializeBufferSizeNew() const
{
 return sizeof(btQuantizedBvhFloatData);
}
# 22 "../../bullet/src/BulletCollision/CollisionShapes/btOptimizedBvh.h" 2

class btStridingMeshInterface;



class btOptimizedBvh : public btQuantizedBvh
{

public:
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

protected:

public:

 btOptimizedBvh();

 virtual ~btOptimizedBvh();

 void build(btStridingMeshInterface* triangles,bool useQuantizedAabbCompression, const btVector3& bvhAabbMin, const btVector3& bvhAabbMax);

 void refit(btStridingMeshInterface* triangles,const btVector3& aabbMin,const btVector3& aabbMax);

 void refitPartial(btStridingMeshInterface* triangles,const btVector3& aabbMin, const btVector3& aabbMax);

 void updateBvhNodes(btStridingMeshInterface* meshInterface,int firstNode,int endNode,int index);


 virtual bool serializeInPlace(void *o_alignedDataBuffer, unsigned i_dataBufferSize, bool i_swapEndian) const
 {
  return btQuantizedBvh::serialize(o_alignedDataBuffer,i_dataBufferSize,i_swapEndian);

 }


 static btOptimizedBvh *deSerializeInPlace(void *i_alignedDataBuffer, unsigned int i_dataBufferSize, bool i_swapEndian);


};
# 21 "../../bullet/src/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h" 2

# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleInfoMap.h" 1
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleInfoMap.h"
# 1 "../src/LinearMath/btHashMap.h" 1
# 20 "../src/LinearMath/btHashMap.h"
# 1 "../src/LinearMath/btAlignedObjectArray.h" 1
# 21 "../src/LinearMath/btHashMap.h" 2


class btHashString
 { public: 
 const char* m_string;
 unsigned int m_hash;

 inline unsigned int getHash()const
 {
  return m_hash;
 }

 btHashString(const char* name)
  :m_string(name)
 {

  static const unsigned int InitialFNV = 2166136261u;
  static const unsigned int FNVMultiple = 16777619u;


  unsigned int hash = InitialFNV;

  for(int i = 0; m_string[i]; i++)
  {
   hash = hash ^ (m_string[i]);
   hash = hash * FNVMultiple;
  }
  m_hash = hash;
 }

 int portableStringCompare(const char* src, const char* dst) const
 {
   int ret = 0 ;

   while( ! (ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)
     ++src, ++dst;

   if ( ret < 0 )
     ret = -1 ;
   else if ( ret > 0 )
     ret = 1 ;

   return( ret );
 }

 bool equals(const btHashString& other) const
 {
  return (m_string == other.m_string) ||
   (0==portableStringCompare(m_string,other.m_string));

 }

};

const int BT_HASH_NULL=0xffffffff;


class btHashInt
{
 int m_uid;
public:
 btHashInt(int uid) :m_uid(uid)
 {
 }

 int getUid1() const
 {
  return m_uid;
 }

 void setUid1(int uid)
 {
  m_uid = uid;
 }

 bool equals(const btHashInt& other) const
 {
  return getUid1() == other.getUid1();
 }

 inline unsigned int getHash()const
 {
  int key = m_uid;

  key += ~(key << 15); key ^= (key >> 10); key += (key << 3); key ^= (key >> 6); key += ~(key << 11); key ^= (key >> 16);
  return key;
 }
};



class btHashPtr
{

 union
 {
  const void* m_pointer;
  int m_hashValues[2];
 };

public:

 btHashPtr(const void* ptr)
  :m_pointer(ptr)
 {
 }

 const void* getPointer() const
 {
  return m_pointer;
 }

 bool equals(const btHashPtr& other) const
 {
  return getPointer() == other.getPointer();
 }


 inline unsigned int getHash()const
 {
  const bool VOID_IS_8 = ((sizeof(void*)==8));

  int key = VOID_IS_8? m_hashValues[0]+m_hashValues[1] : m_hashValues[0];


  key += ~(key << 15); key ^= (key >> 10); key += (key << 3); key ^= (key >> 6); key += ~(key << 11); key ^= (key >> 16);
  return key;
 }


};


template <class Value>
class btHashKeyPtr
{
        int m_uid;
public:

        btHashKeyPtr(int uid) :m_uid(uid)
        {
        }

        int getUid1() const
        {
                return m_uid;
        }

        bool equals(const btHashKeyPtr<Value>& other) const
        {
                return getUid1() == other.getUid1();
        }


        inline unsigned int getHash()const
        {
                int key = m_uid;

                key += ~(key << 15); key ^= (key >> 10); key += (key << 3); key ^= (key >> 6); key += ~(key << 11); key ^= (key >> 16);
                return key;
        }


};


template <class Value>
class btHashKey
{
 int m_uid;
public:

 btHashKey(int uid) :m_uid(uid)
 {
 }

 int getUid1() const
 {
  return m_uid;
 }

 bool equals(const btHashKey<Value>& other) const
 {
  return getUid1() == other.getUid1();
 }

 inline unsigned int getHash()const
 {
  int key = m_uid;

  key += ~(key << 15); key ^= (key >> 10); key += (key << 3); key ^= (key >> 6); key += ~(key << 11); key ^= (key >> 16);
  return key;
 }
};




template <class Key, class Value>
class btHashMap
{

protected:
 btAlignedObjectArray<int> m_hashTable;
 btAlignedObjectArray<int> m_next;

 btAlignedObjectArray<Value> m_valueArray;
 btAlignedObjectArray<Key> m_keyArray;

 void growTables(const Key& )
 {
  int newCapacity = m_valueArray.capacity();

  if (m_hashTable.size() < newCapacity)
  {

   int curHashtableSize = m_hashTable.size();

   m_hashTable.resize(newCapacity);
   m_next.resize(newCapacity);

   int i;

   for (i= 0; i < newCapacity; ++i)
   {
    m_hashTable[i] = BT_HASH_NULL;
   }
   for (i = 0; i < newCapacity; ++i)
   {
    m_next[i] = BT_HASH_NULL;
   }

   for(i=0;i<curHashtableSize;i++)
   {



    int hashValue = m_keyArray[i].getHash() & (m_valueArray.capacity()-1);
    m_next[i] = m_hashTable[hashValue];
    m_hashTable[hashValue] = i;
   }


  }
 }

 public:

 void insert(const Key& key, const Value& value) {
  int hash = key.getHash() & (m_valueArray.capacity()-1);


  int index = findIndex(key);
  if (index != BT_HASH_NULL)
  {
   m_valueArray[index]=value;
   return;
  }

  int count = m_valueArray.size();
  int oldCapacity = m_valueArray.capacity();
  m_valueArray.push_back(value);
  m_keyArray.push_back(key);

  int newCapacity = m_valueArray.capacity();
  if (oldCapacity < newCapacity)
  {
   growTables(key);

   hash = key.getHash() & (m_valueArray.capacity()-1);
  }
  m_next[count] = m_hashTable[hash];
  m_hashTable[hash] = count;
 }

 void remove(const Key& key) {

  int hash = key.getHash() & (m_valueArray.capacity()-1);

  int pairIndex = findIndex(key);

  if (pairIndex ==BT_HASH_NULL)
  {
   return;
  }


  int index = m_hashTable[hash];
  ;

  int previous = BT_HASH_NULL;
  while (index != pairIndex)
  {
   previous = index;
   index = m_next[index];
  }

  if (previous != BT_HASH_NULL)
  {
   ;
   m_next[previous] = m_next[pairIndex];
  }
  else
  {
   m_hashTable[hash] = m_next[pairIndex];
  }





  int lastPairIndex = m_valueArray.size() - 1;


  if (lastPairIndex == pairIndex)
  {
   m_valueArray.pop_back();
   m_keyArray.pop_back();
   return;
  }


  int lastHash = m_keyArray[lastPairIndex].getHash() & (m_valueArray.capacity()-1);

  index = m_hashTable[lastHash];
  ;

  previous = BT_HASH_NULL;
  while (index != lastPairIndex)
  {
   previous = index;
   index = m_next[index];
  }

  if (previous != BT_HASH_NULL)
  {
   ;
   m_next[previous] = m_next[lastPairIndex];
  }
  else
  {
   m_hashTable[lastHash] = m_next[lastPairIndex];
  }


  m_valueArray[pairIndex] = m_valueArray[lastPairIndex];
  m_keyArray[pairIndex] = m_keyArray[lastPairIndex];


  m_next[pairIndex] = m_hashTable[lastHash];
  m_hashTable[lastHash] = pairIndex;

  m_valueArray.pop_back();
  m_keyArray.pop_back();

 }


 int size() const
 {
  return m_valueArray.size();
 }

 const Value* getAtIndex(int index) const
 {
  ;

  return &m_valueArray[index];
 }

 Value* getAtIndex(int index)
 {
  ;

  return &m_valueArray[index];
 }

 Value* operator[](const Key& key) {
  return find(key);
 }

 const Value* find(const Key& key) const
 {
  int index = findIndex(key);
  if (index == BT_HASH_NULL)
  {
   return __null;
  }
  return &m_valueArray[index];
 }

 Value* find(const Key& key)
 {
  int index = findIndex(key);
  if (index == BT_HASH_NULL)
  {
   return __null;
  }
  return &m_valueArray[index];
 }


 int findIndex(const Key& key) const
 {
  unsigned int hash = key.getHash() & (m_valueArray.capacity()-1);

  if (hash >= (unsigned int)m_hashTable.size())
  {
   return BT_HASH_NULL;
  }

  int index = m_hashTable[hash];
  while ((index != BT_HASH_NULL) && key.equals(m_keyArray[index]) == false)
  {
   index = m_next[index];
  }
  return index;
 }

 void clear()
 {
  m_hashTable.clear();
  m_next.clear();
  m_valueArray.clear();
  m_keyArray.clear();
 }

};
# 21 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleInfoMap.h" 2
# 1 "../src/LinearMath/btSerializer.h" 1
# 20 "../src/LinearMath/btSerializer.h"
# 1 "../src/LinearMath/btStackAlloc.h" 1
# 27 "../src/LinearMath/btStackAlloc.h"
class btBlock
 { public: 
 btBlock* previous;
 unsigned char* address;
};


class btStackAlloc
{
public:

 btStackAlloc(unsigned int size) { ctor();create(size); }
 ~btStackAlloc() { destroy(); }

 inline void create(unsigned int size)
 {
  destroy();
  data = (unsigned char*) btAlignedAllocInternal(size,16);
  totalsize = size;
 }
 inline void destroy()
 {
  ;


  if(usedsize==0)
  {
   if(!ischild && data)
    btAlignedFreeInternal(data);

   data = 0;
   usedsize = 0;
  }

 }

 int getAvailableMemory() const
 {
  return static_cast<int>(totalsize - usedsize);
 }

 unsigned char* allocate(unsigned int size)
 {
  const unsigned int nus(usedsize+size);
  if(nus<totalsize)
  {
   usedsize=nus;
   return(data+(usedsize-size));
  }
  ;


  return(0);
 }
 inline btBlock* beginBlock()
 {
  btBlock* pb = (btBlock*)allocate(sizeof(btBlock));
  pb->previous = current;
  pb->address = data+usedsize;
  current = pb;
  return(pb);
 }
 inline void endBlock(btBlock* block)
 {
  ;

  if(block==current)
  {
   current = block->previous;
   usedsize = (unsigned int)((block->address-data)-sizeof(btBlock));
  }
 }

private:
 void ctor()
 {
  data = 0;
  totalsize = 0;
  usedsize = 0;
  current = 0;
  ischild = false;
 }
 unsigned char* data;
 unsigned int totalsize;
 unsigned int usedsize;
 btBlock* current;
 bool ischild;
};
# 21 "../src/LinearMath/btSerializer.h" 2
# 1 "../src/LinearMath/btHashMap.h" 1
# 22 "../src/LinearMath/btSerializer.h" 2


# 1 "/usr/include/memory.h" 1 3 4
# 29 "/usr/include/memory.h" 3 4
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 90 "/usr/include/string.h" 3 4
}










extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 230 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 257 "/usr/include/string.h" 3 4
}










extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 309 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 336 "/usr/include/string.h" 3 4
}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 378 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 434 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 483 "/usr/include/string.h" 3 4
}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 511 "/usr/include/string.h" 3 4
}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 642 "/usr/include/string.h" 3 4
}
# 30 "/usr/include/memory.h" 2 3 4
# 25 "../src/LinearMath/btSerializer.h" 2






extern unsigned char sBulletDNAstr[];
extern int sBulletDNAlen;
extern unsigned char sBulletDNAstr64[];
extern int sBulletDNAlen64;

inline int btStrLen(const char* str)
{
    if (!str)
  return(0);
 int len = 0;

 while (*str != 0)
 {
        str++;
        len++;
    }

    return len;
}


class btChunk
{
public:
 int m_chunkCode;
 int m_length;
 void *m_oldPtr;
 int m_dna_nr;
 int m_number;
};

enum btSerializationFlags
{
 BT_SERIALIZE_NO_BVH = 1,
 BT_SERIALIZE_NO_TRIANGLEINFOMAP = 2,
 BT_SERIALIZE_NO_DUPLICATE_ASSERT = 4
};

class btSerializer
{

public:

 virtual ~btSerializer() {}

 virtual const unsigned char* getBufferPointer() const = 0;

 virtual int getCurrentBufferSize() const = 0;

 virtual btChunk* allocate(size_t size, int numElements) = 0;

 virtual void finalizeChunk(btChunk* chunk, const char* structType, int chunkCode,void* oldPtr)= 0;

 virtual void* findPointer(void* oldPtr) = 0;

 virtual void* getUniquePointer(void*oldPtr) = 0;

 virtual void startSerialization() = 0;

 virtual void finishSerialization() = 0;

 virtual const char* findNameForPointer(const void* ptr) const = 0;

 virtual void registerNameForPointer(const void* ptr, const char* name) = 0;

 virtual void serializeName(const char* ptr) = 0;

 virtual int getSerializationFlags() const = 0;

 virtual void setSerializationFlags(int flags) = 0;


};
# 128 "../src/LinearMath/btSerializer.h"
class btPointerUid
 { public: 
 union
 {
  void* m_ptr;
  int m_uniqueIds[2];
 };
};



class btDefaultSerializer : public btSerializer
{


 btAlignedObjectArray<char*> mTypes;
 btAlignedObjectArray<short*> mStructs;
 btAlignedObjectArray<short> mTlens;
 btHashMap<btHashInt, int> mStructReverse;
 btHashMap<btHashString,int> mTypeLookup;


 btHashMap<btHashPtr,void*> m_chunkP;

 btHashMap<btHashPtr,const char*> m_nameMap;

 btHashMap<btHashPtr,btPointerUid> m_uniquePointers;
 int m_uniqueIdGenerator;

 int m_totalSize;
 unsigned char* m_buffer;
 int m_currentSize;
 void* m_dna;
 int m_dnaLength;

 int m_serializationFlags;


 btAlignedObjectArray<btChunk*> m_chunkPtrs;

protected:

 virtual void* findPointer(void* oldPtr)
 {
  void** ptr = m_chunkP.find(oldPtr);
  if (ptr && *ptr)
   return *ptr;
  return 0;
 }





  void writeDNA()
  {
   btChunk* dnaChunk = allocate(m_dnaLength,1);
   memcpy(dnaChunk->m_oldPtr,m_dna,m_dnaLength);
   finalizeChunk(dnaChunk,"DNA1",( (int)('1')<<24 | (int)('A')<<16 | ('N')<<8 | ('D') ), m_dna);
  }

  int getReverseType(const char *type) const
  {

   btHashString key(type);
   const int* valuePtr = mTypeLookup.find(key);
   if (valuePtr)
    return *valuePtr;

   return -1;
  }

  void initDNA(const char* bdnaOrg,int dnalen)
  {

   if (m_dna)
    return;

   int littleEndian= 1;
   littleEndian= ((char*)&littleEndian)[0];


   m_dna = btAlignedAllocInternal(dnalen,16);
   memcpy(m_dna,bdnaOrg,dnalen);
   m_dnaLength = dnalen;

   int *intPtr=0;
   short *shtPtr=0;
   char *cp = 0;int dataLen =0;long nr=0;
   intPtr = (int*)m_dna;
# 227 "../src/LinearMath/btSerializer.h"
   if (strncmp((const char*)m_dna, "SDNA", 4)==0)
   {

    intPtr++; intPtr++;
   }


   if (!littleEndian)
    *intPtr = btSwapEndian(*intPtr);

   dataLen = *intPtr;

   intPtr++;

   cp = (char*)intPtr;
   int i;
   for ( i=0; i<dataLen; i++)
   {

    while (*cp)cp++;
    cp++;
   }
   {
    nr= (long)cp;

    nr= ((nr+3)&~3)-nr;
    while (nr--)
    {
     cp++;
    }
   }
# 266 "../src/LinearMath/btSerializer.h"
   intPtr = (int*)cp;
   ((strncmp(cp, "TYPE", 4)==0) ? static_cast<void> (0) : __assert_fail ("strncmp(cp, \"TYPE\", 4)==0", "../src/LinearMath/btSerializer.h", 267, __PRETTY_FUNCTION__)); intPtr++;

   if (!littleEndian)
    *intPtr = btSwapEndian(*intPtr);

   dataLen = *intPtr;
   intPtr++;


   cp = (char*)intPtr;
   for (i=0; i<dataLen; i++)
   {
    mTypes.push_back(cp);
    while (*cp)cp++;
    cp++;
   }

  {
    nr= (long)cp;

    nr= ((nr+3)&~3)-nr;
    while (nr--)
    {
     cp++;
    }
   }
# 302 "../src/LinearMath/btSerializer.h"
   intPtr = (int*)cp;
   ((strncmp(cp, "TLEN", 4)==0) ? static_cast<void> (0) : __assert_fail ("strncmp(cp, \"TLEN\", 4)==0", "../src/LinearMath/btSerializer.h", 303, __PRETTY_FUNCTION__)); intPtr++;

   dataLen = (int)mTypes.size();

   shtPtr = (short*)intPtr;
   for (i=0; i<dataLen; i++, shtPtr++)
   {
    if (!littleEndian)
     shtPtr[0] = btSwapEndian(shtPtr[0]);
    mTlens.push_back(shtPtr[0]);
   }

   if (dataLen & 1) shtPtr++;
# 328 "../src/LinearMath/btSerializer.h"
   intPtr = (int*)shtPtr;
   cp = (char*)intPtr;
   ((strncmp(cp, "STRC", 4)==0) ? static_cast<void> (0) : __assert_fail ("strncmp(cp, \"STRC\", 4)==0", "../src/LinearMath/btSerializer.h", 330, __PRETTY_FUNCTION__)); intPtr++;

   if (!littleEndian)
    *intPtr = btSwapEndian(*intPtr);
   dataLen = *intPtr ;
   intPtr++;


   shtPtr = (short*)intPtr;
   for (i=0; i<dataLen; i++)
   {
    mStructs.push_back (shtPtr);

    if (!littleEndian)
    {
     shtPtr[0]= btSwapEndian(shtPtr[0]);
     shtPtr[1]= btSwapEndian(shtPtr[1]);

     int len = shtPtr[1];
     shtPtr+= 2;

     for (int a=0; a<len; a++, shtPtr+=2)
     {
       shtPtr[0]= btSwapEndian(shtPtr[0]);
       shtPtr[1]= btSwapEndian(shtPtr[1]);
     }

    } else
    {
     shtPtr+= (2*shtPtr[1])+2;
    }
   }


   for (i=0; i<(int)mStructs.size(); i++)
   {
    short *strc = mStructs.at(i);
    mStructReverse.insert(strc[0], i);
    mTypeLookup.insert(btHashString(mTypes[strc[0]]),i);
   }
  }

public:




  btDefaultSerializer(int totalSize=0)
   :m_totalSize(totalSize),
   m_currentSize(0),
   m_dna(0),
   m_dnaLength(0),
   m_serializationFlags(0)
  {
   m_buffer = m_totalSize?(unsigned char*)btAlignedAllocInternal(totalSize,16):0;

   const bool VOID_IS_8 = ((sizeof(void*)==8));
# 406 "../src/LinearMath/btSerializer.h"
   if (VOID_IS_8)
   {
    initDNA((const char*)sBulletDNAstr64,sBulletDNAlen64);
   } else
   {
    initDNA((const char*)sBulletDNAstr,sBulletDNAlen);
   }


  }

  virtual ~btDefaultSerializer()
  {
   if (m_buffer)
    btAlignedFreeInternal(m_buffer);
   if (m_dna)
    btAlignedFreeInternal(m_dna);
  }

  void writeHeader(unsigned char* buffer) const
  {





   memcpy(buffer, "BULLETf", 7);


   int littleEndian= 1;
   littleEndian= ((char*)&littleEndian)[0];

   if (sizeof(void*)==8)
   {
    buffer[7] = '-';
   } else
   {
    buffer[7] = '_';
   }

   if (littleEndian)
   {
    buffer[8]='v';
   } else
   {
    buffer[8]='V';
   }


   buffer[9] = '2';
   buffer[10] = '7';
   buffer[11] = '8';

  }

  virtual void startSerialization()
  {
   m_uniqueIdGenerator= 1;
   if (m_totalSize)
   {
    unsigned char* buffer = internalAlloc(12);
    writeHeader(buffer);
   }

  }

  virtual void finishSerialization()
  {
   writeDNA();


   int mysize = 0;
   if (!m_totalSize)
   {
    if (m_buffer)
     btAlignedFreeInternal(m_buffer);

    m_currentSize += 12;
    m_buffer = (unsigned char*)btAlignedAllocInternal(m_currentSize,16);

    unsigned char* currentPtr = m_buffer;
    writeHeader(m_buffer);
    currentPtr += 12;
    mysize+=12;
    for (int i=0;i< m_chunkPtrs.size();i++)
    {
     int curLength = sizeof(btChunk)+m_chunkPtrs[i]->m_length;
     memcpy(currentPtr,m_chunkPtrs[i], curLength);
     btAlignedFreeInternal(m_chunkPtrs[i]);
     currentPtr+=curLength;
     mysize+=curLength;
    }
   }

   mTypes.clear();
   mStructs.clear();
   mTlens.clear();
   mStructReverse.clear();
   mTypeLookup.clear();
   m_chunkP.clear();
   m_nameMap.clear();
   m_uniquePointers.clear();
   m_chunkPtrs.clear();
  }

  virtual void* getUniquePointer(void*oldPtr)
  {
   if (!oldPtr)
    return 0;

   btPointerUid* uptr = (btPointerUid*)m_uniquePointers.find(oldPtr);
   if (uptr)
   {
    return uptr->m_ptr;
   }
   m_uniqueIdGenerator++;

   btPointerUid uid;
   uid.m_uniqueIds[0] = m_uniqueIdGenerator;
   uid.m_uniqueIds[1] = m_uniqueIdGenerator;
   m_uniquePointers.insert(oldPtr,uid);
   return uid.m_ptr;

  }

  virtual const unsigned char* getBufferPointer() const
  {
   return m_buffer;
  }

  virtual int getCurrentBufferSize() const
  {
   return m_currentSize;
  }

  virtual void finalizeChunk(btChunk* chunk, const char* structType, int chunkCode,void* oldPtr)
  {
   if (!(m_serializationFlags&BT_SERIALIZE_NO_DUPLICATE_ASSERT))
   {
    ;
   }

   chunk->m_dna_nr = getReverseType(structType);

   chunk->m_chunkCode = chunkCode;

   void* uniquePtr = getUniquePointer(oldPtr);

   m_chunkP.insert(oldPtr,uniquePtr);
   chunk->m_oldPtr = uniquePtr;

  }


  virtual unsigned char* internalAlloc(size_t size)
  {
   unsigned char* ptr = 0;

   if (m_totalSize)
   {
    ptr = m_buffer+m_currentSize;
    m_currentSize += int(size);
    ;
   } else
   {
    ptr = (unsigned char*)btAlignedAllocInternal(size,16);
    m_currentSize += int(size);
   }
   return ptr;
  }



  virtual btChunk* allocate(size_t size, int numElements)
  {

   unsigned char* ptr = internalAlloc(int(size)*numElements+sizeof(btChunk));

   unsigned char* data = ptr + sizeof(btChunk);

   btChunk* chunk = (btChunk*)ptr;
   chunk->m_chunkCode = 0;
   chunk->m_oldPtr = data;
   chunk->m_length = int(size)*numElements;
   chunk->m_number = numElements;

   m_chunkPtrs.push_back(chunk);


   return chunk;
  }

  virtual const char* findNameForPointer(const void* ptr) const
  {
   const char*const * namePtr = m_nameMap.find(ptr);
   if (namePtr && *namePtr)
    return *namePtr;
   return 0;

  }

  virtual void registerNameForPointer(const void* ptr, const char* name)
  {
   m_nameMap.insert(ptr,name);
  }

  virtual void serializeName(const char* name)
  {
   if (name)
   {

    if (findPointer((void*)name))
     return;

    int len = btStrLen(name);
    if (len)
    {

     int newLen = len+1;
     int padding = ((newLen+3)&~3)-newLen;
     newLen += padding;


     btChunk* chunk = allocate(sizeof(char),newLen);
     char* destinationName = (char*)chunk->m_oldPtr;
     for (int i=0;i<len;i++)
     {
      destinationName[i] = name[i];
     }
     destinationName[len] = 0;
     finalizeChunk(chunk,"char",( (int)('Y')<<24 | (int)('A')<<16 | ('R')<<8 | ('A') ),(void*)name);
    }
   }
  }

  virtual int getSerializationFlags() const
  {
   return m_serializationFlags;
  }

  virtual void setSerializationFlags(int flags)
  {
   m_serializationFlags = flags;
  }

};
# 22 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleInfoMap.h" 2
# 36 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleInfoMap.h"
class btTriangleInfo
 { public: 
 btTriangleInfo()
 {
  m_edgeV0V1Angle = float(6.283185307179586232);
  m_edgeV1V2Angle = float(6.283185307179586232);
  m_edgeV2V0Angle = float(6.283185307179586232);
  m_flags=0;
 }

 int m_flags;

 float m_edgeV0V1Angle;
 float m_edgeV1V2Angle;
 float m_edgeV2V0Angle;

};

typedef btHashMap<btHashInt,btTriangleInfo> btInternalTriangleInfoMap;



class btTriangleInfoMap : public btInternalTriangleInfoMap
 { public: 
 float m_convexEpsilon;
 float m_planarEpsilon;
 float m_equalVertexThreshold;
 float m_edgeDistanceThreshold;
 float m_maxEdgeAngleThreshold;
 float m_zeroAreaThreshold;


 btTriangleInfoMap()
 {
  m_convexEpsilon = 0.00f;
  m_planarEpsilon = 0.0001f;
  m_equalVertexThreshold = float(0.0001)*float(0.0001);
  m_edgeDistanceThreshold = float(0.1);
  m_zeroAreaThreshold = float(0.0001)*float(0.0001);
  m_maxEdgeAngleThreshold = float(6.283185307179586232);
 }
 virtual ~btTriangleInfoMap() {}

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

 void deSerialize(struct btTriangleInfoMapData& data);

};

class btTriangleInfoData
 { public: 
 int m_flags;
 float m_edgeV0V1Angle;
 float m_edgeV1V2Angle;
 float m_edgeV2V0Angle;
};

class btTriangleInfoMapData
 { public: 
 int *m_hashTablePtr;
 int *m_nextPtr;
 btTriangleInfoData *m_valueArrayPtr;
 int *m_keyArrayPtr;

 float m_convexEpsilon;
 float m_planarEpsilon;
 float m_equalVertexThreshold;
 float m_edgeDistanceThreshold;
 float m_zeroAreaThreshold;

 int m_nextSize;
 int m_hashTableSize;
 int m_numValues;
 int m_numKeys;
 char m_padding[4];
};

inline int btTriangleInfoMap::calculateSerializeBufferSize() const
{
 return sizeof(btTriangleInfoMapData);
}


inline const char* btTriangleInfoMap::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btTriangleInfoMapData* tmapData = (btTriangleInfoMapData*) dataBuffer;
 tmapData->m_convexEpsilon = m_convexEpsilon;
 tmapData->m_planarEpsilon = m_planarEpsilon;
 tmapData->m_equalVertexThreshold = m_equalVertexThreshold;
 tmapData->m_edgeDistanceThreshold = m_edgeDistanceThreshold;
 tmapData->m_zeroAreaThreshold = m_zeroAreaThreshold;

 tmapData->m_hashTableSize = m_hashTable.size();

 tmapData->m_hashTablePtr = tmapData->m_hashTableSize ? (int*)serializer->getUniquePointer((void*)&m_hashTable[0]) : 0;
 if (tmapData->m_hashTablePtr)
 {

  int sz = sizeof(int);
  int numElem = tmapData->m_hashTableSize;
  btChunk* chunk = serializer->allocate(sz,numElem);
  int* memPtr = (int*)chunk->m_oldPtr;
  for (int i=0;i<numElem;i++,memPtr++)
  {
   *memPtr = m_hashTable[i];
  }
  serializer->finalizeChunk(chunk,"int",( (int)('Y')<<24 | (int)('A')<<16 | ('R')<<8 | ('A') ),(void*)&m_hashTable[0]);

 }

 tmapData->m_nextSize = m_next.size();
 tmapData->m_nextPtr = tmapData->m_nextSize? (int*)serializer->getUniquePointer((void*)&m_next[0]): 0;
 if (tmapData->m_nextPtr)
 {
  int sz = sizeof(int);
  int numElem = tmapData->m_nextSize;
  btChunk* chunk = serializer->allocate(sz,numElem);
  int* memPtr = (int*)chunk->m_oldPtr;
  for (int i=0;i<numElem;i++,memPtr++)
  {
   *memPtr = m_next[i];
  }
  serializer->finalizeChunk(chunk,"int",( (int)('Y')<<24 | (int)('A')<<16 | ('R')<<8 | ('A') ),(void*)&m_next[0]);
 }

 tmapData->m_numValues = m_valueArray.size();
 tmapData->m_valueArrayPtr = tmapData->m_numValues ? (btTriangleInfoData*)serializer->getUniquePointer((void*)&m_valueArray[0]): 0;
 if (tmapData->m_valueArrayPtr)
 {
  int sz = sizeof(btTriangleInfoData);
  int numElem = tmapData->m_numValues;
  btChunk* chunk = serializer->allocate(sz,numElem);
  btTriangleInfoData* memPtr = (btTriangleInfoData*)chunk->m_oldPtr;
  for (int i=0;i<numElem;i++,memPtr++)
  {
   memPtr->m_edgeV0V1Angle = m_valueArray[i].m_edgeV0V1Angle;
   memPtr->m_edgeV1V2Angle = m_valueArray[i].m_edgeV1V2Angle;
   memPtr->m_edgeV2V0Angle = m_valueArray[i].m_edgeV2V0Angle;
   memPtr->m_flags = m_valueArray[i].m_flags;
  }
  serializer->finalizeChunk(chunk,"btTriangleInfoData",( (int)('Y')<<24 | (int)('A')<<16 | ('R')<<8 | ('A') ),(void*) &m_valueArray[0]);
 }

 tmapData->m_numKeys = m_keyArray.size();
 tmapData->m_keyArrayPtr = tmapData->m_numKeys ? (int*)serializer->getUniquePointer((void*)&m_keyArray[0]) : 0;
 if (tmapData->m_keyArrayPtr)
 {
  int sz = sizeof(int);
  int numElem = tmapData->m_numValues;
  btChunk* chunk = serializer->allocate(sz,numElem);
  int* memPtr = (int*)chunk->m_oldPtr;
  for (int i=0;i<numElem;i++,memPtr++)
  {
   *memPtr = m_keyArray[i].getUid1();
  }
  serializer->finalizeChunk(chunk,"int",( (int)('Y')<<24 | (int)('A')<<16 | ('R')<<8 | ('A') ),(void*) &m_keyArray[0]);

 }
 return "btTriangleInfoMapData";
}




inline void btTriangleInfoMap::deSerialize(btTriangleInfoMapData& tmapData )
{


 m_convexEpsilon = tmapData.m_convexEpsilon;
 m_planarEpsilon = tmapData.m_planarEpsilon;
 m_equalVertexThreshold = tmapData.m_equalVertexThreshold;
 m_edgeDistanceThreshold = tmapData.m_edgeDistanceThreshold;
 m_zeroAreaThreshold = tmapData.m_zeroAreaThreshold;
 m_hashTable.resize(tmapData.m_hashTableSize);
 int i =0;
 for (i=0;i<tmapData.m_hashTableSize;i++)
 {
  m_hashTable[i] = tmapData.m_hashTablePtr[i];
 }
 m_next.resize(tmapData.m_nextSize);
 for (i=0;i<tmapData.m_nextSize;i++)
 {
  m_next[i] = tmapData.m_nextPtr[i];
 }
 m_valueArray.resize(tmapData.m_numValues);
 for (i=0;i<tmapData.m_numValues;i++)
 {
  m_valueArray[i].m_edgeV0V1Angle = tmapData.m_valueArrayPtr[i].m_edgeV0V1Angle;
  m_valueArray[i].m_edgeV1V2Angle = tmapData.m_valueArrayPtr[i].m_edgeV1V2Angle;
  m_valueArray[i].m_edgeV2V0Angle = tmapData.m_valueArrayPtr[i].m_edgeV2V0Angle;
  m_valueArray[i].m_flags = tmapData.m_valueArrayPtr[i].m_flags;
 }

 m_keyArray.resize(tmapData.m_numKeys,btHashInt(0));
 for (i=0;i<tmapData.m_numKeys;i++)
 {
  m_keyArray[i].setUid1(tmapData.m_keyArrayPtr[i]);
 }
}
# 23 "../../bullet/src/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h" 2





class btBvhTriangleMeshShape : public btTriangleMeshShape
{

 btOptimizedBvh* m_bvh;
 btTriangleInfoMap* m_triangleInfoMap;

 bool m_useQuantizedAabbCompression;
 bool m_ownsBvh;
 bool m_pad[11];

public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };


 btBvhTriangleMeshShape(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression, bool buildBvh = true);


 btBvhTriangleMeshShape(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression,const btVector3& bvhAabbMin,const btVector3& bvhAabbMax, bool buildBvh = true);

 virtual ~btBvhTriangleMeshShape();

 bool getOwnsBvh () const
 {
  return m_ownsBvh;
 }



 void performRaycast (btTriangleCallback* callback, const btVector3& raySource, const btVector3& rayTarget);
 void performConvexcast (btTriangleCallback* callback, const btVector3& boxSource, const btVector3& boxTarget, const btVector3& boxMin, const btVector3& boxMax);

 virtual void processAllTriangles(btTriangleCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const;

 void refitTree(const btVector3& aabbMin,const btVector3& aabbMax);


 void partialRefitTree(const btVector3& aabbMin,const btVector3& aabbMax);


 virtual const char* getName()const {return "BVHTRIANGLEMESH";}


 virtual void setLocalScaling(const btVector3& scaling);

 btOptimizedBvh* getOptimizedBvh()
 {
  return m_bvh;
 }

 void setOptimizedBvh(btOptimizedBvh* bvh, const btVector3& localScaling=btVector3(1,1,1));

 void buildOptimizedBvh();

 bool usesQuantizedAabbCompression() const
 {
  return m_useQuantizedAabbCompression;
 }

 void setTriangleInfoMap(btTriangleInfoMap* triangleInfoMap)
 {
  m_triangleInfoMap = triangleInfoMap;
 }

 const btTriangleInfoMap* getTriangleInfoMap() const
 {
  return m_triangleInfoMap;
 }

 btTriangleInfoMap* getTriangleInfoMap()
 {
  return m_triangleInfoMap;
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

 virtual void serializeSingleBvh(btSerializer* serializer) const;

 virtual void serializeSingleTriangleInfoMap(btSerializer* serializer) const;

};


class btTriangleMeshShapeData
 { public: 
 btCollisionShapeData m_collisionShapeData;

 btStridingMeshInterfaceData m_meshInterface;

 btQuantizedBvhFloatData *m_quantizedFloatBvh;
 btQuantizedBvhDoubleData *m_quantizedDoubleBvh;

 btTriangleInfoMapData *m_triangleInfoMap;

 float m_collisionMargin;

 char m_pad3[4];

};


inline int btBvhTriangleMeshShape::calculateSerializeBufferSize() const
{
 return sizeof(btTriangleMeshShapeData);
}
# 36 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.h"
# 1 "../src/BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h" 1
# 20 "../../bullet/src/BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.h" 2




class btScaledBvhTriangleMeshShape : public btConcaveShape
{


 btVector3 m_localScaling;

 btBvhTriangleMeshShape* m_bvhTriMeshShape;

public:


 btScaledBvhTriangleMeshShape(btBvhTriangleMeshShape* childShape,const btVector3& localScaling);

 virtual ~btScaledBvhTriangleMeshShape();


 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;
 virtual void setLocalScaling(const btVector3& scaling);
 virtual const btVector3& getLocalScaling() const;
 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void processAllTriangles(btTriangleCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const;

 btBvhTriangleMeshShape* getChildShape()
 {
  return m_bvhTriMeshShape;
 }

 const btBvhTriangleMeshShape* getChildShape() const
 {
  return m_bvhTriMeshShape;
 }


 virtual const char* getName()const {return "SCALEDBVHTRIANGLEMESH";}

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

};


class btScaledTriangleMeshShapeData
 { public: 
 btTriangleMeshShapeData m_trimeshShapeData;

 btVector3FloatData m_localScaling;
};


inline int btScaledBvhTriangleMeshShape::calculateSerializeBufferSize() const
{
 return sizeof(btScaledTriangleMeshShapeData);
}



inline const char* btScaledBvhTriangleMeshShape::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btScaledTriangleMeshShapeData* scaledMeshData = (btScaledTriangleMeshShapeData*) dataBuffer;
 m_bvhTriMeshShape->serialize(&scaledMeshData->m_trimeshShapeData,serializer);
 scaledMeshData->m_trimeshShapeData.m_collisionShapeData.m_shapeType = SCALED_TRIANGLE_MESH_SHAPE_PROXYTYPE;
 m_localScaling.serializeFloat(scaledMeshData->m_localScaling);
 return "btScaledTriangleMeshShapeData";
}
# 37 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleMeshShape.h" 1
# 38 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h" 1
# 39 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btCompoundShape.h" 1
# 28 "../../bullet/src/BulletCollision/CollisionShapes/btCompoundShape.h"
struct btDbvt;

class btCompoundShapeChild
 { public: 
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btTransform m_transform;
 btCollisionShape* m_childShape;
 int m_childShapeType;
 float m_childMargin;
 struct btDbvtNode* m_node;
};

inline bool operator==(const btCompoundShapeChild& c1, const btCompoundShapeChild& c2)
{
 return ( c1.m_transform == c2.m_transform &&
  c1.m_childShape == c2.m_childShape &&
  c1.m_childShapeType == c2.m_childShapeType &&
  c1.m_childMargin == c2.m_childMargin );
}






class btCompoundShape : public btCollisionShape
{
 btAlignedObjectArray<btCompoundShapeChild> m_children;
 btVector3 m_localAabbMin;
 btVector3 m_localAabbMax;

 btDbvt* m_dynamicAabbTree;


 int m_updateRevision;

 float m_collisionMargin;

protected:
 btVector3 m_localScaling;

public:
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btCompoundShape(bool enableDynamicAabbTree = true);

 virtual ~btCompoundShape();

 void addChildShape(const btTransform& localTransform,btCollisionShape* shape);


 virtual void removeChildShape(btCollisionShape* shape);

 void removeChildShapeByIndex(int childShapeindex);


 int getNumChildShapes() const
 {
  return int (m_children.size());
 }

 btCollisionShape* getChildShape(int index)
 {
  return m_children[index].m_childShape;
 }
 const btCollisionShape* getChildShape(int index) const
 {
  return m_children[index].m_childShape;
 }

 btTransform& getChildTransform(int index)
 {
  return m_children[index].m_transform;
 }
 const btTransform& getChildTransform(int index) const
 {
  return m_children[index].m_transform;
 }


 void updateChildTransform(int childIndex, const btTransform& newChildTransform, bool shouldRecalculateLocalAabb = true);


 btCompoundShapeChild* getChildList()
 {
  return &m_children[0];
 }


 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;



 virtual void recalculateLocalAabb();

 virtual void setLocalScaling(const btVector3& scaling);

 virtual const btVector3& getLocalScaling() const
 {
  return m_localScaling;
 }

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void setMargin(float margin)
 {
  m_collisionMargin = margin;
 }
 virtual float getMargin() const
 {
  return m_collisionMargin;
 }
 virtual const char* getName()const
 {
  return "Compound";
 }

 const btDbvt* getDynamicAabbTree() const
 {
  return m_dynamicAabbTree;
 }

 btDbvt* getDynamicAabbTree()
 {
  return m_dynamicAabbTree;
 }

 void createAabbTreeFromChildren();






 void calculatePrincipalAxisTransform(float* masses, btTransform& principal, btVector3& inertia) const;

 int getUpdateRevision() const
 {
  return m_updateRevision;
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btCompoundShapeChildData
 { public: 
 btTransformFloatData m_transform;
 btCollisionShapeData *m_childShape;
 int m_childShapeType;
 float m_childMargin;
};


class btCompoundShapeData
 { public: 
 btCollisionShapeData m_collisionShapeData;

 btCompoundShapeChildData *m_childShapePtr;

 int m_numChildShapes;

 float m_collisionMargin;

};


inline int btCompoundShape::calculateSerializeBufferSize() const
{
 return sizeof(btCompoundShapeData);
}
# 40 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btTetrahedronShape.h" 1
# 25 "../../bullet/src/BulletCollision/CollisionShapes/btTetrahedronShape.h"
class btBU_Simplex1to4 : public btPolyhedralConvexAabbCachingShape
{
protected:

 int m_numVertices;
 btVector3 m_vertices[4];

public:
 btBU_Simplex1to4();

 btBU_Simplex1to4(const btVector3& pt0);
 btBU_Simplex1to4(const btVector3& pt0,const btVector3& pt1);
 btBU_Simplex1to4(const btVector3& pt0,const btVector3& pt1,const btVector3& pt2);
 btBU_Simplex1to4(const btVector3& pt0,const btVector3& pt1,const btVector3& pt2,const btVector3& pt3);


 void reset()
 {
  m_numVertices = 0;
 }

 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 void addVertex(const btVector3& pt);



 virtual int getNumVertices() const;

 virtual int getNumEdges() const;

 virtual void getEdge(int i,btVector3& pa,btVector3& pb) const;

 virtual void getVertex(int i,btVector3& vtx) const;

 virtual int getNumPlanes() const;

 virtual void getPlane(btVector3& planeNormal,btVector3& planeSupport,int i) const;

 virtual int getIndex(int i) const;

 virtual bool isInside(const btVector3& pt,float tolerance) const;



 virtual const char* getName()const { return "btBU_Simplex1to4";}

};
# 41 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btEmptyShape.h" 1
# 31 "../../bullet/src/BulletCollision/CollisionShapes/btEmptyShape.h"
class btEmptyShape : public btConcaveShape
{
public:
 btEmptyShape();

 virtual ~btEmptyShape();



 void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;


 virtual void setLocalScaling(const btVector3& scaling)
 {
  m_localScaling = scaling;
 }
 virtual const btVector3& getLocalScaling() const
 {
  return m_localScaling;
 }

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual const char* getName()const
 {
  return "Empty";
 }

 virtual void processAllTriangles(btTriangleCallback* ,const btVector3& ,const btVector3& ) const
 {
 }

protected:
 btVector3 m_localScaling;

};
# 42 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btMultiSphereShape.h" 1
# 28 "../../bullet/src/BulletCollision/CollisionShapes/btMultiSphereShape.h"
class btMultiSphereShape : public btConvexInternalAabbCachingShape
{

 btAlignedObjectArray<btVector3> m_localPositionArray;
 btAlignedObjectArray<float> m_radiArray;

public:
 btMultiSphereShape (const btVector3* positions,const float* radi,int numSpheres);


 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;


 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;

 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;

 int getSphereCount() const
 {
  return m_localPositionArray.size();
 }

 const btVector3& getSpherePosition(int index) const
 {
  return m_localPositionArray[index];
 }

 float getSphereRadius(int index) const
 {
  return m_radiArray[index];
 }


 virtual const char* getName()const
 {
  return "MultiSphere";
 }

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btPositionAndRadius
 { public: 
 btVector3FloatData m_pos;
 float m_radius;
};

class btMultiSphereShapeData
 { public: 
 btConvexInternalShapeData m_convexInternalShapeData;

 btPositionAndRadius *m_localPositionArrayPtr;
 int m_localPositionArraySize;
 char m_padding[4];
};



inline int btMultiSphereShape::calculateSerializeBufferSize() const
{
 return sizeof(btMultiSphereShapeData);
}
# 43 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btUniformScalingShape.h" 1
# 24 "../../bullet/src/BulletCollision/CollisionShapes/btUniformScalingShape.h"
class btUniformScalingShape : public btConvexShape
{
 btConvexShape* m_childConvexShape;

 float m_uniformScalingFactor;

 public:

 btUniformScalingShape( btConvexShape* convexChildShape, float uniformScalingFactor);

 virtual ~btUniformScalingShape();

 virtual btVector3 localGetSupportingVertexWithoutMargin(const btVector3& vec)const;

 virtual btVector3 localGetSupportingVertex(const btVector3& vec)const;

 virtual void batchedUnitVectorGetSupportingVertexWithoutMargin(const btVector3* vectors,btVector3* supportVerticesOut,int numVectors) const;

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 float getUniformScalingFactor() const
 {
  return m_uniformScalingFactor;
 }

 btConvexShape* getChildShape()
 {
  return m_childConvexShape;
 }

 const btConvexShape* getChildShape() const
 {
  return m_childConvexShape;
 }

 virtual const char* getName()const
 {
  return "UniformScalingShape";
 }







 void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 virtual void getAabbSlow(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 virtual void setLocalScaling(const btVector3& scaling) ;
 virtual const btVector3& getLocalScaling() const ;

 virtual void setMargin(float margin);
 virtual float getMargin() const;

 virtual int getNumPreferredPenetrationDirections() const;

 virtual void getPreferredPenetrationDirection(int index, btVector3& penetrationVector) const;


};
# 44 "../../bullet/src/btBulletCollisionCommon.h" 2


# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h"
# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h"
# 1 "../src/BulletCollision/BroadphaseCollision/btCollisionAlgorithm.h" 1
# 22 "../src/BulletCollision/BroadphaseCollision/btCollisionAlgorithm.h"
struct btBroadphaseProxy;
class btDispatcher;
class btManifoldResult;
class btCollisionObject;
struct btDispatcherInfo;
class btPersistentManifold;

typedef btAlignedObjectArray<btPersistentManifold*> btManifoldArray;

class btCollisionAlgorithmConstructionInfo
 { public: 
 btCollisionAlgorithmConstructionInfo()
  :m_dispatcher1(0),
  m_manifold(0)
 {
 }
 btCollisionAlgorithmConstructionInfo(btDispatcher* dispatcher,int temp)
  :m_dispatcher1(dispatcher)
 {
  ()temp;
 }

 btDispatcher* m_dispatcher1;
 btPersistentManifold* m_manifold;



};




class btCollisionAlgorithm
{

protected:

 btDispatcher* m_dispatcher;

protected:


public:

 btCollisionAlgorithm() {};

 btCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo& ci);

 virtual ~btCollisionAlgorithm() {};

 virtual void processCollision (btCollisionObject* body0,btCollisionObject* body1,const btDispatcherInfo& dispatchInfo,btManifoldResult* resultOut) = 0;

 virtual float calculateTimeOfImpact(btCollisionObject* body0,btCollisionObject* body1,const btDispatcherInfo& dispatchInfo,btManifoldResult* resultOut) = 0;

 virtual void getAllContactManifolds(btManifoldArray& manifoldArray) = 0;
};
# 20 "../../bullet/src/BulletCollision/CollisionDispatch/btActivatingCollisionAlgorithm.h" 2


class btActivatingCollisionAlgorithm : public btCollisionAlgorithm
{



public:

 btActivatingCollisionAlgorithm (const btCollisionAlgorithmConstructionInfo& ci);

 btActivatingCollisionAlgorithm (const btCollisionAlgorithmConstructionInfo& ci, btCollisionObject* colObj0,btCollisionObject* colObj1);

 virtual ~btActivatingCollisionAlgorithm();

};
# 20 "../../bullet/src/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h" 2

# 1 "../src/BulletCollision/CollisionDispatch/btCollisionCreateFunc.h" 1
# 22 "../../bullet/src/BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h" 2


class btPersistentManifold;




class btSphereSphereCollisionAlgorithm : public btActivatingCollisionAlgorithm
{
 bool m_ownManifold;
 btPersistentManifold* m_manifoldPtr;

public:
 btSphereSphereCollisionAlgorithm(btPersistentManifold* mf,const btCollisionAlgorithmConstructionInfo& ci,btCollisionObject* body0,btCollisionObject* body1);

 btSphereSphereCollisionAlgorithm(const btCollisionAlgorithmConstructionInfo& ci)
  : btActivatingCollisionAlgorithm(ci) {}

 virtual void processCollision (btCollisionObject* body0,btCollisionObject* body1,const btDispatcherInfo& dispatchInfo,btManifoldResult* resultOut);

 virtual float calculateTimeOfImpact(btCollisionObject* body0,btCollisionObject* body1,const btDispatcherInfo& dispatchInfo,btManifoldResult* resultOut);

 virtual void getAllContactManifolds(btManifoldArray& manifoldArray)
 {
  if (m_manifoldPtr && m_ownManifold)
  {
   manifoldArray.push_back(m_manifoldPtr);
  }
 }

 virtual ~btSphereSphereCollisionAlgorithm();

 class CreateFunc :public btCollisionAlgorithmCreateFunc
  { public: 
  virtual btCollisionAlgorithm* CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo& ci, btCollisionObject* body0,btCollisionObject* body1)
  {
   void* mem = ci.m_dispatcher1->allocateCollisionAlgorithm(sizeof(btSphereSphereCollisionAlgorithm));
   return new(mem) btSphereSphereCollisionAlgorithm(0,ci,body0,body1);
  }
 };

};
# 47 "../../bullet/src/btBulletCollisionCommon.h" 2



# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h"
# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionConfiguration.h" 1
# 19 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionConfiguration.h"
struct btCollisionAlgorithmCreateFunc;

class btStackAlloc;
class btPoolAllocator;




class btCollisionConfiguration
{

public:

 virtual ~btCollisionConfiguration()
 {
 }


 virtual btPoolAllocator* getPersistentManifoldPool() = 0;

 virtual btPoolAllocator* getCollisionAlgorithmPool() = 0;

 virtual btStackAlloc* getStackAllocator() = 0;

 virtual btCollisionAlgorithmCreateFunc* getCollisionAlgorithmCreateFunc(int proxyType0,int proxyType1) =0;

};
# 20 "../../bullet/src/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h" 2
class btVoronoiSimplexSolver;
class btConvexPenetrationDepthSolver;

class btDefaultCollisionConstructionInfo
 { public: 
 btStackAlloc* m_stackAlloc;
 btPoolAllocator* m_persistentManifoldPool;
 btPoolAllocator* m_collisionAlgorithmPool;
 int m_defaultMaxPersistentManifoldPoolSize;
 int m_defaultMaxCollisionAlgorithmPoolSize;
 int m_customCollisionAlgorithmMaxElementSize;
 int m_defaultStackAllocatorSize;
 int m_useEpaPenetrationAlgorithm;

 btDefaultCollisionConstructionInfo()
  :m_stackAlloc(0),
  m_persistentManifoldPool(0),
  m_collisionAlgorithmPool(0),
  m_defaultMaxPersistentManifoldPoolSize(4096),
  m_defaultMaxCollisionAlgorithmPoolSize(4096),
  m_customCollisionAlgorithmMaxElementSize(0),
  m_defaultStackAllocatorSize(0),
  m_useEpaPenetrationAlgorithm(true)
 {
 }
};






class btDefaultCollisionConfiguration : public btCollisionConfiguration
{

protected:

 int m_persistentManifoldPoolSize;

 btStackAlloc* m_stackAlloc;
 bool m_ownsStackAllocator;

 btPoolAllocator* m_persistentManifoldPool;
 bool m_ownsPersistentManifoldPool;


 btPoolAllocator* m_collisionAlgorithmPool;
 bool m_ownsCollisionAlgorithmPool;


 btVoronoiSimplexSolver* m_simplexSolver;
 btConvexPenetrationDepthSolver* m_pdSolver;


 btCollisionAlgorithmCreateFunc* m_convexConvexCreateFunc;
 btCollisionAlgorithmCreateFunc* m_convexConcaveCreateFunc;
 btCollisionAlgorithmCreateFunc* m_swappedConvexConcaveCreateFunc;
 btCollisionAlgorithmCreateFunc* m_compoundCreateFunc;
 btCollisionAlgorithmCreateFunc* m_swappedCompoundCreateFunc;
 btCollisionAlgorithmCreateFunc* m_emptyCreateFunc;
 btCollisionAlgorithmCreateFunc* m_sphereSphereCF;





 btCollisionAlgorithmCreateFunc* m_boxBoxCF;
 btCollisionAlgorithmCreateFunc* m_sphereTriangleCF;
 btCollisionAlgorithmCreateFunc* m_triangleSphereCF;
 btCollisionAlgorithmCreateFunc* m_planeConvexCF;
 btCollisionAlgorithmCreateFunc* m_convexPlaneCF;

public:


 btDefaultCollisionConfiguration(const btDefaultCollisionConstructionInfo& constructionInfo = btDefaultCollisionConstructionInfo());

 virtual ~btDefaultCollisionConfiguration();


 virtual btPoolAllocator* getPersistentManifoldPool()
 {
  return m_persistentManifoldPool;
 }

 virtual btPoolAllocator* getCollisionAlgorithmPool()
 {
  return m_collisionAlgorithmPool;
 }

 virtual btStackAlloc* getStackAllocator()
 {
  return m_stackAlloc;
 }

 virtual btVoronoiSimplexSolver* getSimplexSolver()
 {
  return m_simplexSolver;
 }


 virtual btCollisionAlgorithmCreateFunc* getCollisionAlgorithmCreateFunc(int proxyType0,int proxyType1);
# 130 "../../bullet/src/BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h"
 void setConvexConvexMultipointIterations(int numPerturbationIterations=3, int minimumPointsPerturbationThreshold = 3);

};
# 51 "../../bullet/src/btBulletCollisionCommon.h" 2


# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionDispatcher.h" 1
# 54 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btSimpleBroadphase.h" 1
# 20 "../../bullet/src/BulletCollision/BroadphaseCollision/btSimpleBroadphase.h"
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btOverlappingPairCache.h" 1
# 21 "../../bullet/src/BulletCollision/BroadphaseCollision/btSimpleBroadphase.h" 2


class btSimpleBroadphaseProxy : public btBroadphaseProxy
 { public: 
 int m_nextFree;




 btSimpleBroadphaseProxy() {};

 btSimpleBroadphaseProxy(const btVector3& minpt,const btVector3& maxpt,int shapeType,void* userPtr,short int collisionFilterGroup,short int collisionFilterMask,void* multiSapProxy)
 :btBroadphaseProxy(minpt,maxpt,userPtr,collisionFilterGroup,collisionFilterMask,multiSapProxy)
 {
  ()shapeType;
 }


 inline void SetNextFree(int next) {m_nextFree = next;}
 inline int GetNextFree() const {return m_nextFree;}




};



class btSimpleBroadphase : public btBroadphaseInterface
{

protected:

 int m_numHandles;
 int m_maxHandles;
 int m_LastHandleIndex;

 btSimpleBroadphaseProxy* m_pHandles;

 void* m_pHandlesRawPtr;
 int m_firstFreeHandle;

 int allocHandle()
 {
  ;
  int freeHandle = m_firstFreeHandle;
  m_firstFreeHandle = m_pHandles[freeHandle].GetNextFree();
  m_numHandles++;
  if(freeHandle > m_LastHandleIndex)
  {
   m_LastHandleIndex = freeHandle;
  }
  return freeHandle;
 }

 void freeHandle(btSimpleBroadphaseProxy* proxy)
 {
  int handle = int(proxy-m_pHandles);
  ;
  if(handle == m_LastHandleIndex)
  {
   m_LastHandleIndex--;
  }
  proxy->SetNextFree(m_firstFreeHandle);
  m_firstFreeHandle = handle;

  proxy->m_clientObject = 0;

  m_numHandles--;
 }

 btOverlappingPairCache* m_pairCache;
 bool m_ownsPairCache;

 int m_invalidPair;



 inline btSimpleBroadphaseProxy* getSimpleProxyFromProxy(btBroadphaseProxy* proxy)
 {
  btSimpleBroadphaseProxy* proxy0 = static_cast<btSimpleBroadphaseProxy*>(proxy);
  return proxy0;
 }

 inline const btSimpleBroadphaseProxy* getSimpleProxyFromProxy(btBroadphaseProxy* proxy) const
 {
  const btSimpleBroadphaseProxy* proxy0 = static_cast<const btSimpleBroadphaseProxy*>(proxy);
  return proxy0;
 }


 virtual void resetPool(btDispatcher* dispatcher);


 void validate();

protected:




public:
 btSimpleBroadphase(int maxProxies=16384,btOverlappingPairCache* overlappingPairCache=0);
 virtual ~btSimpleBroadphase();


  static bool aabbOverlap(btSimpleBroadphaseProxy* proxy0,btSimpleBroadphaseProxy* proxy1);


 virtual btBroadphaseProxy* createProxy( const btVector3& aabbMin, const btVector3& aabbMax,int shapeType,void* userPtr ,short int collisionFilterGroup,short int collisionFilterMask, btDispatcher* dispatcher,void* multiSapProxy);

 virtual void calculateOverlappingPairs(btDispatcher* dispatcher);

 virtual void destroyProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher);
 virtual void setAabb(btBroadphaseProxy* proxy,const btVector3& aabbMin,const btVector3& aabbMax, btDispatcher* dispatcher);
 virtual void getAabb(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const;

 virtual void rayTest(const btVector3& rayFrom,const btVector3& rayTo, btBroadphaseRayCallback& rayCallback, const btVector3& aabbMin=btVector3,const btVector3& aabbMax=btVector3);
 virtual void aabbTest(const btVector3& aabbMin, const btVector3& aabbMax, btBroadphaseAabbCallback& callback);

 btOverlappingPairCache* getOverlappingPairCache()
 {
  return m_pairCache;
 }
 const btOverlappingPairCache* getOverlappingPairCache() const
 {
  return m_pairCache;
 }

 bool testAabbOverlap(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1);




 virtual void getBroadphaseAabb(btVector3& aabbMin,btVector3& aabbMax) const
 {
  aabbMin.setValue(-1e18f,-1e18f,-1e18f);
  aabbMax.setValue(1e18f,1e18f,1e18f);
 }

 virtual void printStats()
 {


 }
};
# 55 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h" 1
# 24 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h"
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseInterface.h" 1
# 25 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btBroadphaseProxy.h" 1
# 26 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h" 1
# 27 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h" 1
# 20 "../../bullet/src/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h"
# 1 "../src/BulletCollision/BroadphaseCollision/btDbvt.h" 1
# 130 "../src/BulletCollision/BroadphaseCollision/btDbvt.h"
class btDbvtAabbMm
 { public: 
 inline btVector3 Center() const { return((mi+mx)/2); }
 inline btVector3 Lengths() const { return(mx-mi); }
 inline btVector3 Extents() const { return((mx-mi)/2); }
 inline const btVector3& Mins() const { return(mi); }
 inline const btVector3& Maxs() const { return(mx); }
 static inline btDbvtAabbMm FromCE(const btVector3& c,const btVector3& e);
 static inline btDbvtAabbMm FromCR(const btVector3& c,float r);
 static inline btDbvtAabbMm FromMM(const btVector3& mi,const btVector3& mx);
 static inline btDbvtAabbMm FromPoints(const btVector3* pts,int n);
 static inline btDbvtAabbMm FromPoints(const btVector3** ppts,int n);
 inline void Expand(const btVector3& e);
 inline void SignedExpand(const btVector3& e);
 inline bool Contain(const btDbvtAabbMm& a) const;
 inline int Classify(const btVector3& n,float o,int s) const;
 inline float ProjectMinimum(const btVector3& v,unsigned signs) const;
 inline friend bool Intersect( const btDbvtAabbMm& a,
  const btDbvtAabbMm& b);

 inline friend bool Intersect( const btDbvtAabbMm& a,
  const btVector3& b);

 inline friend float Proximity( const btDbvtAabbMm& a,
  const btDbvtAabbMm& b);
 inline friend int Select( const btDbvtAabbMm& o,
  const btDbvtAabbMm& a,
  const btDbvtAabbMm& b);
 inline friend void Merge( const btDbvtAabbMm& a,
  const btDbvtAabbMm& b,
  btDbvtAabbMm& r);
 inline friend bool NotEqual( const btDbvtAabbMm& a,
  const btDbvtAabbMm& b);
private:
 inline void AddSpan(const btVector3& d,float& smi,float& smx) const;
private:
 btVector3 mi,mx;
};


typedef btDbvtAabbMm btDbvtVolume;


class btDbvtNode
 { public: 
 btDbvtVolume volume;
 btDbvtNode* parent;
 inline bool isleaf() const { return(childs[1]==0); }
 inline bool isinternal() const { return(!isleaf()); }
 union
 {
  btDbvtNode* childs[2];
  void* data;
  int dataAsInt;
 };
};




class btDbvt
 { public: 

 class sStkNN
  { public: 
  const btDbvtNode* a;
  const btDbvtNode* b;
  sStkNN() {}
  sStkNN(const btDbvtNode* na,const btDbvtNode* nb) : a(na),b(nb) {}
 };
 class sStkNP
  { public: 
  const btDbvtNode* node;
  int mask;
  sStkNP(const btDbvtNode* n,unsigned m) : node(n),mask(m) {}
 };
 class sStkNPS
  { public: 
  const btDbvtNode* node;
  int mask;
  float value;
  sStkNPS() {}
  sStkNPS(const btDbvtNode* n,unsigned m,float v) : node(n),mask(m),value(v) {}
 };
 class sStkCLN
  { public: 
  const btDbvtNode* node;
  btDbvtNode* parent;
  sStkCLN(const btDbvtNode* n,btDbvtNode* p) : node(n),parent(p) {}
 };



 class ICollide
  { public: 
  virtual ~ICollide() {}
   virtual void Process(const btDbvtNode*,const btDbvtNode*) {}
  virtual void Process(const btDbvtNode*) {}
  virtual void Process(const btDbvtNode* n,float) { Process(n); }
  virtual bool Descent(const btDbvtNode*) { return(true); }
  virtual bool AllLeaves(const btDbvtNode*) { return(true); }
 };

 class IWriter
  { public: 
  virtual ~IWriter() {}
  virtual void Prepare(const btDbvtNode* root,int numnodes)=0;
  virtual void WriteNode(const btDbvtNode*,int index,int parent,int child0,int child1)=0;
  virtual void WriteLeaf(const btDbvtNode*,int index,int parent)=0;
 };

 class IClone
  { public: 
  virtual ~IClone() {}
  virtual void CloneLeaf(btDbvtNode*) {}
 };


 enum {
  SIMPLE_STACKSIZE = 64,
  DOUBLE_STACKSIZE = SIMPLE_STACKSIZE*2
 };


 btDbvtNode* m_root;
 btDbvtNode* m_free;
 int m_lkhd;
 int m_leaves;
 unsigned m_opath;


 btAlignedObjectArray<sStkNN> m_stkStack;



 btDbvt();
 ~btDbvt();
 void clear();
 bool empty() const { return(0==m_root); }
 void optimizeBottomUp();
 void optimizeTopDown(int bu_treshold=128);
 void optimizeIncremental(int passes);
 btDbvtNode* insert(const btDbvtVolume& box,void* data);
 void update(btDbvtNode* leaf,int lookahead=-1);
 void update(btDbvtNode* leaf,btDbvtVolume& volume);
 bool update(btDbvtNode* leaf,btDbvtVolume& volume,const btVector3& velocity,float margin);
 bool update(btDbvtNode* leaf,btDbvtVolume& volume,const btVector3& velocity);
 bool update(btDbvtNode* leaf,btDbvtVolume& volume,float margin);
 void remove(btDbvtNode* leaf);
 void write(btDbvt::IWriter* iwriter) const;
 void clone(btDbvt& dest,IClone* iclone=0) const;
 static int maxdepth(const btDbvtNode* node);
 static int countLeaves(const btDbvtNode* node);
 static void extractLeaves(const btDbvtNode* node,btAlignedObjectArray<const btDbvtNode*>& leaves);



 static void benchmark(){}



  static void enumNodes( const btDbvtNode* root,
  ICollide& policy);

  static void enumLeaves( const btDbvtNode* root,
  ICollide& policy);

  void collideTT( const btDbvtNode* root0,
  const btDbvtNode* root1,
  ICollide& policy);


  void collideTTpersistentStack( const btDbvtNode* root0,
    const btDbvtNode* root1,
    ICollide& policy);
# 319 "../src/BulletCollision/BroadphaseCollision/btDbvt.h"

  void collideTV( const btDbvtNode* root,
  const btDbvtVolume& volume,
  ICollide& policy);



  static void rayTest( const btDbvtNode* root,
  const btVector3& rayFrom,
  const btVector3& rayTo,
  ICollide& policy);



  void rayTestInternal( const btDbvtNode* root,
        const btVector3& rayFrom,
        const btVector3& rayTo,
        const btVector3& rayDirectionInverse,
        unsigned int signs[3],
        float lambda_max,
        const btVector3& aabbMin,
        const btVector3& aabbMax,
        ICollide& policy) const;


  static void collideKDOP(const btDbvtNode* root,
  const btVector3* normals,
  const float* offsets,
  int count,
  ICollide& policy);

  static void collideOCL( const btDbvtNode* root,
  const btVector3* normals,
  const float* offsets,
  const btVector3& sortaxis,
  int count,
  ICollide& policy,
  bool fullsort=true);

  static void collideTU( const btDbvtNode* root,
  ICollide& policy);

 static inline int nearest(const int* i,const btDbvt::sStkNPS* a,float v,int l,int h)
 {
  int m=0;
  while(l<h)
  {
   m=(l+h)>>1;
   if(a[i[m]].value>=v) l=m+1; else h=m;
  }
  return(h);
 }
 static inline int allocate( btAlignedObjectArray<int>& ifree,
  btAlignedObjectArray<sStkNPS>& stock,
  const sStkNPS& value)
 {
  int i;
  if(ifree.size()>0)
  { i=ifree[ifree.size()-1];ifree.pop_back();stock[i]=value; }
  else
  { i=stock.size();stock.push_back(value); }
  return(i);
 }

private:
 btDbvt(const btDbvt&) {}
};






inline btDbvtAabbMm btDbvtAabbMm::FromCE(const btVector3& c,const btVector3& e)
{
 btDbvtAabbMm box;
 box.mi=c-e;box.mx=c+e;
 return(box);
}


inline btDbvtAabbMm btDbvtAabbMm::FromCR(const btVector3& c,float r)
{
 return(FromCE(c,btVector3(r,r,r)));
}


inline btDbvtAabbMm btDbvtAabbMm::FromMM(const btVector3& mi,const btVector3& mx)
{
 btDbvtAabbMm box;
 box.mi=mi;box.mx=mx;
 return(box);
}


inline btDbvtAabbMm btDbvtAabbMm::FromPoints(const btVector3* pts,int n)
{
 btDbvtAabbMm box;
 box.mi=box.mx=pts[0];
 for(int i=1;i<n;++i)
 {
  box.mi.setMin(pts[i]);
  box.mx.setMax(pts[i]);
 }
 return(box);
}


inline btDbvtAabbMm btDbvtAabbMm::FromPoints(const btVector3** ppts,int n)
{
 btDbvtAabbMm box;
 box.mi=box.mx=*ppts[0];
 for(int i=1;i<n;++i)
 {
  box.mi.setMin(*ppts[i]);
  box.mx.setMax(*ppts[i]);
 }
 return(box);
}


inline void btDbvtAabbMm::Expand(const btVector3& e)
{
 mi-=e;mx+=e;
}


inline void btDbvtAabbMm::SignedExpand(const btVector3& e)
{
 if(e.x()>0) mx.setX(mx.x()+e[0]); else mi.setX(mi.x()+e[0]);
 if(e.y()>0) mx.setY(mx.y()+e[1]); else mi.setY(mi.y()+e[1]);
 if(e.z()>0) mx.setZ(mx.z()+e[2]); else mi.setZ(mi.z()+e[2]);
}


inline bool btDbvtAabbMm::Contain(const btDbvtAabbMm& a) const
{
 return( (mi.x()<=a.mi.x())&&
  (mi.y()<=a.mi.y())&&
  (mi.z()<=a.mi.z())&&
  (mx.x()>=a.mx.x())&&
  (mx.y()>=a.mx.y())&&
  (mx.z()>=a.mx.z()));
}


inline int btDbvtAabbMm::Classify(const btVector3& n,float o,int s) const
{
 btVector3 pi,px;
 switch(s)
 {
 case (0+0+0): px=btVector3(mi.x(),mi.y(),mi.z());
  pi=btVector3(mx.x(),mx.y(),mx.z());break;
 case (1+0+0): px=btVector3(mx.x(),mi.y(),mi.z());
  pi=btVector3(mi.x(),mx.y(),mx.z());break;
 case (0+2+0): px=btVector3(mi.x(),mx.y(),mi.z());
  pi=btVector3(mx.x(),mi.y(),mx.z());break;
 case (1+2+0): px=btVector3(mx.x(),mx.y(),mi.z());
  pi=btVector3(mi.x(),mi.y(),mx.z());break;
 case (0+0+4): px=btVector3(mi.x(),mi.y(),mx.z());
  pi=btVector3(mx.x(),mx.y(),mi.z());break;
 case (1+0+4): px=btVector3(mx.x(),mi.y(),mx.z());
  pi=btVector3(mi.x(),mx.y(),mi.z());break;
 case (0+2+4): px=btVector3(mi.x(),mx.y(),mx.z());
  pi=btVector3(mx.x(),mi.y(),mi.z());break;
 case (1+2+4): px=btVector3(mx.x(),mx.y(),mx.z());
  pi=btVector3(mi.x(),mi.y(),mi.z());break;
 }
 if((btDot(n,px)+o)<0) return(-1);
 if((btDot(n,pi)+o)>=0) return(+1);
 return(0);
}


inline float btDbvtAabbMm::ProjectMinimum(const btVector3& v,unsigned signs) const
{
 const btVector3* b[]={&mx,&mi};
 const btVector3 p( b[(signs>>0)&1]->x(),
  b[(signs>>1)&1]->y(),
  b[(signs>>2)&1]->z());
 return(btDot(p,v));
}


inline void btDbvtAabbMm::AddSpan(const btVector3& d,float& smi,float& smx) const
{
 for(int i=0;i<3;++i)
 {
  if(d[i]<0)
  { smi+=mx[i]*d[i];smx+=mi[i]*d[i]; }
  else
  { smi+=mi[i]*d[i];smx+=mx[i]*d[i]; }
 }
}


inline bool Intersect( const btDbvtAabbMm& a,
          const btDbvtAabbMm& b)
{






 return( (a.mi.x()<=b.mx.x())&&
  (a.mx.x()>=b.mi.x())&&
  (a.mi.y()<=b.mx.y())&&
  (a.mx.y()>=b.mi.y())&&
  (a.mi.z()<=b.mx.z())&&
  (a.mx.z()>=b.mi.z()));

}




inline bool Intersect( const btDbvtAabbMm& a,
          const btVector3& b)
{
 return( (b.x()>=a.mi.x())&&
  (b.y()>=a.mi.y())&&
  (b.z()>=a.mi.z())&&
  (b.x()<=a.mx.x())&&
  (b.y()<=a.mx.y())&&
  (b.z()<=a.mx.z()));
}
# 555 "../src/BulletCollision/BroadphaseCollision/btDbvt.h"
inline float Proximity( const btDbvtAabbMm& a,
          const btDbvtAabbMm& b)
{
 const btVector3 d=(a.mi+a.mx)-(b.mi+b.mx);
 return(btFabs(d.x())+btFabs(d.y())+btFabs(d.z()));
}




inline int Select( const btDbvtAabbMm& o,
          const btDbvtAabbMm& a,
          const btDbvtAabbMm& b)
{
# 634 "../src/BulletCollision/BroadphaseCollision/btDbvt.h"
 return(Proximity(o,a)<Proximity(o,b)?0:1);

}


inline void Merge( const btDbvtAabbMm& a,
         const btDbvtAabbMm& b,
         btDbvtAabbMm& r)
{
# 653 "../src/BulletCollision/BroadphaseCollision/btDbvt.h"
 for(int i=0;i<3;++i)
 {
  if(a.mi[i]<b.mi[i]) r.mi[i]=a.mi[i]; else r.mi[i]=b.mi[i];
  if(a.mx[i]>b.mx[i]) r.mx[i]=a.mx[i]; else r.mx[i]=b.mx[i];
 }

}


inline bool NotEqual( const btDbvtAabbMm& a,
         const btDbvtAabbMm& b)
{
 return( (a.mi.x()!=b.mi.x())||
  (a.mi.y()!=b.mi.y())||
  (a.mi.z()!=b.mi.z())||
  (a.mx.x()!=b.mx.x())||
  (a.mx.y()!=b.mx.y())||
  (a.mx.z()!=b.mx.z()));
}







inline void btDbvt::enumNodes( const btDbvtNode* root,
          ICollide& policy)
{

  policy.Process(root);
 if(root->isinternal())
 {
  enumNodes(root->childs[0],policy);
  enumNodes(root->childs[1],policy);
 }
}



inline void btDbvt::enumLeaves( const btDbvtNode* root,
           ICollide& policy)
{

  if(root->isinternal())
  {
   enumLeaves(root->childs[0],policy);
   enumLeaves(root->childs[1],policy);
  }
  else
  {
   policy.Process(root);
  }
}



inline void btDbvt::collideTT( const btDbvtNode* root0,
          const btDbvtNode* root1,
          ICollide& policy)
{

  if(root0&&root1)
  {
   int depth=1;
   int treshold=DOUBLE_STACKSIZE-4;
   btAlignedObjectArray<sStkNN> stkStack;
   stkStack.resize(DOUBLE_STACKSIZE);
   stkStack[0]=sStkNN(root0,root1);
   do {
    sStkNN p=stkStack[--depth];
    if(depth>treshold)
    {
     stkStack.resize(stkStack.size()*2);
     treshold=stkStack.size()-4;
    }
    if(p.a==p.b)
    {
     if(p.a->isinternal())
     {
      stkStack[depth++]=sStkNN(p.a->childs[0],p.a->childs[0]);
      stkStack[depth++]=sStkNN(p.a->childs[1],p.a->childs[1]);
      stkStack[depth++]=sStkNN(p.a->childs[0],p.a->childs[1]);
     }
    }
    else if(Intersect(p.a->volume,p.b->volume))
    {
     if(p.a->isinternal())
     {
      if(p.b->isinternal())
      {
       stkStack[depth++]=sStkNN(p.a->childs[0],p.b->childs[0]);
       stkStack[depth++]=sStkNN(p.a->childs[1],p.b->childs[0]);
       stkStack[depth++]=sStkNN(p.a->childs[0],p.b->childs[1]);
       stkStack[depth++]=sStkNN(p.a->childs[1],p.b->childs[1]);
      }
      else
      {
       stkStack[depth++]=sStkNN(p.a->childs[0],p.b);
       stkStack[depth++]=sStkNN(p.a->childs[1],p.b);
      }
     }
     else
     {
      if(p.b->isinternal())
      {
       stkStack[depth++]=sStkNN(p.a,p.b->childs[0]);
       stkStack[depth++]=sStkNN(p.a,p.b->childs[1]);
      }
      else
      {
       policy.Process(p.a,p.b);
      }
     }
    }
   } while(depth);
  }
}




inline void btDbvt::collideTTpersistentStack( const btDbvtNode* root0,
          const btDbvtNode* root1,
          ICollide& policy)
{

  if(root0&&root1)
  {
   int depth=1;
   int treshold=DOUBLE_STACKSIZE-4;

   m_stkStack.resize(DOUBLE_STACKSIZE);
   m_stkStack[0]=sStkNN(root0,root1);
   do {
    sStkNN p=m_stkStack[--depth];
    if(depth>treshold)
    {
     m_stkStack.resize(m_stkStack.size()*2);
     treshold=m_stkStack.size()-4;
    }
    if(p.a==p.b)
    {
     if(p.a->isinternal())
     {
      m_stkStack[depth++]=sStkNN(p.a->childs[0],p.a->childs[0]);
      m_stkStack[depth++]=sStkNN(p.a->childs[1],p.a->childs[1]);
      m_stkStack[depth++]=sStkNN(p.a->childs[0],p.a->childs[1]);
     }
    }
    else if(Intersect(p.a->volume,p.b->volume))
    {
     if(p.a->isinternal())
     {
      if(p.b->isinternal())
      {
       m_stkStack[depth++]=sStkNN(p.a->childs[0],p.b->childs[0]);
       m_stkStack[depth++]=sStkNN(p.a->childs[1],p.b->childs[0]);
       m_stkStack[depth++]=sStkNN(p.a->childs[0],p.b->childs[1]);
       m_stkStack[depth++]=sStkNN(p.a->childs[1],p.b->childs[1]);
      }
      else
      {
       m_stkStack[depth++]=sStkNN(p.a->childs[0],p.b);
       m_stkStack[depth++]=sStkNN(p.a->childs[1],p.b);
      }
     }
     else
     {
      if(p.b->isinternal())
      {
       m_stkStack[depth++]=sStkNN(p.a,p.b->childs[0]);
       m_stkStack[depth++]=sStkNN(p.a,p.b->childs[1]);
      }
      else
      {
       policy.Process(p.a,p.b);
      }
     }
    }
   } while(depth);
  }
}
# 907 "../src/BulletCollision/BroadphaseCollision/btDbvt.h"

inline void btDbvt::collideTV( const btDbvtNode* root,
          const btDbvtVolume& vol,
          ICollide& policy)
{

  if(root)
  {
   btDbvtVolume volume(vol);
   btAlignedObjectArray<const btDbvtNode*> stack;
   stack.resize(0);
   stack.reserve(SIMPLE_STACKSIZE);
   stack.push_back(root);
   do {
    const btDbvtNode* n=stack[stack.size()-1];
    stack.pop_back();
    if(Intersect(n->volume,volume))
    {
     if(n->isinternal())
     {
      stack.push_back(n->childs[0]);
      stack.push_back(n->childs[1]);
     }
     else
     {
      policy.Process(n);
     }
    }
   } while(stack.size()>0);
  }
}


inline void btDbvt::rayTestInternal( const btDbvtNode* root,
        const btVector3& rayFrom,
        const btVector3& rayTo,
        const btVector3& rayDirectionInverse,
        unsigned int signs[3],
        float lambda_max,
        const btVector3& aabbMin,
        const btVector3& aabbMax,
        ICollide& policy) const
{
        () rayTo;

 if(root)
 {
  btVector3 resultNormal;

  int depth=1;
  int treshold=DOUBLE_STACKSIZE-2;
  btAlignedObjectArray<const btDbvtNode*> stack;
  stack.resize(DOUBLE_STACKSIZE);
  stack[0]=root;
  btVector3 bounds[2];
  do
  {
   const btDbvtNode* node=stack[--depth];
   bounds[0] = node->volume.Mins()-aabbMax;
   bounds[1] = node->volume.Maxs()-aabbMin;
   float tmin=1.f,lambda_min=0.f;
   unsigned int result1=false;
   result1 = btRayAabb2(rayFrom,rayDirectionInverse,signs,bounds,tmin,lambda_min,lambda_max);
   if(result1)
   {
    if(node->isinternal())
    {
     if(depth>treshold)
     {
      stack.resize(stack.size()*2);
      treshold=stack.size()-2;
     }
     stack[depth++]=node->childs[0];
     stack[depth++]=node->childs[1];
    }
    else
    {
     policy.Process(node);
    }
   }
  } while(depth);
 }
}



inline void btDbvt::rayTest( const btDbvtNode* root,
        const btVector3& rayFrom,
        const btVector3& rayTo,
        ICollide& policy)
{

  if(root)
  {
   btVector3 rayDir = (rayTo-rayFrom);
   rayDir.normalize ();


   btVector3 rayDirectionInverse;
   rayDirectionInverse[0] = rayDir[0] == float(0.0) ? float(1e18f) : float(1.0) / rayDir[0];
   rayDirectionInverse[1] = rayDir[1] == float(0.0) ? float(1e18f) : float(1.0) / rayDir[1];
   rayDirectionInverse[2] = rayDir[2] == float(0.0) ? float(1e18f) : float(1.0) / rayDir[2];
   unsigned int signs[3] = { rayDirectionInverse[0] < 0.0, rayDirectionInverse[1] < 0.0, rayDirectionInverse[2] < 0.0};

   float lambda_max = rayDir.dot(rayTo-rayFrom);

   btVector3 resultNormal;

   btAlignedObjectArray<const btDbvtNode*> stack;

   int depth=1;
   int treshold=DOUBLE_STACKSIZE-2;

   stack.resize(DOUBLE_STACKSIZE);
   stack[0]=root;
   btVector3 bounds[2];
   do {
    const btDbvtNode* node=stack[--depth];

    bounds[0] = node->volume.Mins();
    bounds[1] = node->volume.Maxs();

    float tmin=1.f,lambda_min=0.f;
    unsigned int result1 = btRayAabb2(rayFrom,rayDirectionInverse,signs,bounds,tmin,lambda_min,lambda_max);







    if(result1)
    {
     if(node->isinternal())
     {
      if(depth>treshold)
      {
       stack.resize(stack.size()*2);
       treshold=stack.size()-2;
      }
      stack[depth++]=node->childs[0];
      stack[depth++]=node->childs[1];
     }
     else
     {
      policy.Process(node);
     }
    }
   } while(depth);

  }
}



inline void btDbvt::collideKDOP(const btDbvtNode* root,
         const btVector3* normals,
         const float* offsets,
         int count,
         ICollide& policy)
{

  if(root)
  {
   const int inside=(1<<count)-1;
   btAlignedObjectArray<sStkNP> stack;
   int signs[sizeof(unsigned)*8];
   ;
   for(int i=0;i<count;++i)
   {
    signs[i]= ((normals[i].x()>=0)?1:0)+
     ((normals[i].y()>=0)?2:0)+
     ((normals[i].z()>=0)?4:0);
   }
   stack.reserve(SIMPLE_STACKSIZE);
   stack.push_back(sStkNP(root,0));
   do {
    sStkNP se=stack[stack.size()-1];
    bool out=false;
    stack.pop_back();
    for(int i=0,j=1;(!out)&&(i<count);++i,j<<=1)
    {
     if(0==(se.mask&j))
     {
      const int side=se.node->volume.Classify(normals[i],offsets[i],signs[i]);
      switch(side)
      {
      case -1: out=true;break;
      case +1: se.mask|=j;break;
      }
     }
    }
    if(!out)
    {
     if((se.mask!=inside)&&(se.node->isinternal()))
     {
      stack.push_back(sStkNP(se.node->childs[0],se.mask));
      stack.push_back(sStkNP(se.node->childs[1],se.mask));
     }
     else
     {
      if(policy.AllLeaves(se.node)) enumLeaves(se.node,policy);
     }
    }
   } while(stack.size());
  }
}



inline void btDbvt::collideOCL( const btDbvtNode* root,
           const btVector3* normals,
           const float* offsets,
           const btVector3& sortaxis,
           int count,
           ICollide& policy,
           bool fsort)
{

  if(root)
  {
   const unsigned srtsgns=(sortaxis[0]>=0?1:0)+
    (sortaxis[1]>=0?2:0)+
    (sortaxis[2]>=0?4:0);
   const int inside=(1<<count)-1;
   btAlignedObjectArray<sStkNPS> stock;
   btAlignedObjectArray<int> ifree;
   btAlignedObjectArray<int> stack;
   int signs[sizeof(unsigned)*8];
   ;
   for(int i=0;i<count;++i)
   {
    signs[i]= ((normals[i].x()>=0)?1:0)+
     ((normals[i].y()>=0)?2:0)+
     ((normals[i].z()>=0)?4:0);
   }
   stock.reserve(SIMPLE_STACKSIZE);
   stack.reserve(SIMPLE_STACKSIZE);
   ifree.reserve(SIMPLE_STACKSIZE);
   stack.push_back(allocate(ifree,stock,sStkNPS(root,0,root->volume.ProjectMinimum(sortaxis,srtsgns))));
   do {
    const int id=stack[stack.size()-1];
    sStkNPS se=stock[id];
    stack.pop_back();ifree.push_back(id);
    if(se.mask!=inside)
    {
     bool out=false;
     for(int i=0,j=1;(!out)&&(i<count);++i,j<<=1)
     {
      if(0==(se.mask&j))
      {
       const int side=se.node->volume.Classify(normals[i],offsets[i],signs[i]);
       switch(side)
       {
       case -1: out=true;break;
       case +1: se.mask|=j;break;
       }
      }
     }
     if(out) continue;
    }
    if(policy.Descent(se.node))
    {
     if(se.node->isinternal())
     {
      const btDbvtNode* pns[]={ se.node->childs[0],se.node->childs[1]};
      sStkNPS nes[]={ sStkNPS(pns[0],se.mask,pns[0]->volume.ProjectMinimum(sortaxis,srtsgns)),
       sStkNPS(pns[1],se.mask,pns[1]->volume.ProjectMinimum(sortaxis,srtsgns))};
      const int q=nes[0].value<nes[1].value?1:0;
      int j=stack.size();
      if(fsort&&(j>0))
      {

       j=nearest(&stack[0],&stock[0],nes[q].value,0,stack.size());
       stack.push_back(0);

       memmove(&stack[j+1],&stack[j],sizeof(int)*(stack.size()-j-1));



       stack[j]=allocate(ifree,stock,nes[q]);

       j=nearest(&stack[0],&stock[0],nes[1-q].value,j,stack.size());
       stack.push_back(0);

       memmove(&stack[j+1],&stack[j],sizeof(int)*(stack.size()-j-1));



       stack[j]=allocate(ifree,stock,nes[1-q]);
      }
      else
      {
       stack.push_back(allocate(ifree,stock,nes[q]));
       stack.push_back(allocate(ifree,stock,nes[1-q]));
      }
     }
     else
     {
      policy.Process(se.node,se.value);
     }
    }
   } while(stack.size());
  }
}



inline void btDbvt::collideTU( const btDbvtNode* root,
          ICollide& policy)
{

  if(root)
  {
   btAlignedObjectArray<const btDbvtNode*> stack;
   stack.reserve(SIMPLE_STACKSIZE);
   stack.push_back(root);
   do {
    const btDbvtNode* n=stack[stack.size()-1];
    stack.pop_back();
    if(policy.Descent(n))
    {
     if(n->isinternal())
     { stack.push_back(n->childs[0]);stack.push_back(n->childs[1]); }
     else
     { policy.Process(n); }
    }
   } while(stack.size()>0);
  }
}
# 21 "../../bullet/src/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h" 2
# 42 "../../bullet/src/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h"
class btDbvtProxy : btBroadphaseProxy
 { public: 


 btDbvtNode* leaf;
 btDbvtProxy* links[2];
 int stage;

 btDbvtProxy(const btVector3& aabbMin,const btVector3& aabbMax,void* userPtr,short int collisionFilterGroup, short int collisionFilterMask) :
 btBroadphaseProxy(aabbMin,aabbMax,userPtr,collisionFilterGroup,collisionFilterMask)
 {
  links[0]=links[1]=0;
 }
};

typedef btAlignedObjectArray<btDbvtProxy*> btDbvtProxyArray;




class btDbvtBroadphase : btBroadphaseInterface
 { public: 

 enum {
  DYNAMIC_SET = 0,
  FIXED_SET = 1,
  STAGECOUNT = 2
 };

 btDbvt m_sets[2];
 btDbvtProxy* m_stageRoots[17];
 btOverlappingPairCache* m_paircache;
 float m_prediction;
 int m_stageCurrent;
 int m_fupdates;
 int m_dupdates;
 int m_cupdates;
 int m_newpairs;
 int m_fixedleft;
 unsigned m_updates_call;
 unsigned m_updates_done;
 float m_updates_ratio;
 int m_pid;
 int m_cid;
 int m_gid;
 bool m_releasepaircache;
 bool m_deferedcollide;
 bool m_needcleanup;
# 101 "../../bullet/src/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h"
 btDbvtBroadphase(btOverlappingPairCache* paircache=0);
 ~btDbvtBroadphase();
 void collide(btDispatcher* dispatcher);
 void optimize();


 btBroadphaseProxy* createProxy(const btVector3& aabbMin,const btVector3& aabbMax,int shapeType,void* userPtr,short int collisionFilterGroup,short int collisionFilterMask,btDispatcher* dispatcher,void* multiSapProxy);
 virtual void destroyProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher);
 virtual void setAabb(btBroadphaseProxy* proxy,const btVector3& aabbMin,const btVector3& aabbMax,btDispatcher* dispatcher);
 virtual void rayTest(const btVector3& rayFrom,const btVector3& rayTo, btBroadphaseRayCallback& rayCallback, const btVector3& aabbMin=btVector3, const btVector3& aabbMax = btVector3(0,0,0));
 virtual void aabbTest(const btVector3& aabbMin, const btVector3& aabbMax, btBroadphaseAabbCallback& callback);

 virtual void getAabb(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const;
 virtual void calculateOverlappingPairs(btDispatcher* dispatcher);
 virtual btOverlappingPairCache* getOverlappingPairCache();
 virtual const btOverlappingPairCache* getOverlappingPairCache() const;
 virtual void getBroadphaseAabb(btVector3& aabbMin,btVector3& aabbMax) const;
 virtual void printStats();



 virtual void resetPool(btDispatcher* dispatcher);

 void performDeferredRemoval(btDispatcher* dispatcher);

 void setVelocityPrediction(float prediction)
 {
  m_prediction = prediction;
 }
 float getVelocityPrediction() const
 {
  return m_prediction;
 }





 void setAabbForceUpdate( btBroadphaseProxy* absproxy,const btVector3& aabbMin,const btVector3& aabbMax,btDispatcher* );

 static void benchmark(btBroadphaseInterface*);


};
# 28 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h" 2







template <typename double>
class btAxisSweep3Internal : public btBroadphaseInterface
{
protected:

 double m_bpHandleMask;
 double m_handleSentinel;

public:

 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 class Edge
 {
 public:
  double m_pos;
  double m_handle;

  double IsMax() const {return static_cast<double>(m_pos & 1);}
 };

public:
 class Handle : public btBroadphaseProxy
 {
 public:
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };


  double m_minEdges[3], m_maxEdges[3];

  btBroadphaseProxy* m_dbvtProxy;


  inline void SetNextFree(double next) {m_minEdges[0] = next;}
  inline double GetNextFree() const {return m_minEdges[0];}
 };


protected:
 btVector3 m_worldAabbMin;
 btVector3 m_worldAabbMax;

 btVector3 m_quantize;

 double m_numHandles;
 double m_maxHandles;
 btAxisSweep3Internal<double>::Handle* m_pHandles;

 double m_firstFreeHandle;

 Edge* m_pEdges[3];
 void* m_pEdgesRawPtr[3];

 btOverlappingPairCache* m_pairCache;


 btOverlappingPairCallback* m_userPairCallback;

 bool m_ownsPairCache;

 int m_invalidPair;



 btDbvtBroadphase* m_raycastAccelerator;
 btOverlappingPairCache* m_nullPairCache;



 double allocHandle();
 void freeHandle(double handle);


 bool testOverlap2D(const btAxisSweep3Internal<double>::Handle* pHandleA, const btAxisSweep3Internal<double>::Handle* pHandleB,int axis0,int axis1);
# 119 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h"
 void sortMinDown(int axis, double edge, btDispatcher* dispatcher, bool updateOverlaps );
 void sortMinUp(int axis, double edge, btDispatcher* dispatcher, bool updateOverlaps );
 void sortMaxDown(int axis, double edge, btDispatcher* dispatcher, bool updateOverlaps );
 void sortMaxUp(int axis, double edge, btDispatcher* dispatcher, bool updateOverlaps );

public:

 btAxisSweep3Internal(const btVector3& worldAabbMin,const btVector3& worldAabbMax, double handleMask, double handleSentinel, double maxHandles = 16384, btOverlappingPairCache* pairCache=0,bool disableRaycastAccelerator = false);

 virtual ~btAxisSweep3Internal();

 double getNumHandles() const
 {
  return m_numHandles;
 }

 virtual void calculateOverlappingPairs(btDispatcher* dispatcher);

 double addHandle(const btVector3& aabbMin,const btVector3& aabbMax, void* pOwner,short int collisionFilterGroup,short int collisionFilterMask,btDispatcher* dispatcher,void* multiSapProxy);
 void removeHandle(double handle,btDispatcher* dispatcher);
 void updateHandle(double handle, const btVector3& aabbMin,const btVector3& aabbMax,btDispatcher* dispatcher);
 inline btAxisSweep3Internal<double>::Handle* getHandle(double index) const {return m_pHandles + index;}

 virtual void resetPool(btDispatcher* dispatcher);

 void processAllOverlappingPairs(btOverlapCallback* callback);


 virtual btBroadphaseProxy* createProxy( const btVector3& aabbMin, const btVector3& aabbMax,int shapeType,void* userPtr ,short int collisionFilterGroup,short int collisionFilterMask,btDispatcher* dispatcher,void* multiSapProxy);
 virtual void destroyProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher);
 virtual void setAabb(btBroadphaseProxy* proxy,const btVector3& aabbMin,const btVector3& aabbMax,btDispatcher* dispatcher);
 virtual void getAabb(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const;

 virtual void rayTest(const btVector3& rayFrom,const btVector3& rayTo, btBroadphaseRayCallback& rayCallback, const btVector3& aabbMin=btVector3, const btVector3& aabbMax = btVector3(0,0,0));
 virtual void aabbTest(const btVector3& aabbMin, const btVector3& aabbMax, btBroadphaseAabbCallback& callback);


 void quantize(double* out, const btVector3& point, int isMax) const;

 void unQuantize(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const;

 bool testAabbOverlap(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1);

 btOverlappingPairCache* getOverlappingPairCache()
 {
  return m_pairCache;
 }
 const btOverlappingPairCache* getOverlappingPairCache() const
 {
  return m_pairCache;
 }

 void setOverlappingPairUserCallback(btOverlappingPairCallback* pairCallback)
 {
  m_userPairCallback = pairCallback;
 }
 const btOverlappingPairCallback* getOverlappingPairUserCallback() const
 {
  return m_userPairCallback;
 }



 virtual void getBroadphaseAabb(btVector3& aabbMin,btVector3& aabbMax) const
 {
  aabbMin = m_worldAabbMin;
  aabbMax = m_worldAabbMax;
 }

 virtual void printStats()
 {






 }

};
# 230 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h"
template <typename double>
btBroadphaseProxy* btAxisSweep3Internal<double>::createProxy( const btVector3& aabbMin, const btVector3& aabbMax,int shapeType,void* userPtr,short int collisionFilterGroup,short int collisionFilterMask,btDispatcher* dispatcher,void* multiSapProxy)
{
  ()shapeType;
  double handleId = addHandle(aabbMin,aabbMax, userPtr,collisionFilterGroup,collisionFilterMask,dispatcher,multiSapProxy);

  btAxisSweep3Internal<double>::Handle* handle = getHandle(handleId);

  if (m_raycastAccelerator)
  {
   btBroadphaseProxy* rayProxy = m_raycastAccelerator->createProxy(aabbMin,aabbMax,shapeType,userPtr,collisionFilterGroup,collisionFilterMask,dispatcher,0);
   handle->m_dbvtProxy = rayProxy;
  }
  return handle;
}



template <typename double>
void btAxisSweep3Internal<double>::destroyProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher)
{
 btAxisSweep3Internal<double>::Handle* handle = static_cast<btAxisSweep3Internal<double>::Handle*>(proxy);
 if (m_raycastAccelerator)
  m_raycastAccelerator->destroyProxy(handle->m_dbvtProxy,dispatcher);
 removeHandle(static_cast<double>(handle->m_uniqueId), dispatcher);
}

template <typename double>
void btAxisSweep3Internal<double>::setAabb(btBroadphaseProxy* proxy,const btVector3& aabbMin,const btVector3& aabbMax,btDispatcher* dispatcher)
{
 btAxisSweep3Internal<double>::Handle* handle = static_cast<btAxisSweep3Internal<double>::Handle*>(proxy);
 handle->m_aabbMin = aabbMin;
 handle->m_aabbMax = aabbMax;
 updateHandle(static_cast<double>(handle->m_uniqueId), aabbMin, aabbMax,dispatcher);
 if (m_raycastAccelerator)
  m_raycastAccelerator->setAabb(handle->m_dbvtProxy,aabbMin,aabbMax,dispatcher);

}

template <typename double>
void btAxisSweep3Internal<double>::rayTest(const btVector3& rayFrom,const btVector3& rayTo, btBroadphaseRayCallback& rayCallback,const btVector3& aabbMin,const btVector3& aabbMax)
{
 if (m_raycastAccelerator)
 {
  m_raycastAccelerator->rayTest(rayFrom,rayTo,rayCallback,aabbMin,aabbMax);
 } else
 {

  double axis = 0;

  for (double i=1;i<m_numHandles*2+1;i++)
  {
   if (m_pEdges[axis][i].IsMax())
   {
    rayCallback.process(getHandle(m_pEdges[axis][i].m_handle));
   }
  }
 }
}

template <typename double>
void btAxisSweep3Internal<double>::aabbTest(const btVector3& aabbMin, const btVector3& aabbMax, btBroadphaseAabbCallback& callback)
{
 if (m_raycastAccelerator)
 {
  m_raycastAccelerator->aabbTest(aabbMin,aabbMax,callback);
 } else
 {

  double axis = 0;

  for (double i=1;i<m_numHandles*2+1;i++)
  {
   if (m_pEdges[axis][i].IsMax())
   {
    btAxisSweep3Internal<double>::Handle* handle = getHandle(m_pEdges[axis][i].m_handle);
    if (TestAabbAgainstAabb2(aabbMin,aabbMax,handle->m_aabbMin,handle->m_aabbMax))
    {
     callback.process(handle);
    }
   }
  }
 }
}



template <typename double>
void btAxisSweep3Internal<double>::getAabb(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const
{
 btAxisSweep3Internal<double>::Handle* pHandle = static_cast<btAxisSweep3Internal<double>::Handle*>(proxy);
 aabbMin = pHandle->m_aabbMin;
 aabbMax = pHandle->m_aabbMax;
}


template <typename double>
void btAxisSweep3Internal<double>::unQuantize(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const
{
 btAxisSweep3Internal<double>::Handle* pHandle = static_cast<btAxisSweep3Internal<double>::Handle*>(proxy);

 unsigned short vecInMin[3];
 unsigned short vecInMax[3];

 vecInMin[0] = m_pEdges[0][pHandle->m_minEdges[0]].m_pos ;
 vecInMax[0] = m_pEdges[0][pHandle->m_maxEdges[0]].m_pos +1 ;
 vecInMin[1] = m_pEdges[1][pHandle->m_minEdges[1]].m_pos ;
 vecInMax[1] = m_pEdges[1][pHandle->m_maxEdges[1]].m_pos +1 ;
 vecInMin[2] = m_pEdges[2][pHandle->m_minEdges[2]].m_pos ;
 vecInMax[2] = m_pEdges[2][pHandle->m_maxEdges[2]].m_pos +1 ;

 aabbMin.setValue((float)(vecInMin[0]) / (m_quantize.getX()),(float)(vecInMin[1]) / (m_quantize.getY()),(float)(vecInMin[2]) / (m_quantize.getZ()));
 aabbMin += m_worldAabbMin;

 aabbMax.setValue((float)(vecInMax[0]) / (m_quantize.getX()),(float)(vecInMax[1]) / (m_quantize.getY()),(float)(vecInMax[2]) / (m_quantize.getZ()));
 aabbMax += m_worldAabbMin;
}




template <typename double>
btAxisSweep3Internal<double>::btAxisSweep3Internal(const btVector3& worldAabbMin,const btVector3& worldAabbMax, double handleMask, double handleSentinel,double userMaxHandles, btOverlappingPairCache* pairCache , bool disableRaycastAccelerator)
:m_bpHandleMask(handleMask),
m_handleSentinel(handleSentinel),
m_pairCache(pairCache),
m_userPairCallback(0),
m_ownsPairCache(false),
m_invalidPair(0),
m_raycastAccelerator(0)
{
 double maxHandles = static_cast<double>(userMaxHandles+1);

 if (!m_pairCache)
 {
  void* ptr = btAlignedAllocInternal(sizeof(btHashedOverlappingPairCache),16);
  m_pairCache = new(ptr) btHashedOverlappingPairCache();
  m_ownsPairCache = true;
 }

 if (!disableRaycastAccelerator)
 {
  m_nullPairCache = new (btAlignedAllocInternal(sizeof(btNullPairCache),16)) btNullPairCache();
  m_raycastAccelerator = new (btAlignedAllocInternal(sizeof(btDbvtBroadphase),16)) btDbvtBroadphase(m_nullPairCache);
  m_raycastAccelerator->m_deferedcollide = true;
 }




 m_worldAabbMin = worldAabbMin;
 m_worldAabbMax = worldAabbMax;

 btVector3 aabbSize = m_worldAabbMax - m_worldAabbMin;

 double maxInt = m_handleSentinel;

 m_quantize = btVector3(float(maxInt),float(maxInt),float(maxInt)) / aabbSize;


 m_pHandles = new Handle[maxHandles];

 m_maxHandles = maxHandles;
 m_numHandles = 0;


 m_firstFreeHandle = 1;
 {
  for (double i = m_firstFreeHandle; i < maxHandles; i++)
   m_pHandles[i].SetNextFree(static_cast<double>(i + 1));
  m_pHandles[maxHandles - 1].SetNextFree(0);
 }

 {

  for (int i = 0; i < 3; i++)
  {
   m_pEdgesRawPtr[i] = btAlignedAllocInternal(sizeof(Edge)*maxHandles*2,16);
   m_pEdges[i] = new(m_pEdgesRawPtr[i]) Edge[maxHandles * 2];
  }
 }




 m_pHandles[0].m_clientObject = 0;

 for (int axis = 0; axis < 3; axis++)
 {
  m_pHandles[0].m_minEdges[axis] = 0;
  m_pHandles[0].m_maxEdges[axis] = 1;

  m_pEdges[axis][0].m_pos = 0;
  m_pEdges[axis][0].m_handle = 0;
  m_pEdges[axis][1].m_pos = m_handleSentinel;
  m_pEdges[axis][1].m_handle = 0;




 }

}

template <typename double>
btAxisSweep3Internal<double>::~btAxisSweep3Internal()
{
 if (m_raycastAccelerator)
 {
  m_nullPairCache->~btOverlappingPairCache();
  btAlignedFreeInternal(m_nullPairCache);
  m_raycastAccelerator->~btDbvtBroadphase();
  btAlignedFreeInternal(m_raycastAccelerator);
 }

 for (int i = 2; i >= 0; i--)
 {
  btAlignedFreeInternal(m_pEdgesRawPtr[i]);
 }
 delete [] m_pHandles;

 if (m_ownsPairCache)
 {
  m_pairCache->~btOverlappingPairCache();
  btAlignedFreeInternal(m_pairCache);
 }
}

template <typename double>
void btAxisSweep3Internal<double>::quantize(double* out, const btVector3& point, int isMax) const
{
# 472 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h"
 btVector3 v = (point - m_worldAabbMin) * m_quantize;
 out[0]=(v[0]<=0)?(double)isMax:(v[0]>=m_handleSentinel)?(double)((m_handleSentinel&m_bpHandleMask)|isMax):(double)(((double)v[0]&m_bpHandleMask)|isMax);
 out[1]=(v[1]<=0)?(double)isMax:(v[1]>=m_handleSentinel)?(double)((m_handleSentinel&m_bpHandleMask)|isMax):(double)(((double)v[1]&m_bpHandleMask)|isMax);
 out[2]=(v[2]<=0)?(double)isMax:(v[2]>=m_handleSentinel)?(double)((m_handleSentinel&m_bpHandleMask)|isMax):(double)(((double)v[2]&m_bpHandleMask)|isMax);

}


template <typename double>
double btAxisSweep3Internal<double>::allocHandle()
{
 ;

 double handle = m_firstFreeHandle;
 m_firstFreeHandle = getHandle(handle)->GetNextFree();
 m_numHandles++;

 return handle;
}

template <typename double>
void btAxisSweep3Internal<double>::freeHandle(double handle)
{
 ;

 getHandle(handle)->SetNextFree(m_firstFreeHandle);
 m_firstFreeHandle = handle;

 m_numHandles--;
}


template <typename double>
double btAxisSweep3Internal<double>::addHandle(const btVector3& aabbMin,const btVector3& aabbMax, void* pOwner,short int collisionFilterGroup,short int collisionFilterMask,btDispatcher* dispatcher,void* multiSapProxy)
{

 double min[3], max[3];
 quantize(min, aabbMin, 0);
 quantize(max, aabbMax, 1);


 double handle = allocHandle();


 btAxisSweep3Internal<double>::Handle* pHandle = getHandle(handle);

 pHandle->m_uniqueId = static_cast<int>(handle);

 pHandle->m_clientObject = pOwner;
 pHandle->m_collisionFilterGroup = collisionFilterGroup;
 pHandle->m_collisionFilterMask = collisionFilterMask;
 pHandle->m_multiSapParentProxy = multiSapProxy;


 double limit = static_cast<double>(m_numHandles * 2);



 for (double axis = 0; axis < 3; axis++)
 {

  m_pHandles[0].m_maxEdges[axis] += 2;

  m_pEdges[axis][limit + 1] = m_pEdges[axis][limit - 1];

  m_pEdges[axis][limit - 1].m_pos = min[axis];
  m_pEdges[axis][limit - 1].m_handle = handle;

  m_pEdges[axis][limit].m_pos = max[axis];
  m_pEdges[axis][limit].m_handle = handle;

  pHandle->m_minEdges[axis] = static_cast<double>(limit - 1);
  pHandle->m_maxEdges[axis] = limit;
 }


 sortMinDown(0, pHandle->m_minEdges[0], dispatcher,false);
 sortMaxDown(0, pHandle->m_maxEdges[0], dispatcher,false);
 sortMinDown(1, pHandle->m_minEdges[1], dispatcher,false);
 sortMaxDown(1, pHandle->m_maxEdges[1], dispatcher,false);
 sortMinDown(2, pHandle->m_minEdges[2], dispatcher,true);
 sortMaxDown(2, pHandle->m_maxEdges[2], dispatcher,true);


 return handle;
}


template <typename double>
void btAxisSweep3Internal<double>::removeHandle(double handle,btDispatcher* dispatcher)
{

 btAxisSweep3Internal<double>::Handle* pHandle = getHandle(handle);




 if (!m_pairCache->hasDeferredRemoval())
 {
  m_pairCache->removeOverlappingPairsContainingProxy(pHandle,dispatcher);
 }


 int limit = static_cast<int>(m_numHandles * 2);

 int axis;

 for (axis = 0;axis<3;axis++)
 {
  m_pHandles[0].m_maxEdges[axis] -= 2;
 }


 for ( axis = 0; axis < 3; axis++)
 {
  Edge* pEdges = m_pEdges[axis];
  double max = pHandle->m_maxEdges[axis];
  pEdges[max].m_pos = m_handleSentinel;

  sortMaxUp(axis,max,dispatcher,false);


  double i = pHandle->m_minEdges[axis];
  pEdges[i].m_pos = m_handleSentinel;


  sortMinUp(axis,i,dispatcher,false);

  pEdges[limit-1].m_handle = 0;
  pEdges[limit-1].m_pos = m_handleSentinel;






 }



 freeHandle(handle);


}

template <typename double>
void btAxisSweep3Internal<double>::resetPool(btDispatcher* dispatcher)
{
 if (m_numHandles == 0)
 {
  m_firstFreeHandle = 1;
  {
   for (double i = m_firstFreeHandle; i < m_maxHandles; i++)
    m_pHandles[i].SetNextFree(static_cast<double>(i + 1));
   m_pHandles[m_maxHandles - 1].SetNextFree(0);
  }
 }
}


extern int gOverlappingPairs;


template <typename double>
void btAxisSweep3Internal<double>::calculateOverlappingPairs(btDispatcher* dispatcher)
{

 if (m_pairCache->hasDeferredRemoval())
 {

  btBroadphasePairArray& overlappingPairArray = m_pairCache->getOverlappingPairArray();


  overlappingPairArray.quickSort(btBroadphasePairSortPredicate());

  overlappingPairArray.resize(overlappingPairArray.size() - m_invalidPair);
  m_invalidPair = 0;


  int i;

  btBroadphasePair previousPair;
  previousPair.m_pProxy0 = 0;
  previousPair.m_pProxy1 = 0;
  previousPair.m_algorithm = 0;


  for (i=0;i<overlappingPairArray.size();i++)
  {

   btBroadphasePair& pair = overlappingPairArray[i];

   bool isDuplicate = (pair == previousPair);

   previousPair = pair;

   bool needsRemoval = false;

   if (!isDuplicate)
   {

    bool hasOverlap = testAabbOverlap(pair.m_pProxy0,pair.m_pProxy1);

    if (hasOverlap)
    {
     needsRemoval = false;
    } else
    {
     needsRemoval = true;
    }
   } else
   {

    needsRemoval = true;

    ;
   }

   if (needsRemoval)
   {
    m_pairCache->cleanOverlappingPair(pair,dispatcher);



    pair.m_pProxy0 = 0;
    pair.m_pProxy1 = 0;
    m_invalidPair++;
    gOverlappingPairs--;
   }

  }






  overlappingPairArray.quickSort(btBroadphasePairSortPredicate());

  overlappingPairArray.resize(overlappingPairArray.size() - m_invalidPair);
  m_invalidPair = 0;



 }

}


template <typename double>
bool btAxisSweep3Internal<double>::testAabbOverlap(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1)
{
 const btAxisSweep3Internal<double>::Handle* pHandleA = static_cast<btAxisSweep3Internal<double>::Handle*>(proxy0);
 const btAxisSweep3Internal<double>::Handle* pHandleB = static_cast<btAxisSweep3Internal<double>::Handle*>(proxy1);



 for (int axis = 0; axis < 3; axis++)
 {
  if (pHandleA->m_maxEdges[axis] < pHandleB->m_minEdges[axis] ||
   pHandleB->m_maxEdges[axis] < pHandleA->m_minEdges[axis])
  {
   return false;
  }
 }
 return true;
}

template <typename double>
bool btAxisSweep3Internal<double>::testOverlap2D(const btAxisSweep3Internal<double>::Handle* pHandleA, const btAxisSweep3Internal<double>::Handle* pHandleB,int axis0,int axis1)
{


 if (pHandleA->m_maxEdges[axis0] < pHandleB->m_minEdges[axis0] ||
  pHandleB->m_maxEdges[axis0] < pHandleA->m_minEdges[axis0] ||
  pHandleA->m_maxEdges[axis1] < pHandleB->m_minEdges[axis1] ||
  pHandleB->m_maxEdges[axis1] < pHandleA->m_minEdges[axis1])
 {
  return false;
 }
 return true;
}

template <typename double>
void btAxisSweep3Internal<double>::updateHandle(double handle, const btVector3& aabbMin,const btVector3& aabbMax,btDispatcher* dispatcher)
{



 btAxisSweep3Internal<double>::Handle* pHandle = getHandle(handle);


 double min[3], max[3];
 quantize(min, aabbMin, 0);
 quantize(max, aabbMax, 1);


 for (int axis = 0; axis < 3; axis++)
 {
  double emin = pHandle->m_minEdges[axis];
  double emax = pHandle->m_maxEdges[axis];

  int dmin = (int)min[axis] - (int)m_pEdges[axis][emin].m_pos;
  int dmax = (int)max[axis] - (int)m_pEdges[axis][emax].m_pos;

  m_pEdges[axis][emin].m_pos = min[axis];
  m_pEdges[axis][emax].m_pos = max[axis];


  if (dmin < 0)
   sortMinDown(axis, emin,dispatcher,true);

  if (dmax > 0)
   sortMaxUp(axis, emax,dispatcher,true);


  if (dmin > 0)
   sortMinUp(axis, emin,dispatcher,true);

  if (dmax < 0)
   sortMaxDown(axis, emax,dispatcher,true);




 }


}





template <typename double>
void btAxisSweep3Internal<double>::sortMinDown(int axis, double edge, btDispatcher* , bool updateOverlaps)
{

 Edge* pEdge = m_pEdges[axis] + edge;
 Edge* pPrev = pEdge - 1;
 btAxisSweep3Internal<double>::Handle* pHandleEdge = getHandle(pEdge->m_handle);

 while (pEdge->m_pos < pPrev->m_pos)
 {
  btAxisSweep3Internal<double>::Handle* pHandlePrev = getHandle(pPrev->m_handle);

  if (pPrev->IsMax())
  {

   const int axis1 = (1 << axis) & 3;
   const int axis2 = (1 << axis1) & 3;
   if (updateOverlaps && testOverlap2D(pHandleEdge, pHandlePrev,axis1,axis2))
   {
    m_pairCache->addOverlappingPair(pHandleEdge,pHandlePrev);
    if (m_userPairCallback)
     m_userPairCallback->addOverlappingPair(pHandleEdge,pHandlePrev);



   }


   pHandlePrev->m_maxEdges[axis]++;
  }
  else
   pHandlePrev->m_minEdges[axis]++;

  pHandleEdge->m_minEdges[axis]--;


  Edge swap = *pEdge;
  *pEdge = *pPrev;
  *pPrev = swap;


  pEdge--;
  pPrev--;
 }





}


template <typename double>
void btAxisSweep3Internal<double>::sortMinUp(int axis, double edge, btDispatcher* dispatcher, bool updateOverlaps)
{
 Edge* pEdge = m_pEdges[axis] + edge;
 Edge* pNext = pEdge + 1;
 btAxisSweep3Internal<double>::Handle* pHandleEdge = getHandle(pEdge->m_handle);

 while (pNext->m_handle && (pEdge->m_pos >= pNext->m_pos))
 {
  btAxisSweep3Internal<double>::Handle* pHandleNext = getHandle(pNext->m_handle);

  if (pNext->IsMax())
  {
   btAxisSweep3Internal<double>::Handle* handle0 = getHandle(pEdge->m_handle);
   btAxisSweep3Internal<double>::Handle* handle1 = getHandle(pNext->m_handle);
   const int axis1 = (1 << axis) & 3;
   const int axis2 = (1 << axis1) & 3;


   if (updateOverlaps

    && testOverlap2D(handle0,handle1,axis1,axis2)

    )
   {


    m_pairCache->removeOverlappingPair(handle0,handle1,dispatcher);
    if (m_userPairCallback)
     m_userPairCallback->removeOverlappingPair(handle0,handle1,dispatcher);

   }



   pHandleNext->m_maxEdges[axis]--;
  }
  else
   pHandleNext->m_minEdges[axis]--;

  pHandleEdge->m_minEdges[axis]++;


  Edge swap = *pEdge;
  *pEdge = *pNext;
  *pNext = swap;


  pEdge++;
  pNext++;
 }


}


template <typename double>
void btAxisSweep3Internal<double>::sortMaxDown(int axis, double edge, btDispatcher* dispatcher, bool updateOverlaps)
{

 Edge* pEdge = m_pEdges[axis] + edge;
 Edge* pPrev = pEdge - 1;
 btAxisSweep3Internal<double>::Handle* pHandleEdge = getHandle(pEdge->m_handle);

 while (pEdge->m_pos < pPrev->m_pos)
 {
  btAxisSweep3Internal<double>::Handle* pHandlePrev = getHandle(pPrev->m_handle);

  if (!pPrev->IsMax())
  {

   btAxisSweep3Internal<double>::Handle* handle0 = getHandle(pEdge->m_handle);
   btAxisSweep3Internal<double>::Handle* handle1 = getHandle(pPrev->m_handle);
   const int axis1 = (1 << axis) & 3;
   const int axis2 = (1 << axis1) & 3;

   if (updateOverlaps

    && testOverlap2D(handle0,handle1,axis1,axis2)

    )
   {



    m_pairCache->removeOverlappingPair(handle0,handle1,dispatcher);
    if (m_userPairCallback)
     m_userPairCallback->removeOverlappingPair(handle0,handle1,dispatcher);



   }


   pHandlePrev->m_minEdges[axis]++;;
  }
  else
   pHandlePrev->m_maxEdges[axis]++;

  pHandleEdge->m_maxEdges[axis]--;


  Edge swap = *pEdge;
  *pEdge = *pPrev;
  *pPrev = swap;


  pEdge--;
  pPrev--;
 }






}


template <typename double>
void btAxisSweep3Internal<double>::sortMaxUp(int axis, double edge, btDispatcher* , bool updateOverlaps)
{
 Edge* pEdge = m_pEdges[axis] + edge;
 Edge* pNext = pEdge + 1;
 btAxisSweep3Internal<double>::Handle* pHandleEdge = getHandle(pEdge->m_handle);

 while (pNext->m_handle && (pEdge->m_pos >= pNext->m_pos))
 {
  btAxisSweep3Internal<double>::Handle* pHandleNext = getHandle(pNext->m_handle);

  const int axis1 = (1 << axis) & 3;
  const int axis2 = (1 << axis1) & 3;

  if (!pNext->IsMax())
  {

   if (updateOverlaps && testOverlap2D(pHandleEdge, pHandleNext,axis1,axis2))
   {
    btAxisSweep3Internal<double>::Handle* handle0 = getHandle(pEdge->m_handle);
    btAxisSweep3Internal<double>::Handle* handle1 = getHandle(pNext->m_handle);
    m_pairCache->addOverlappingPair(handle0,handle1);
    if (m_userPairCallback)
     m_userPairCallback->addOverlappingPair(handle0,handle1);
   }


   pHandleNext->m_minEdges[axis]--;
  }
  else
   pHandleNext->m_maxEdges[axis]--;

  pHandleEdge->m_maxEdges[axis]++;


  Edge swap = *pEdge;
  *pEdge = *pNext;
  *pNext = swap;


  pEdge++;
  pNext++;
 }

}
# 1031 "../../bullet/src/BulletCollision/BroadphaseCollision/btAxisSweep3.h"
class btAxisSweep3 : public btAxisSweep3Internal<unsigned short int>
{
public:

 btAxisSweep3(const btVector3& worldAabbMin,const btVector3& worldAabbMax, unsigned short int maxHandles = 16384, btOverlappingPairCache* pairCache = 0, bool disableRaycastAccelerator = false);

};




class bt32BitAxisSweep3 : public btAxisSweep3Internal<unsigned int>
{
public:

 bt32BitAxisSweep3(const btVector3& worldAabbMin,const btVector3& worldAabbMax, unsigned int maxHandles = 1500000, btOverlappingPairCache* pairCache = 0, bool disableRaycastAccelerator = false);

};
# 56 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btMultiSapBroadphase.h" 1
# 23 "../../bullet/src/BulletCollision/BroadphaseCollision/btMultiSapBroadphase.h"
class btBroadphaseInterface;
class btSimpleBroadphase;


typedef btAlignedObjectArray<btBroadphaseInterface*> btSapBroadphaseArray;







class btMultiSapBroadphase :public btBroadphaseInterface
{
 btSapBroadphaseArray m_sapBroadphases;

 btSimpleBroadphase* m_simpleBroadphase;

 btOverlappingPairCache* m_overlappingPairs;

 class btQuantizedBvh* m_optimizedAabbTree;


 bool m_ownsPairCache;

 btOverlapFilterCallback* m_filterCallback;

 int m_invalidPair;

 class btBridgeProxy
  { public: 
  btBroadphaseProxy* m_childProxy;
  btBroadphaseInterface* m_childBroadphase;
 };


public:

 class btMultiSapProxy : public btBroadphaseProxy
  { public: 


  btAlignedObjectArray<btBridgeProxy*> m_bridgeProxies;
  btVector3 m_aabbMin;
  btVector3 m_aabbMax;

  int m_shapeType;





  btMultiSapProxy(const btVector3& aabbMin, const btVector3& aabbMax,int shapeType,void* userPtr, short int collisionFilterGroup,short int collisionFilterMask)
   :btBroadphaseProxy(aabbMin,aabbMax,userPtr,collisionFilterGroup,collisionFilterMask),
   m_aabbMin(aabbMin),
   m_aabbMax(aabbMax),
   m_shapeType(shapeType)
  {
   m_multiSapParentProxy =this;
  }


 };

protected:


 btAlignedObjectArray<btMultiSapProxy*> m_multiSapProxies;

public:

 btMultiSapBroadphase(int maxProxies = 16384,btOverlappingPairCache* pairCache=0);


 btSapBroadphaseArray& getBroadphaseArray()
 {
  return m_sapBroadphases;
 }

 const btSapBroadphaseArray& getBroadphaseArray() const
 {
  return m_sapBroadphases;
 }

 virtual ~btMultiSapBroadphase();

 virtual btBroadphaseProxy* createProxy( const btVector3& aabbMin, const btVector3& aabbMax,int shapeType,void* userPtr, short int collisionFilterGroup,short int collisionFilterMask, btDispatcher* dispatcher,void* multiSapProxy);
 virtual void destroyProxy(btBroadphaseProxy* proxy,btDispatcher* dispatcher);
 virtual void setAabb(btBroadphaseProxy* proxy,const btVector3& aabbMin,const btVector3& aabbMax, btDispatcher* dispatcher);
 virtual void getAabb(btBroadphaseProxy* proxy,btVector3& aabbMin, btVector3& aabbMax ) const;

 virtual void rayTest(const btVector3& rayFrom,const btVector3& rayTo, btBroadphaseRayCallback& rayCallback,const btVector3& aabbMin=btVector3,const btVector3& aabbMax=btVector3);

 void addToChildBroadphase(btMultiSapProxy* parentMultiSapProxy, btBroadphaseProxy* childProxy, btBroadphaseInterface* childBroadphase);


 virtual void calculateOverlappingPairs(btDispatcher* dispatcher);

 bool testAabbOverlap(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1);

 virtual btOverlappingPairCache* getOverlappingPairCache()
 {
  return m_overlappingPairs;
 }
 virtual const btOverlappingPairCache* getOverlappingPairCache() const
 {
  return m_overlappingPairs;
 }



 virtual void getBroadphaseAabb(btVector3& aabbMin,btVector3& aabbMax) const
 {
  aabbMin.setValue(-1e18f,-1e18f,-1e18f);
  aabbMax.setValue(1e18f,1e18f,1e18f);
 }

 void buildTree(const btVector3& bvhAabbMin,const btVector3& bvhAabbMax);

 virtual void printStats();

 void quicksort (btBroadphasePairArray& a, int lo, int hi);


 virtual void resetPool(btDispatcher* dispatcher);

};
# 57 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/BulletCollision/BroadphaseCollision/btDbvtBroadphase.h" 1
# 58 "../../bullet/src/btBulletCollisionCommon.h" 2


# 1 "../../bullet/src/LinearMath/btQuaternion.h" 1
# 61 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/LinearMath/btTransform.h" 1
# 62 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/LinearMath/btDefaultMotionState.h" 1



# 1 "../../bullet/src/LinearMath/btMotionState.h" 1
# 5 "../../bullet/src/LinearMath/btDefaultMotionState.h" 2


class btDefaultMotionState : public btMotionState
 { public: 
 btTransform m_graphicsWorldTrans;
 btTransform m_centerOfMassOffset;
 btTransform m_startWorldTrans;
 void* m_userPointer;

 btDefaultMotionState(const btTransform& startTrans = btTransform::getIdentity,const btTransform& centerOfMassOffset = btTransform::getIdentity)
  : m_graphicsWorldTrans(startTrans),
  m_centerOfMassOffset(centerOfMassOffset),
  m_startWorldTrans(startTrans),
  m_userPointer(0)

 {
 }


 virtual void getWorldTransform(btTransform& centerOfMassWorldTrans ) const
 {
   centerOfMassWorldTrans = m_centerOfMassOffset.inverse() * m_graphicsWorldTrans ;
 }



 virtual void setWorldTransform(const btTransform& centerOfMassWorldTrans)
 {
   m_graphicsWorldTrans = centerOfMassWorldTrans * m_centerOfMassOffset ;
 }



};
# 63 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/LinearMath/btQuickprof.h" 1
# 21 "../../bullet/src/LinearMath/btQuickprof.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 33 "/usr/include/libio.h" 2 3 4
# 50 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 51 "/usr/include/libio.h" 2 3 4
# 145 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 155 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





class _IO_marker  { public: 
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 178 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 246 "/usr/include/libio.h" 3 4
class _IO_FILE  { public: 
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 294 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 303 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 339 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 435 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 527 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();








extern FILE *tmpfile () ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 () ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall ();









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar ();

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked ();
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 943 "/usr/include/stdio.h" 3 4
}
# 22 "../../bullet/src/LinearMath/btQuickprof.h" 2
# 1 "../../bullet/src/LinearMath/float.h" 1
# 23 "../../bullet/src/LinearMath/btQuickprof.h" 2
# 1 "../../bullet/src/LinearMath/btAlignedAllocator.h" 1
# 24 "../../bullet/src/LinearMath/btQuickprof.h" 2
# 35 "../../bullet/src/LinearMath/btQuickprof.h"
class btClock
{
public:
 btClock();

 btClock(const btClock& other);
 btClock& operator=(const btClock& other);

 ~btClock();


 void reset();



 unsigned long int getTimeMilliseconds();



 unsigned long int getTimeMicroseconds();
private:
 struct btClockData* m_data;
};







class CProfileNode {

public:
 CProfileNode( const char * name, CProfileNode * parent );
 ~CProfileNode();

 CProfileNode * Get_Sub_Node( const char * name );

 CProfileNode * Get_Parent() { return Parent; }
 CProfileNode * Get_Sibling() { return Sibling; }
 CProfileNode * Get_Child() { return Child; }

 void CleanupMemory();
 void Reset();
 void Call();
 bool Return();

 const char * Get_Name() { return Name; }
 int Get_Total_Calls() { return TotalCalls; }
 float Get_Total_Time() { return TotalTime; }

protected:

 const char * Name;
 int TotalCalls;
 float TotalTime;
 unsigned long int StartTime;
 int RecursionCounter;

 CProfileNode * Parent;
 CProfileNode * Child;
 CProfileNode * Sibling;
};


class CProfileIterator
{
public:

 void First();
 void Next();
 bool Is_Done();
 bool Is_Root() { return (CurrentParent->Get_Parent() == 0); }

 void Enter_Child( int index );
 void Enter_Largest_Child();
 void Enter_Parent();


 const char * Get_Current_Name() { return CurrentChild->Get_Name(); }
 int Get_Current_Total_Calls() { return CurrentChild->Get_Total_Calls(); }
 float Get_Current_Total_Time() { return CurrentChild->Get_Total_Time(); }


 const char * Get_Current_Parent_Name() { return CurrentParent->Get_Name(); }
 int Get_Current_Parent_Total_Calls() { return CurrentParent->Get_Total_Calls(); }
 float Get_Current_Parent_Total_Time() { return CurrentParent->Get_Total_Time(); }

protected:

 CProfileNode * CurrentParent;
 CProfileNode * CurrentChild;

 CProfileIterator( CProfileNode * start );
 friend class CProfileManager;
};



class CProfileManager {
public:
 static void Start_Profile( const char * name );
 static void Stop_Profile();

 static void CleanupMemory()
 {
  Root.CleanupMemory();
 }

 static void Reset();
 static void Increment_Frame_Counter();
 static int Get_Frame_Count_Since_Reset() { return FrameCounter; }
 static float Get_Time_Since_Reset();

 static CProfileIterator * Get_Iterator()
 {

  return new CProfileIterator( &Root );
 }
 static void Release_Iterator( CProfileIterator * iterator ) { delete ( iterator); }

 static void dumpRecursive(CProfileIterator* profileIterator, int spacing);

 static void dumpAll();

private:
 static CProfileNode Root;
 static CProfileNode * CurrentNode;
 static int FrameCounter;
 static unsigned long int ResetTime;
};




class CProfileSample {
public:
 CProfileSample( const char * name )
 {
  CProfileManager::Start_Profile( name );
 }

 ~CProfileSample()
 {
  CProfileManager::Stop_Profile();
 }
};
# 64 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/LinearMath/btIDebugDraw.h" 1
# 20 "../../bullet/src/LinearMath/btIDebugDraw.h"
# 1 "../../bullet/src/LinearMath/btVector3.h" 1
# 21 "../../bullet/src/LinearMath/btIDebugDraw.h" 2
# 1 "../../bullet/src/LinearMath/btTransform.h" 1
# 22 "../../bullet/src/LinearMath/btIDebugDraw.h" 2






class btIDebugDraw
{
 public:

 enum DebugDrawModes
 {
  DBG_NoDebug=0,
  DBG_DrawWireframe = 1,
  DBG_DrawAabb=2,
  DBG_DrawFeaturesText=4,
  DBG_DrawContactPoints=8,
  DBG_NoDeactivation=16,
  DBG_NoHelpText = 32,
  DBG_DrawText=64,
  DBG_ProfileTimings = 128,
  DBG_EnableSatComparison = 256,
  DBG_DisableBulletLCP = 512,
  DBG_EnableCCD = 1024,
  DBG_DrawConstraints = (1 << 11),
  DBG_DrawConstraintLimits = (1 << 12),
  DBG_FastWireframe = (1<<13),
  DBG_MAX_DEBUG_DRAW_MODE
 };

 virtual ~btIDebugDraw() {};

 virtual void drawLine(const btVector3& from,const btVector3& to,const btVector3& color)=0;

 virtual void drawLine(const btVector3& from,const btVector3& to, const btVector3& fromColor, const btVector3& toColor)
 {
        () toColor;
  drawLine (from, to, fromColor);
 }

 virtual void drawSphere(float radius, const btTransform& transform, const btVector3& color)
 {
  btVector3 start = transform.getOrigin();

  const btVector3 xoffs = transform.getBasis() * btVector3(radius,0,0);
  const btVector3 yoffs = transform.getBasis() * btVector3(0,radius,0);
  const btVector3 zoffs = transform.getBasis() * btVector3(0,0,radius);


  drawLine(start-xoffs, start+yoffs, color);
  drawLine(start+yoffs, start+xoffs, color);
  drawLine(start+xoffs, start-yoffs, color);
  drawLine(start-yoffs, start-xoffs, color);


  drawLine(start-xoffs, start+zoffs, color);
  drawLine(start+zoffs, start+xoffs, color);
  drawLine(start+xoffs, start-zoffs, color);
  drawLine(start-zoffs, start-xoffs, color);


  drawLine(start-yoffs, start+zoffs, color);
  drawLine(start+zoffs, start+yoffs, color);
  drawLine(start+yoffs, start-zoffs, color);
  drawLine(start-zoffs, start-yoffs, color);
 }

 virtual void drawSphere (const btVector3& p, float radius, const btVector3& color)
 {
  btTransform tr;
  tr.setIdentity();
  tr.setOrigin(p);
  drawSphere(radius,tr,color);
 }

 virtual void drawTriangle(const btVector3& v0,const btVector3& v1,const btVector3& v2,const btVector3& ,const btVector3& ,const btVector3& ,const btVector3& color, float alpha)
 {
  drawTriangle(v0,v1,v2,color,alpha);
 }
 virtual void drawTriangle(const btVector3& v0,const btVector3& v1,const btVector3& v2,const btVector3& color, float )
 {
  drawLine(v0,v1,color);
  drawLine(v1,v2,color);
  drawLine(v2,v0,color);
 }

 virtual void drawContactPoint(const btVector3& PointOnB,const btVector3& normalOnB,float distance,int lifeTime,const btVector3& color)=0;

 virtual void reportErrorWarning(const char* warningString) = 0;

 virtual void draw3dText(const btVector3& location,const char* textString) = 0;

 virtual void setDebugMode(int debugMode) =0;

 virtual int getDebugMode() const = 0;

 virtual void drawAabb(const btVector3& from,const btVector3& to,const btVector3& color)
 {

  btVector3 halfExtents = (to-from)* 0.5f;
  btVector3 center = (to+from) *0.5f;
  int i,j;

  btVector3 edgecoord(1.f,1.f,1.f),pa,pb;
  for (i=0;i<4;i++)
  {
   for (j=0;j<3;j++)
   {
    pa = btVector3(edgecoord[0]*halfExtents[0], edgecoord[1]*halfExtents[1],
     edgecoord[2]*halfExtents[2]);
    pa+=center;

    int othercoord = j%3;
    edgecoord[othercoord]*=-1.f;
    pb = btVector3(edgecoord[0]*halfExtents[0], edgecoord[1]*halfExtents[1],
     edgecoord[2]*halfExtents[2]);
    pb+=center;

    drawLine(pa,pb,color);
   }
   edgecoord = btVector3(-1.f,-1.f,-1.f);
   if (i<3)
    edgecoord[i]*=-1.f;
  }
 }
 virtual void drawTransform(const btTransform& transform, float orthoLen)
 {
  btVector3 start = transform.getOrigin();
  drawLine(start, start+transform.getBasis() * btVector3(orthoLen, 0, 0), btVector3(0.7f,0,0));
  drawLine(start, start+transform.getBasis() * btVector3(0, orthoLen, 0), btVector3(0,0.7f,0));
  drawLine(start, start+transform.getBasis() * btVector3(0, 0, orthoLen), btVector3(0,0,0.7f));
 }

 virtual void drawArc(const btVector3& center, const btVector3& normal, const btVector3& axis, float radiusA, float radiusB, float minAngle, float maxAngle,
    const btVector3& color, bool drawSect, float stepDegrees = float(10.f))
 {
  const btVector3& vx = axis;
  btVector3 vy = normal.cross(axis);
  float step = stepDegrees * (float(6.283185307179586232) / float(360.0));
  int nSteps = (int)((maxAngle - minAngle) / step);
  if(!nSteps) nSteps = 1;
  btVector3 prev = center + radiusA * vx * btCos(minAngle) + radiusB * vy * btSin(minAngle);
  if(drawSect)
  {
   drawLine(center, prev, color);
  }
  for(int i = 1; i <= nSteps; i++)
  {
   float angle = minAngle + (maxAngle - minAngle) * float(i) / float(nSteps);
   btVector3 next = center + radiusA * vx * btCos(angle) + radiusB * vy * btSin(angle);
   drawLine(prev, next, color);
   prev = next;
  }
  if(drawSect)
  {
   drawLine(center, prev, color);
  }
 }
 virtual void drawSpherePatch(const btVector3& center, const btVector3& up, const btVector3& axis, float radius,
  float minTh, float maxTh, float minPs, float maxPs, const btVector3& color, float stepDegrees = float(10.f))
 {
  btVector3 vA[74];
  btVector3 vB[74];
  btVector3 *pvA = vA, *pvB = vB, *pT;
  btVector3 npole = center + up * radius;
  btVector3 spole = center - up * radius;
  btVector3 arcStart;
  float step = stepDegrees * (float(6.283185307179586232) / float(360.0));
  const btVector3& kv = up;
  const btVector3& iv = axis;
  btVector3 jv = kv.cross(iv);
  bool drawN = false;
  bool drawS = false;
  if(minTh <= -(float(6.283185307179586232) * float(0.25)))
  {
   minTh = -(float(6.283185307179586232) * float(0.25)) + step;
   drawN = true;
  }
  if(maxTh >= (float(6.283185307179586232) * float(0.25)))
  {
   maxTh = (float(6.283185307179586232) * float(0.25)) - step;
   drawS = true;
  }
  if(minTh > maxTh)
  {
   minTh = -(float(6.283185307179586232) * float(0.25)) + step;
   maxTh = (float(6.283185307179586232) * float(0.25)) - step;
   drawN = drawS = true;
  }
  int n_hor = (int)((maxTh - minTh) / step) + 1;
  if(n_hor < 2) n_hor = 2;
  float step_h = (maxTh - minTh) / float(n_hor - 1);
  bool isClosed = false;
  if(minPs > maxPs)
  {
   minPs = -(float(6.283185307179586232) * float(0.5)) + step;
   maxPs = (float(6.283185307179586232) * float(0.5));
   isClosed = true;
  }
  else if((maxPs - minPs) >= (float(6.283185307179586232) * float(0.5)) * float(2.f))
  {
   isClosed = true;
  }
  else
  {
   isClosed = false;
  }
  int n_vert = (int)((maxPs - minPs) / step) + 1;
  if(n_vert < 2) n_vert = 2;
  float step_v = (maxPs - minPs) / float(n_vert - 1);
  for(int i = 0; i < n_hor; i++)
  {
   float th = minTh + float(i) * step_h;
   float sth = radius * btSin(th);
   float cth = radius * btCos(th);
   for(int j = 0; j < n_vert; j++)
   {
    float psi = minPs + float(j) * step_v;
    float sps = btSin(psi);
    float cps = btCos(psi);
    pvB[j] = center + cth * cps * iv + cth * sps * jv + sth * kv;
    if(i)
    {
     drawLine(pvA[j], pvB[j], color);
    }
    else if(drawS)
    {
     drawLine(spole, pvB[j], color);
    }
    if(j)
    {
     drawLine(pvB[j-1], pvB[j], color);
    }
    else
    {
     arcStart = pvB[j];
    }
    if((i == (n_hor - 1)) && drawN)
    {
     drawLine(npole, pvB[j], color);
    }
    if(isClosed)
    {
     if(j == (n_vert-1))
     {
      drawLine(arcStart, pvB[j], color);
     }
    }
    else
    {
     if(((!i) || (i == (n_hor-1))) && ((!j) || (j == (n_vert-1))))
     {
      drawLine(center, pvB[j], color);
     }
    }
   }
   pT = pvA; pvA = pvB; pvB = pT;
  }
 }

 virtual void drawBox(const btVector3& bbMin, const btVector3& bbMax, const btVector3& color)
 {
  drawLine(btVector3(bbMin[0], bbMin[1], bbMin[2]), btVector3(bbMax[0], bbMin[1], bbMin[2]), color);
  drawLine(btVector3(bbMax[0], bbMin[1], bbMin[2]), btVector3(bbMax[0], bbMax[1], bbMin[2]), color);
  drawLine(btVector3(bbMax[0], bbMax[1], bbMin[2]), btVector3(bbMin[0], bbMax[1], bbMin[2]), color);
  drawLine(btVector3(bbMin[0], bbMax[1], bbMin[2]), btVector3(bbMin[0], bbMin[1], bbMin[2]), color);
  drawLine(btVector3(bbMin[0], bbMin[1], bbMin[2]), btVector3(bbMin[0], bbMin[1], bbMax[2]), color);
  drawLine(btVector3(bbMax[0], bbMin[1], bbMin[2]), btVector3(bbMax[0], bbMin[1], bbMax[2]), color);
  drawLine(btVector3(bbMax[0], bbMax[1], bbMin[2]), btVector3(bbMax[0], bbMax[1], bbMax[2]), color);
  drawLine(btVector3(bbMin[0], bbMax[1], bbMin[2]), btVector3(bbMin[0], bbMax[1], bbMax[2]), color);
  drawLine(btVector3(bbMin[0], bbMin[1], bbMax[2]), btVector3(bbMax[0], bbMin[1], bbMax[2]), color);
  drawLine(btVector3(bbMax[0], bbMin[1], bbMax[2]), btVector3(bbMax[0], bbMax[1], bbMax[2]), color);
  drawLine(btVector3(bbMax[0], bbMax[1], bbMax[2]), btVector3(bbMin[0], bbMax[1], bbMax[2]), color);
  drawLine(btVector3(bbMin[0], bbMax[1], bbMax[2]), btVector3(bbMin[0], bbMin[1], bbMax[2]), color);
 }
 virtual void drawBox(const btVector3& bbMin, const btVector3& bbMax, const btTransform& trans, const btVector3& color)
 {
  drawLine(trans * btVector3(bbMin[0], bbMin[1], bbMin[2]), trans * btVector3(bbMax[0], bbMin[1], bbMin[2]), color);
  drawLine(trans * btVector3(bbMax[0], bbMin[1], bbMin[2]), trans * btVector3(bbMax[0], bbMax[1], bbMin[2]), color);
  drawLine(trans * btVector3(bbMax[0], bbMax[1], bbMin[2]), trans * btVector3(bbMin[0], bbMax[1], bbMin[2]), color);
  drawLine(trans * btVector3(bbMin[0], bbMax[1], bbMin[2]), trans * btVector3(bbMin[0], bbMin[1], bbMin[2]), color);
  drawLine(trans * btVector3(bbMin[0], bbMin[1], bbMin[2]), trans * btVector3(bbMin[0], bbMin[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMax[0], bbMin[1], bbMin[2]), trans * btVector3(bbMax[0], bbMin[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMax[0], bbMax[1], bbMin[2]), trans * btVector3(bbMax[0], bbMax[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMin[0], bbMax[1], bbMin[2]), trans * btVector3(bbMin[0], bbMax[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMin[0], bbMin[1], bbMax[2]), trans * btVector3(bbMax[0], bbMin[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMax[0], bbMin[1], bbMax[2]), trans * btVector3(bbMax[0], bbMax[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMax[0], bbMax[1], bbMax[2]), trans * btVector3(bbMin[0], bbMax[1], bbMax[2]), color);
  drawLine(trans * btVector3(bbMin[0], bbMax[1], bbMax[2]), trans * btVector3(bbMin[0], bbMin[1], bbMax[2]), color);
 }

 virtual void drawCapsule(float radius, float halfHeight, int upAxis, const btTransform& transform, const btVector3& color)
 {
  btVector3 capStart(0.f,0.f,0.f);
  capStart[upAxis] = -halfHeight;

  btVector3 capEnd(0.f,0.f,0.f);
  capEnd[upAxis] = halfHeight;


  {

   btTransform childTransform = transform;
   childTransform.getOrigin() = transform * capStart;
   drawSphere(radius, childTransform, color);
  }

  {
   btTransform childTransform = transform;
   childTransform.getOrigin() = transform * capEnd;
   drawSphere(radius, childTransform, color);
  }


  btVector3 start = transform.getOrigin();

  capStart[(upAxis+1)%3] = radius;
  capEnd[(upAxis+1)%3] = radius;
  drawLine(start+transform.getBasis() * capStart,start+transform.getBasis() * capEnd, color);
  capStart[(upAxis+1)%3] = -radius;
  capEnd[(upAxis+1)%3] = -radius;
  drawLine(start+transform.getBasis() * capStart,start+transform.getBasis() * capEnd, color);

  capStart[(upAxis+1)%3] = 0.f;
  capEnd[(upAxis+1)%3] = 0.f;

  capStart[(upAxis+2)%3] = radius;
  capEnd[(upAxis+2)%3] = radius;
  drawLine(start+transform.getBasis() * capStart,start+transform.getBasis() * capEnd, color);
  capStart[(upAxis+2)%3] = -radius;
  capEnd[(upAxis+2)%3] = -radius;
  drawLine(start+transform.getBasis() * capStart,start+transform.getBasis() * capEnd, color);
 }

 virtual void drawCylinder(float radius, float halfHeight, int upAxis, const btTransform& transform, const btVector3& color)
 {
  btVector3 start = transform.getOrigin();
  btVector3 offsetHeight(0,0,0);
  offsetHeight[upAxis] = halfHeight;
  btVector3 offsetRadius(0,0,0);
  offsetRadius[(upAxis+1)%3] = radius;
  drawLine(start+transform.getBasis() * (offsetHeight+offsetRadius),start+transform.getBasis() * (-offsetHeight+offsetRadius),color);
  drawLine(start+transform.getBasis() * (offsetHeight-offsetRadius),start+transform.getBasis() * (-offsetHeight-offsetRadius),color);


  btVector3 yaxis(0,0,0);
  yaxis[upAxis] = float(1.0);
  btVector3 xaxis(0,0,0);
  xaxis[(upAxis+1)%3] = float(1.0);
  drawArc(start-transform.getBasis()*(offsetHeight),transform.getBasis()*yaxis,transform.getBasis()*xaxis,radius,radius,0,float(6.283185307179586232),color,false,float(10.0));
  drawArc(start+transform.getBasis()*(offsetHeight),transform.getBasis()*yaxis,transform.getBasis()*xaxis,radius,radius,0,float(6.283185307179586232),color,false,float(10.0));
 }

 virtual void drawCone(float radius, float height, int upAxis, const btTransform& transform, const btVector3& color)
 {

  btVector3 start = transform.getOrigin();

  btVector3 offsetHeight(0,0,0);
  offsetHeight[upAxis] = height * float(0.5);
  btVector3 offsetRadius(0,0,0);
  offsetRadius[(upAxis+1)%3] = radius;
  btVector3 offset2Radius(0,0,0);
  offset2Radius[(upAxis+2)%3] = radius;

  drawLine(start+transform.getBasis() * (offsetHeight),start+transform.getBasis() * (-offsetHeight+offsetRadius),color);
  drawLine(start+transform.getBasis() * (offsetHeight),start+transform.getBasis() * (-offsetHeight-offsetRadius),color);
  drawLine(start+transform.getBasis() * (offsetHeight),start+transform.getBasis() * (-offsetHeight+offset2Radius),color);
  drawLine(start+transform.getBasis() * (offsetHeight),start+transform.getBasis() * (-offsetHeight-offset2Radius),color);


  btVector3 yaxis(0,0,0);
  yaxis[upAxis] = float(1.0);
  btVector3 xaxis(0,0,0);
  xaxis[(upAxis+1)%3] = float(1.0);
  drawArc(start-transform.getBasis()*(offsetHeight),transform.getBasis()*yaxis,transform.getBasis()*xaxis,radius,radius,0,float(6.283185307179586232),color,false,10.0);
 }

 virtual void drawPlane(const btVector3& planeNormal, float planeConst, const btTransform& transform, const btVector3& color)
 {
  btVector3 planeOrigin = planeNormal * planeConst;
  btVector3 vec0,vec1;
  btPlaneSpace1(planeNormal,vec0,vec1);
  float vecLen = 100.f;
  btVector3 pt0 = planeOrigin + vec0*vecLen;
  btVector3 pt1 = planeOrigin - vec0*vecLen;
  btVector3 pt2 = planeOrigin + vec1*vecLen;
  btVector3 pt3 = planeOrigin - vec1*vecLen;
  drawLine(transform*pt0,transform*pt1,color);
  drawLine(transform*pt2,transform*pt3,color);
 }
};
# 65 "../../bullet/src/btBulletCollisionCommon.h" 2
# 1 "../../bullet/src/LinearMath/btSerializer.h" 1
# 66 "../../bullet/src/btBulletCollisionCommon.h" 2
# 21 "../../bullet/src/btBulletDynamicsCommon.h" 2

# 1 "../../bullet/src/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h" 1
# 20 "../../bullet/src/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h"
# 1 "../../bullet/src/BulletDynamics/Dynamics/btDynamicsWorld.h" 1
# 19 "../../bullet/src/BulletDynamics/Dynamics/btDynamicsWorld.h"
# 1 "../src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 1
# 20 "../../bullet/src/BulletDynamics/Dynamics/btDynamicsWorld.h" 2
# 1 "../src/BulletDynamics/ConstraintSolver/btContactSolverInfo.h" 1
# 19 "../src/BulletDynamics/ConstraintSolver/btContactSolverInfo.h"
enum btSolverMode
{
 SOLVER_RANDMIZE_ORDER = 1,
 SOLVER_FRICTION_SEPARATE = 2,
 SOLVER_USE_WARMSTARTING = 4,
 SOLVER_USE_FRICTION_WARMSTARTING = 8,
 SOLVER_USE_2_FRICTION_DIRECTIONS = 16,
 SOLVER_ENABLE_FRICTION_DIRECTION_CACHING = 32,
 SOLVER_DISABLE_VELOCITY_DEPENDENT_FRICTION_DIRECTION = 64,
 SOLVER_CACHE_FRIENDLY = 128,
 SOLVER_SIMD = 256,
 SOLVER_CUDA = 512
};

class btContactSolverInfoData
 { public: 


 float m_tau;
 float m_damping;
 float m_friction;
 float m_timeStep;
 float m_restitution;
 int m_numIterations;
 float m_maxErrorReduction;
 float m_sor;
 float m_erp;
 float m_erp2;
 float m_globalCfm;
 int m_splitImpulse;
 float m_splitImpulsePenetrationThreshold;
 float m_linearSlop;
 float m_warmstartingFactor;

 int m_solverMode;
 int m_restingContactRestitutionThreshold;
 int m_minimumSolverBatchSize;


};

class btContactSolverInfo : public btContactSolverInfoData
 { public: 



 inline btContactSolverInfo()
 {
  m_tau = float(0.6);
  m_damping = float(1.0);
  m_friction = float(0.3);
  m_restitution = float(0.);
  m_maxErrorReduction = float(20.);
  m_numIterations = 10;
  m_erp = float(0.2);
  m_erp2 = float(0.1);
  m_globalCfm = float(0.);
  m_sor = float(1.);
  m_splitImpulse = false;
  m_splitImpulsePenetrationThreshold = -0.02f;
  m_linearSlop = float(0.0);
  m_warmstartingFactor=float(0.85);
  m_solverMode = SOLVER_USE_WARMSTARTING | SOLVER_SIMD;
  m_restingContactRestitutionThreshold = 2;
  m_minimumSolverBatchSize = 128;
 }
};
# 21 "../../bullet/src/BulletDynamics/Dynamics/btDynamicsWorld.h" 2

class btTypedConstraint;
class btActionInterface;
class btConstraintSolver;
class btDynamicsWorld;



typedef void (*btInternalTickCallback)(btDynamicsWorld *world, float timeStep);

enum btDynamicsWorldType
{
 BT_SIMPLE_DYNAMICS_WORLD=1,
 BT_DISCRETE_DYNAMICS_WORLD=2,
 BT_CONTINUOUS_DYNAMICS_WORLD=3,
 BT_SOFT_RIGID_DYNAMICS_WORLD=4
};


class btDynamicsWorld : public btCollisionWorld
{

protected:
  btInternalTickCallback m_internalTickCallback;
  btInternalTickCallback m_internalPreTickCallback;
  void* m_worldUserInfo;

  btContactSolverInfo m_solverInfo;

public:


  btDynamicsWorld(btDispatcher* dispatcher,btBroadphaseInterface* broadphase,btCollisionConfiguration* collisionConfiguration)
  :btCollisionWorld(dispatcher,broadphase,collisionConfiguration), m_internalTickCallback(0),m_internalPreTickCallback(0), m_worldUserInfo(0)
  {
  }

  virtual ~btDynamicsWorld()
  {
  }





  virtual int stepSimulation( float timeStep,int maxSubSteps=1, float fixedTimeStep=float(1.)/float(60.))=0;

  virtual void debugDrawWorld() = 0;

  virtual void addConstraint(btTypedConstraint* constraint, bool disableCollisionsBetweenLinkedBodies=false)
  {
   ()constraint; ()disableCollisionsBetweenLinkedBodies;
  }

  virtual void removeConstraint(btTypedConstraint* constraint) {()constraint;}

  virtual void addAction(btActionInterface* action) = 0;

  virtual void removeAction(btActionInterface* action) = 0;



  virtual void setGravity(const btVector3& gravity) = 0;
  virtual btVector3 getGravity () const = 0;

  virtual void synchronizeMotionStates() = 0;

  virtual void addRigidBody(btRigidBody* body) = 0;

  virtual void addRigidBody(btRigidBody* body, short group, short mask) = 0;

  virtual void removeRigidBody(btRigidBody* body) = 0;

  virtual void setConstraintSolver(btConstraintSolver* solver) = 0;

  virtual btConstraintSolver* getConstraintSolver() = 0;

  virtual int getNumConstraints() const { return 0; }

  virtual btTypedConstraint* getConstraint(int index) { ()index; return 0; }

  virtual const btTypedConstraint* getConstraint(int index) const { ()index; return 0; }

  virtual btDynamicsWorldType getWorldType() const=0;

  virtual void clearForces() = 0;


  void setInternalTickCallback(btInternalTickCallback cb, void* worldUserInfo=0,bool isPreTick=false)
  {
   if (isPreTick)
   {
    m_internalPreTickCallback = cb;
   } else
   {
    m_internalTickCallback = cb;
   }
   m_worldUserInfo = worldUserInfo;
  }

  void setWorldUserInfo(void* worldUserInfo)
  {
   m_worldUserInfo = worldUserInfo;
  }

  void* getWorldUserInfo() const
  {
   return m_worldUserInfo;
  }

  btContactSolverInfo& getSolverInfo()
  {
   return m_solverInfo;
  }



  virtual void addVehicle(btActionInterface* vehicle) {()vehicle;}

  virtual void removeVehicle(btActionInterface* vehicle) {()vehicle;}

  virtual void addCharacter(btActionInterface* character) {()character;}

  virtual void removeCharacter(btActionInterface* character) {()character;}


};
# 21 "../../bullet/src/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h" 2

class btDispatcher;
class btOverlappingPairCache;
class btConstraintSolver;
class btSimulationIslandManager;
class btTypedConstraint;
class btActionInterface;

class btIDebugDraw;





class btDiscreteDynamicsWorld : public btDynamicsWorld
{
protected:

 btConstraintSolver* m_constraintSolver;

 btSimulationIslandManager* m_islandManager;

 btAlignedObjectArray<btTypedConstraint*> m_constraints;

 btAlignedObjectArray<btRigidBody*> m_nonStaticRigidBodies;

 btVector3 m_gravity;


 float m_localTime;


 bool m_ownsIslandManager;
 bool m_ownsConstraintSolver;
 bool m_synchronizeAllMotionStates;

 btAlignedObjectArray<btActionInterface*> m_actions;

 int m_profileTimings;

 virtual void predictUnconstraintMotion(float timeStep);

 virtual void integrateTransforms(float timeStep);

 virtual void addSpeculativeContacts(float timeStep);

 virtual void calculateSimulationIslands();

 virtual void solveConstraints(btContactSolverInfo& solverInfo);

 void updateActivationState(float timeStep);

 void updateActions(float timeStep);

 void startProfiling(float timeStep);

 virtual void internalSingleStepSimulation( float timeStep);


 virtual void saveKinematicState(float timeStep);

 void serializeRigidBodies(btSerializer* serializer);

public:



 btDiscreteDynamicsWorld(btDispatcher* dispatcher,btBroadphaseInterface* pairCache,btConstraintSolver* constraintSolver,btCollisionConfiguration* collisionConfiguration);

 virtual ~btDiscreteDynamicsWorld();


 virtual int stepSimulation( float timeStep,int maxSubSteps=1, float fixedTimeStep=float(1.)/float(60.));


 virtual void synchronizeMotionStates();


 void synchronizeSingleMotionState(btRigidBody* body);

 virtual void addConstraint(btTypedConstraint* constraint, bool disableCollisionsBetweenLinkedBodies=false);

 virtual void removeConstraint(btTypedConstraint* constraint);

 virtual void addAction(btActionInterface*);

 virtual void removeAction(btActionInterface*);

 btSimulationIslandManager* getSimulationIslandManager()
 {
  return m_islandManager;
 }

 const btSimulationIslandManager* getSimulationIslandManager() const
 {
  return m_islandManager;
 }

 btCollisionWorld* getCollisionWorld()
 {
  return this;
 }

 virtual void setGravity(const btVector3& gravity);

 virtual btVector3 getGravity () const;

 virtual void addCollisionObject(btCollisionObject* collisionObject,short int collisionFilterGroup=btBroadphaseProxy::StaticFilter,short int collisionFilterMask=btBroadphaseProxy::AllFilter ^ btBroadphaseProxy::StaticFilter);

 virtual void addRigidBody(btRigidBody* body);

 virtual void addRigidBody(btRigidBody* body, short group, short mask);

 virtual void removeRigidBody(btRigidBody* body);


 virtual void removeCollisionObject(btCollisionObject* collisionObject);


 void debugDrawConstraint(btTypedConstraint* constraint);

 virtual void debugDrawWorld();

 virtual void setConstraintSolver(btConstraintSolver* solver);

 virtual btConstraintSolver* getConstraintSolver();

 virtual int getNumConstraints() const;

 virtual btTypedConstraint* getConstraint(int index) ;

 virtual const btTypedConstraint* getConstraint(int index) const;


 virtual btDynamicsWorldType getWorldType() const
 {
  return BT_DISCRETE_DYNAMICS_WORLD;
 }


 virtual void clearForces();


 virtual void applyGravity();

 virtual void setNumTasks(int numTasks)
 {
        () numTasks;
 }


 virtual void updateVehicles(float timeStep)
 {
  updateActions(timeStep);
 }


 virtual void addVehicle(btActionInterface* vehicle);

 virtual void removeVehicle(btActionInterface* vehicle);

 virtual void addCharacter(btActionInterface* character);

 virtual void removeCharacter(btActionInterface* character);

 void setSynchronizeAllMotionStates(bool synchronizeAll)
 {
  m_synchronizeAllMotionStates = synchronizeAll;
 }
 bool getSynchronizeAllMotionStates() const
 {
  return m_synchronizeAllMotionStates;
 }


 virtual void serialize(btSerializer* serializer);

};
# 23 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/Dynamics/btContinuousDynamicsWorld.h" 1
# 19 "../../bullet/src/BulletDynamics/Dynamics/btContinuousDynamicsWorld.h"
# 1 "../../bullet/src/BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h" 1
# 20 "../../bullet/src/BulletDynamics/Dynamics/btContinuousDynamicsWorld.h" 2




class btContinuousDynamicsWorld : public btDiscreteDynamicsWorld
{

 void updateTemporalAabbs(float timeStep);

 public:

  btContinuousDynamicsWorld(btDispatcher* dispatcher,btBroadphaseInterface* pairCache,btConstraintSolver* constraintSolver,btCollisionConfiguration* collisionConfiguration);
  virtual ~btContinuousDynamicsWorld();


  virtual void internalSingleStepSimulation( float timeStep);

  virtual void calculateTimeOfImpacts(float timeStep);

  virtual btDynamicsWorldType getWorldType() const
  {
   return BT_CONTINUOUS_DYNAMICS_WORLD;
  }

};
# 24 "../../bullet/src/btBulletDynamicsCommon.h" 2

# 1 "../../bullet/src/BulletDynamics/Dynamics/btSimpleDynamicsWorld.h" 1
# 21 "../../bullet/src/BulletDynamics/Dynamics/btSimpleDynamicsWorld.h"
class btDispatcher;
class btOverlappingPairCache;
class btConstraintSolver;



class btSimpleDynamicsWorld : public btDynamicsWorld
{
protected:

 btConstraintSolver* m_constraintSolver;

 bool m_ownsConstraintSolver;

 void predictUnconstraintMotion(float timeStep);

 void integrateTransforms(float timeStep);

 btVector3 m_gravity;

public:




 btSimpleDynamicsWorld(btDispatcher* dispatcher,btBroadphaseInterface* pairCache,btConstraintSolver* constraintSolver,btCollisionConfiguration* collisionConfiguration);

 virtual ~btSimpleDynamicsWorld();


 virtual int stepSimulation( float timeStep,int maxSubSteps=1, float fixedTimeStep=float(1.)/float(60.));

 virtual void setGravity(const btVector3& gravity);

 virtual btVector3 getGravity () const;

 virtual void addRigidBody(btRigidBody* body);

 virtual void addRigidBody(btRigidBody* body, short group, short mask);

 virtual void removeRigidBody(btRigidBody* body);

 virtual void debugDrawWorld();

 virtual void addAction(btActionInterface* action);

 virtual void removeAction(btActionInterface* action);


 virtual void removeCollisionObject(btCollisionObject* collisionObject);

 virtual void updateAabbs();

 virtual void synchronizeMotionStates();

 virtual void setConstraintSolver(btConstraintSolver* solver);

 virtual btConstraintSolver* getConstraintSolver();

 virtual btDynamicsWorldType getWorldType() const
 {
  return BT_SIMPLE_DYNAMICS_WORLD;
 }

 virtual void clearForces();

};
# 26 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/Dynamics/btRigidBody.h" 1
# 22 "../../bullet/src/BulletDynamics/Dynamics/btRigidBody.h"
# 1 "../src/BulletCollision/CollisionDispatch/btCollisionObject.h" 1
# 23 "../../bullet/src/BulletDynamics/Dynamics/btRigidBody.h" 2

class btCollisionShape;
class btMotionState;
class btTypedConstraint;


extern float gDeactivationTime;
extern bool gDisableDeactivation;
# 41 "../../bullet/src/BulletDynamics/Dynamics/btRigidBody.h"
enum btRigidBodyFlags
{
 BT_DISABLE_WORLD_GRAVITY = 1
};
# 55 "../../bullet/src/BulletDynamics/Dynamics/btRigidBody.h"
class btRigidBody : public btCollisionObject
{

 btMatrix3x3 m_invInertiaTensorWorld;
 btVector3 m_linearVelocity;
 btVector3 m_angularVelocity;
 float m_inverseMass;
 btVector3 m_linearFactor;

 btVector3 m_gravity;
 btVector3 m_gravity_acceleration;
 btVector3 m_invInertiaLocal;
 btVector3 m_totalForce;
 btVector3 m_totalTorque;

 float m_linearDamping;
 float m_angularDamping;

 bool m_additionalDamping;
 float m_additionalDampingFactor;
 float m_additionalLinearDampingThresholdSqr;
 float m_additionalAngularDampingThresholdSqr;
 float m_additionalAngularDampingFactor;


 float m_linearSleepingThreshold;
 float m_angularSleepingThreshold;


 btMotionState* m_optionalMotionState;


 btAlignedObjectArray<btTypedConstraint*> m_constraintRefs;

 int m_rigidbodyFlags;

 int m_debugBodyId;


protected:

 btVector3 m_deltaLinearVelocity;
 btVector3 m_deltaAngularVelocity;
 btVector3 m_angularFactor;
 btVector3 m_invMass;
 btVector3 m_pushVelocity;
 btVector3 m_turnVelocity;


public:







 class btRigidBodyConstructionInfo
  { public: 
  float m_mass;



  btMotionState* m_motionState;
  btTransform m_startWorldTransform;

  btCollisionShape* m_collisionShape;
  btVector3 m_localInertia;
  float m_linearDamping;
  float m_angularDamping;


  float m_friction;

  float m_restitution;

  float m_linearSleepingThreshold;
  float m_angularSleepingThreshold;



  bool m_additionalDamping;
  float m_additionalDampingFactor;
  float m_additionalLinearDampingThresholdSqr;
  float m_additionalAngularDampingThresholdSqr;
  float m_additionalAngularDampingFactor;

  btRigidBodyConstructionInfo( float mass, btMotionState* motionState, btCollisionShape* collisionShape, const btVector3& localInertia=btVector3):
  m_mass(mass),
   m_motionState(motionState),
   m_collisionShape(collisionShape),
   m_localInertia(localInertia),
   m_linearDamping(float(0.)),
   m_angularDamping(float(0.)),
   m_friction(float(0.5)),
   m_restitution(float(0.)),
   m_linearSleepingThreshold(float(0.8)),
   m_angularSleepingThreshold(float(1.f)),
   m_additionalDamping(false),
   m_additionalDampingFactor(float(0.005)),
   m_additionalLinearDampingThresholdSqr(float(0.01)),
   m_additionalAngularDampingThresholdSqr(float(0.01)),
   m_additionalAngularDampingFactor(float(0.01))
  {
   m_startWorldTransform.setIdentity();
  }
 };


 btRigidBody( const btRigidBody::btRigidBodyConstructionInfo& constructionInfo);



 btRigidBody( float mass, btMotionState* motionState, btCollisionShape* collisionShape, const btVector3& localInertia=btVector3);


 virtual ~btRigidBody()
        {


                ;
        }

protected:


 void setupRigidBody(const btRigidBody::btRigidBodyConstructionInfo& constructionInfo);

public:

 void proceedToTransform(const btTransform& newTrans);



 static const btRigidBody* upcast(const btCollisionObject* colObj)
 {
  if (colObj->getInternalType()&btCollisionObject::CO_RIGID_BODY)
   return (const btRigidBody*)colObj;
  return 0;
 }
 static btRigidBody* upcast(btCollisionObject* colObj)
 {
  if (colObj->getInternalType()&btCollisionObject::CO_RIGID_BODY)
   return (btRigidBody*)colObj;
  return 0;
 }


 void predictIntegratedTransform(float step, btTransform& predictedTransform) ;

 void saveKinematicState(float step);

 void applyGravity();

 void setGravity(const btVector3& acceleration);

 const btVector3& getGravity() const
 {
  return m_gravity_acceleration;
 }

 void setDamping(float lin_damping, float ang_damping);

 float getLinearDamping() const
 {
  return m_linearDamping;
 }

 float getAngularDamping() const
 {
  return m_angularDamping;
 }

 float getLinearSleepingThreshold() const
 {
  return m_linearSleepingThreshold;
 }

 float getAngularSleepingThreshold() const
 {
  return m_angularSleepingThreshold;
 }

 void applyDamping(float timeStep);

 inline const btCollisionShape* getCollisionShape() const {
  return m_collisionShape;
 }

 inline btCollisionShape* getCollisionShape() {
   return m_collisionShape;
 }

 void setMassProps(float mass, const btVector3& inertia);

 const btVector3& getLinearFactor() const
 {
  return m_linearFactor;
 }
 void setLinearFactor(const btVector3& linearFactor)
 {
  m_linearFactor = linearFactor;
  m_invMass = m_linearFactor*m_inverseMass;
 }
 float getInvMass() const { return m_inverseMass; }
 const btMatrix3x3& getInvInertiaTensorWorld() const {
  return m_invInertiaTensorWorld;
 }

 void integrateVelocities(float step);

 void setCenterOfMassTransform(const btTransform& xform);

 void applyCentralForce(const btVector3& force)
 {
  m_totalForce += force*m_linearFactor;
 }

 const btVector3& getTotalForce() const
 {
  return m_totalForce;
 };

 const btVector3& getTotalTorque() const
 {
  return m_totalTorque;
 };

 const btVector3& getInvInertiaDiagLocal() const
 {
  return m_invInertiaLocal;
 };

 void setInvInertiaDiagLocal(const btVector3& diagInvInertia)
 {
  m_invInertiaLocal = diagInvInertia;
 }

 void setSleepingThresholds(float linear,float angular)
 {
  m_linearSleepingThreshold = linear;
  m_angularSleepingThreshold = angular;
 }

 void applyTorque(const btVector3& torque)
 {
  m_totalTorque += torque*m_angularFactor;
 }

 void applyForce(const btVector3& force, const btVector3& rel_pos)
 {
  applyCentralForce(force);
  applyTorque(rel_pos.cross(force*m_linearFactor));
 }

 void applyCentralImpulse(const btVector3& impulse)
 {
  m_linearVelocity += impulse *m_linearFactor * m_inverseMass;
 }

   void applyTorqueImpulse(const btVector3& torque)
 {
   m_angularVelocity += m_invInertiaTensorWorld * torque * m_angularFactor;
 }

 void applyImpulse(const btVector3& impulse, const btVector3& rel_pos)
 {
  if (m_inverseMass != float(0.))
  {
   applyCentralImpulse(impulse);
   if (m_angularFactor)
   {
    applyTorqueImpulse(rel_pos.cross(impulse*m_linearFactor));
   }
  }
 }

 void clearForces()
 {
  m_totalForce.setValue(float(0.0), float(0.0), float(0.0));
  m_totalTorque.setValue(float(0.0), float(0.0), float(0.0));
 }

 void updateInertiaTensor();

 const btVector3& getCenterOfMassPosition() const {
  return m_worldTransform.getOrigin();
 }
 btQuaternion getOrientation() const;

 const btTransform& getCenterOfMassTransform() const {
  return m_worldTransform;
 }
 const btVector3& getLinearVelocity() const {
  return m_linearVelocity;
 }
 const btVector3& getAngularVelocity() const {
  return m_angularVelocity;
 }


 inline void setLinearVelocity(const btVector3& lin_vel)
 {
  m_linearVelocity = lin_vel;
 }

 inline void setAngularVelocity(const btVector3& ang_vel)
 {
  m_angularVelocity = ang_vel;
 }

 btVector3 getVelocityInLocalPoint(const btVector3& rel_pos) const
 {

  return m_linearVelocity + m_angularVelocity.cross(rel_pos);



 }

 void translate(const btVector3& v)
 {
  m_worldTransform.getOrigin() += v;
 }


 void getAabb(btVector3& aabbMin,btVector3& aabbMax) const;





 inline float computeImpulseDenominator(const btVector3& pos, const btVector3& normal) const
 {
  btVector3 r0 = pos - getCenterOfMassPosition();

  btVector3 c0 = (r0).cross(normal);

  btVector3 vec = (c0 * getInvInertiaTensorWorld()).cross(r0);

  return m_inverseMass + normal.dot(vec);

 }

 inline float computeAngularImpulseDenominator(const btVector3& axis) const
 {
  btVector3 vec = axis * getInvInertiaTensorWorld();
  return axis.dot(vec);
 }

 inline void updateDeactivation(float timeStep)
 {
  if ( (getActivationState() == 2) || (getActivationState() == 4))
   return;

  if ((getLinearVelocity().length2() < m_linearSleepingThreshold*m_linearSleepingThreshold) &&
   (getAngularVelocity().length2() < m_angularSleepingThreshold*m_angularSleepingThreshold))
  {
   m_deactivationTime += timeStep;
  } else
  {
   m_deactivationTime=float(0.);
   setActivationState(0);
  }

 }

 inline bool wantsSleeping()
 {

  if (getActivationState() == 4)
   return false;


  if (gDisableDeactivation || (gDeactivationTime == float(0.)))
   return false;

  if ( (getActivationState() == 2) || (getActivationState() == 3))
   return true;

  if (m_deactivationTime> gDeactivationTime)
  {
   return true;
  }
  return false;
 }



 const btBroadphaseProxy* getBroadphaseProxy() const
 {
  return m_broadphaseHandle;
 }
 btBroadphaseProxy* getBroadphaseProxy()
 {
  return m_broadphaseHandle;
 }
 void setNewBroadphaseProxy(btBroadphaseProxy* broadphaseProxy)
 {
  m_broadphaseHandle = broadphaseProxy;
 }


 btMotionState* getMotionState()
 {
  return m_optionalMotionState;
 }
 const btMotionState* getMotionState() const
 {
  return m_optionalMotionState;
 }
 void setMotionState(btMotionState* motionState)
 {
  m_optionalMotionState = motionState;
  if (m_optionalMotionState)
   motionState->getWorldTransform(m_worldTransform);
 }


 int m_contactSolverType;
 int m_frictionSolverType;

 void setAngularFactor(const btVector3& angFac)
 {
  m_angularFactor = angFac;
 }

 void setAngularFactor(float angFac)
 {
  m_angularFactor.setValue(angFac,angFac,angFac);
 }
 const btVector3& getAngularFactor() const
 {
  return m_angularFactor;
 }


 bool isInWorld() const
 {
  return (getBroadphaseProxy() != 0);
 }

 virtual bool checkCollideWithOverride(btCollisionObject* co);

 void addConstraintRef(btTypedConstraint* c);
 void removeConstraintRef(btTypedConstraint* c);

 btTypedConstraint* getConstraintRef(int index)
 {
  return m_constraintRefs[index];
 }

 int getNumConstraintRefs() const
 {
  return m_constraintRefs.size();
 }

 void setFlags(int flags)
 {
  m_rigidbodyFlags = flags;
 }

 int getFlags() const
 {
  return m_rigidbodyFlags;
 }

 const btVector3& getDeltaLinearVelocity() const
 {
  return m_deltaLinearVelocity;
 }

 const btVector3& getDeltaAngularVelocity() const
 {
  return m_deltaAngularVelocity;
 }

 const btVector3& getPushVelocity() const
 {
  return m_pushVelocity;
 }

 const btVector3& getTurnVelocity() const
 {
  return m_turnVelocity;
 }





 btVector3& internalGetDeltaLinearVelocity()
 {
  return m_deltaLinearVelocity;
 }

 btVector3& internalGetDeltaAngularVelocity()
 {
  return m_deltaAngularVelocity;
 }

 const btVector3& internalGetAngularFactor() const
 {
  return m_angularFactor;
 }

 const btVector3& internalGetInvMass() const
 {
  return m_invMass;
 }

 btVector3& internalGetPushVelocity()
 {
  return m_pushVelocity;
 }

 btVector3& internalGetTurnVelocity()
 {
  return m_turnVelocity;
 }

 inline void internalGetVelocityInLocalPointObsolete(const btVector3& rel_pos, btVector3& velocity ) const
 {
  velocity = getLinearVelocity()+m_deltaLinearVelocity + (getAngularVelocity()+m_deltaAngularVelocity).cross(rel_pos);
 }

 inline void internalGetAngularVelocity(btVector3& angVel) const
 {
  angVel = getAngularVelocity()+m_deltaAngularVelocity;
 }



 inline void internalApplyImpulse(const btVector3& linearComponent, const btVector3& angularComponent,const float impulseMagnitude)
 {
  if (m_inverseMass)
  {
   m_deltaLinearVelocity += linearComponent*impulseMagnitude;
   m_deltaAngularVelocity += angularComponent*(impulseMagnitude*m_angularFactor);
  }
 }

 inline void internalApplyPushImpulse(const btVector3& linearComponent, const btVector3& angularComponent,float impulseMagnitude)
 {
  if (m_inverseMass)
  {
   m_pushVelocity += linearComponent*impulseMagnitude;
   m_turnVelocity += angularComponent*(impulseMagnitude*m_angularFactor);
  }
 }

 void internalWritebackVelocity()
 {
  if (m_inverseMass)
  {
   setLinearVelocity(getLinearVelocity()+ m_deltaLinearVelocity);
   setAngularVelocity(getAngularVelocity()+m_deltaAngularVelocity);



  }
 }


 void internalWritebackVelocity(float timeStep);





 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, class btSerializer* serializer) const;

 virtual void serializeSingleObject(class btSerializer* serializer) const;

};



class btRigidBodyFloatData
 { public: 
 btCollisionObjectFloatData m_collisionObjectData;
 btMatrix3x3FloatData m_invInertiaTensorWorld;
 btVector3FloatData m_linearVelocity;
 btVector3FloatData m_angularVelocity;
 btVector3FloatData m_angularFactor;
 btVector3FloatData m_linearFactor;
 btVector3FloatData m_gravity;
 btVector3FloatData m_gravity_acceleration;
 btVector3FloatData m_invInertiaLocal;
 btVector3FloatData m_totalForce;
 btVector3FloatData m_totalTorque;
 float m_inverseMass;
 float m_linearDamping;
 float m_angularDamping;
 float m_additionalDampingFactor;
 float m_additionalLinearDampingThresholdSqr;
 float m_additionalAngularDampingThresholdSqr;
 float m_additionalAngularDampingFactor;
 float m_linearSleepingThreshold;
 float m_angularSleepingThreshold;
 int m_additionalDamping;
};


class btRigidBodyDoubleData
 { public: 
 btCollisionObjectDoubleData m_collisionObjectData;
 btMatrix3x3DoubleData m_invInertiaTensorWorld;
 btVector3DoubleData m_linearVelocity;
 btVector3DoubleData m_angularVelocity;
 btVector3DoubleData m_angularFactor;
 btVector3DoubleData m_linearFactor;
 btVector3DoubleData m_gravity;
 btVector3DoubleData m_gravity_acceleration;
 btVector3DoubleData m_invInertiaLocal;
 btVector3DoubleData m_totalForce;
 btVector3DoubleData m_totalTorque;
 double m_inverseMass;
 double m_linearDamping;
 double m_angularDamping;
 double m_additionalDampingFactor;
 double m_additionalLinearDampingThresholdSqr;
 double m_additionalAngularDampingThresholdSqr;
 double m_additionalAngularDampingFactor;
 double m_linearSleepingThreshold;
 double m_angularSleepingThreshold;
 int m_additionalDamping;
 char m_padding[4];
};
# 27 "../../bullet/src/btBulletDynamicsCommon.h" 2

# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h" 1
# 20 "../../bullet/src/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h"
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btJacobianEntry.h" 1
# 20 "../../bullet/src/BulletDynamics/ConstraintSolver/btJacobianEntry.h"
# 1 "../src/BulletDynamics/Dynamics/btRigidBody.h" 1
# 21 "../../bullet/src/BulletDynamics/ConstraintSolver/btJacobianEntry.h" 2
# 31 "../../bullet/src/BulletDynamics/ConstraintSolver/btJacobianEntry.h"
class btJacobianEntry
{
public:
 btJacobianEntry() {};

 btJacobianEntry(
  const btMatrix3x3& world2A,
  const btMatrix3x3& world2B,
  const btVector3& rel_pos1,const btVector3& rel_pos2,
  const btVector3& jointAxis,
  const btVector3& inertiaInvA,
  const float massInvA,
  const btVector3& inertiaInvB,
  const float massInvB)
  :m_linearJointAxis(jointAxis)
 {
  m_aJ = world2A*(rel_pos1.cross(m_linearJointAxis));
  m_bJ = world2B*(rel_pos2.cross(-m_linearJointAxis));
  m_0MinvJt = inertiaInvA * m_aJ;
  m_1MinvJt = inertiaInvB * m_bJ;
  m_Adiag = massInvA + m_0MinvJt.dot(m_aJ) + massInvB + m_1MinvJt.dot(m_bJ);

  ;
 }


 btJacobianEntry(const btVector3& jointAxis,
  const btMatrix3x3& world2A,
  const btMatrix3x3& world2B,
  const btVector3& inertiaInvA,
  const btVector3& inertiaInvB)
  :m_linearJointAxis(btVector3(float(0.),float(0.),float(0.)))
 {
  m_aJ= world2A*jointAxis;
  m_bJ = world2B*-jointAxis;
  m_0MinvJt = inertiaInvA * m_aJ;
  m_1MinvJt = inertiaInvB * m_bJ;
  m_Adiag = m_0MinvJt.dot(m_aJ) + m_1MinvJt.dot(m_bJ);

  ;
 }


 btJacobianEntry(const btVector3& axisInA,
  const btVector3& axisInB,
  const btVector3& inertiaInvA,
  const btVector3& inertiaInvB)
  : m_linearJointAxis(btVector3(float(0.),float(0.),float(0.)))
  , m_aJ(axisInA)
  , m_bJ(-axisInB)
 {
  m_0MinvJt = inertiaInvA * m_aJ;
  m_1MinvJt = inertiaInvB * m_bJ;
  m_Adiag = m_0MinvJt.dot(m_aJ) + m_1MinvJt.dot(m_bJ);

  ;
 }


 btJacobianEntry(
  const btMatrix3x3& world2A,
  const btVector3& rel_pos1,const btVector3& rel_pos2,
  const btVector3& jointAxis,
  const btVector3& inertiaInvA,
  const float massInvA)
  :m_linearJointAxis(jointAxis)
 {
  m_aJ= world2A*(rel_pos1.cross(jointAxis));
  m_bJ = world2A*(rel_pos2.cross(-jointAxis));
  m_0MinvJt = inertiaInvA * m_aJ;
  m_1MinvJt = btVector3(float(0.),float(0.),float(0.));
  m_Adiag = massInvA + m_0MinvJt.dot(m_aJ);

  ;
 }

 float getDiagonal() const { return m_Adiag; }


 float getNonDiagonal(const btJacobianEntry& jacB, const float massInvA) const
 {
  const btJacobianEntry& jacA = *this;
  float lin = massInvA * jacA.m_linearJointAxis.dot(jacB.m_linearJointAxis);
  float ang = jacA.m_0MinvJt.dot(jacB.m_aJ);
  return lin + ang;
 }




 float getNonDiagonal(const btJacobianEntry& jacB,const float massInvA,const float massInvB) const
 {
  const btJacobianEntry& jacA = *this;
  btVector3 lin = jacA.m_linearJointAxis * jacB.m_linearJointAxis;
  btVector3 ang0 = jacA.m_0MinvJt * jacB.m_aJ;
  btVector3 ang1 = jacA.m_1MinvJt * jacB.m_bJ;
  btVector3 lin0 = massInvA * lin ;
  btVector3 lin1 = massInvB * lin;
  btVector3 sum = ang0+ang1+lin0+lin1;
  return sum[0]+sum[1]+sum[2];
 }

 float getRelativeVelocity(const btVector3& linvelA,const btVector3& angvelA,const btVector3& linvelB,const btVector3& angvelB)
 {
  btVector3 linrel = linvelA - linvelB;
  btVector3 angvela = angvelA * m_aJ;
  btVector3 angvelb = angvelB * m_bJ;
  linrel *= m_linearJointAxis;
  angvela += angvelb;
  angvela += linrel;
  float rel_vel2 = angvela[0]+angvela[1]+angvela[2];
  return rel_vel2 + 1.19209289550781250000e-7F;
 }


 btVector3 m_linearJointAxis;
 btVector3 m_aJ;
 btVector3 m_bJ;
 btVector3 m_0MinvJt;
 btVector3 m_1MinvJt;

 float m_Adiag;

};
# 21 "../../bullet/src/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btTypedConstraint.h" 1
# 19 "../../bullet/src/BulletDynamics/ConstraintSolver/btTypedConstraint.h"
class btRigidBody;

# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btSolverConstraint.h" 1
# 19 "../../bullet/src/BulletDynamics/ConstraintSolver/btSolverConstraint.h"
class btRigidBody;





# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btSolverBody.h" 1
# 19 "../../bullet/src/BulletDynamics/ConstraintSolver/btSolverBody.h"
class btRigidBody;
# 108 "../../bullet/src/BulletDynamics/ConstraintSolver/btSolverBody.h"
class btSolverBodyObsolete
 { public: 
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };
 btVector3 m_deltaLinearVelocity;
 btVector3 m_deltaAngularVelocity;
 btVector3 m_angularFactor;
 btVector3 m_invMass;
 btRigidBody* m_originalBody;
 btVector3 m_pushVelocity;
 btVector3 m_turnVelocity;


 inline void getVelocityInLocalPointObsolete(const btVector3& rel_pos, btVector3& velocity ) const
 {
  if (m_originalBody)
   velocity = m_originalBody->getLinearVelocity()+m_deltaLinearVelocity + (m_originalBody->getAngularVelocity()+m_deltaAngularVelocity).cross(rel_pos);
  else
   velocity.setValue(0,0,0);
 }

 inline void getAngularVelocity(btVector3& angVel) const
 {
  if (m_originalBody)
   angVel = m_originalBody->getAngularVelocity()+m_deltaAngularVelocity;
  else
   angVel.setValue(0,0,0);
 }



 inline void applyImpulse(const btVector3& linearComponent, const btVector3& angularComponent,const float impulseMagnitude)
 {

  {
   m_deltaLinearVelocity += linearComponent*impulseMagnitude;
   m_deltaAngularVelocity += angularComponent*(impulseMagnitude*m_angularFactor);
  }
 }

 inline void internalApplyPushImpulse(const btVector3& linearComponent, const btVector3& angularComponent,float impulseMagnitude)
 {
  if (m_originalBody)
  {
   m_pushVelocity += linearComponent*impulseMagnitude;
   m_turnVelocity += angularComponent*(impulseMagnitude*m_angularFactor);
  }
 }

 void writebackVelocity()
 {
  if (m_originalBody)
  {
   m_originalBody->setLinearVelocity(m_originalBody->getLinearVelocity()+ m_deltaLinearVelocity);
   m_originalBody->setAngularVelocity(m_originalBody->getAngularVelocity()+m_deltaAngularVelocity);


  }
 }


 void writebackVelocity(float timeStep)
 {
        () timeStep;
  if (m_originalBody)
  {
   m_originalBody->setLinearVelocity(m_originalBody->getLinearVelocity()+ m_deltaLinearVelocity);
   m_originalBody->setAngularVelocity(m_originalBody->getAngularVelocity()+m_deltaAngularVelocity);


   btTransform newTransform;
   btTransformUtil::integrateTransform(m_originalBody->getWorldTransform(),m_pushVelocity,m_turnVelocity,timeStep,newTransform);
   m_originalBody->setWorldTransform(newTransform);


  }
 }



};
# 26 "../../bullet/src/BulletDynamics/ConstraintSolver/btSolverConstraint.h" 2



class btSolverConstraint
 { public: 
 inline void* operator new(size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete(void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new(size_t, void* ptr) { return ptr; } inline void operator delete(void*, void*) { } inline void* operator new[](size_t sizeInBytes) { return btAlignedAllocInternal(sizeInBytes,16); } inline void operator delete[](void* ptr) { btAlignedFreeInternal(ptr); } inline void* operator new[](size_t, void* ptr) { return ptr; } inline void operator delete[](void*, void*) { };

 btVector3 m_relpos1CrossNormal;
 btVector3 m_contactNormal;

 btVector3 m_relpos2CrossNormal;


 btVector3 m_angularComponentA;
 btVector3 m_angularComponentB;

 mutable float m_appliedPushImpulse;
 mutable float m_appliedImpulse;


 float m_friction;
 float m_jacDiagABInv;
 union
 {
  int m_numConsecutiveRowsPerKernel;
  float m_unusedPadding0;
 };

 union
 {
  int m_frictionIndex;
  float m_unusedPadding1;
 };
 union
 {
  btRigidBody* m_solverBodyA;
  int m_companionIdA;
 };
 union
 {
  btRigidBody* m_solverBodyB;
  int m_companionIdB;
 };

 union
 {
  void* m_originalContactPoint;
  float m_unusedPadding4;
 };

 float m_rhs;
 float m_cfm;
 float m_lowerLimit;
 float m_upperLimit;

 float m_rhsPenetration;

 enum btSolverConstraintType
 {
  BT_SOLVER_CONTACT_1D = 0,
  BT_SOLVER_FRICTION_1D
 };
};

typedef btAlignedObjectArray<btSolverConstraint> btConstraintArray;
# 22 "../../bullet/src/BulletDynamics/ConstraintSolver/btTypedConstraint.h" 2

class btSerializer;


enum btTypedConstraintType
{
 POINT2POINT_CONSTRAINT_TYPE=3,
 HINGE_CONSTRAINT_TYPE,
 CONETWIST_CONSTRAINT_TYPE,
 D6_CONSTRAINT_TYPE,
 SLIDER_CONSTRAINT_TYPE,
 CONTACT_CONSTRAINT_TYPE,
 D6_SPRING_CONSTRAINT_TYPE,
 MAX_CONSTRAINT_TYPE
};


enum btConstraintParams
{
 BT_CONSTRAINT_ERP=1,
 BT_CONSTRAINT_STOP_ERP,
 BT_CONSTRAINT_CFM,
 BT_CONSTRAINT_STOP_CFM
};
# 55 "../../bullet/src/BulletDynamics/ConstraintSolver/btTypedConstraint.h"
class btTypedConstraint : public btTypedObject
{
 int m_userConstraintType;

 union
 {
  int m_userConstraintId;
  void* m_userConstraintPtr;
 };

 float m_breakingImpulseThreshold;
 bool m_isEnabled;


 bool m_needsFeedback;

 btTypedConstraint& operator=(btTypedConstraint& other)
 {
  ;
  () other;
  return *this;
 }

protected:
 btRigidBody& m_rbA;
 btRigidBody& m_rbB;
 float m_appliedImpulse;
 float m_dbgDrawSize;


 float getMotorFactor(float pos, float lowLim, float uppLim, float vel, float timeFact);

 static btRigidBody& getFixedBody();

public:

 virtual ~btTypedConstraint() {};
 btTypedConstraint(btTypedConstraintType type, btRigidBody& rbA);
 btTypedConstraint(btTypedConstraintType type, btRigidBody& rbA,btRigidBody& rbB);

 class btConstraintInfo1  { public: 
  int m_numConstraintRows,nub;
 };

 class btConstraintInfo2  { public: 


  float fps,erp;





  float *m_J1linearAxis,*m_J1angularAxis,*m_J2linearAxis,*m_J2angularAxis;


  int rowskip;




  float *m_constraintError,*cfm;


  float *m_lowerLimit,*m_upperLimit;





  int *findex;

  int m_numIterations;


  float m_damping;
 };


 virtual void buildJacobian() {};


 virtual void setupSolverConstraint(btConstraintArray& ca, int solverBodyA,int solverBodyB, float timeStep)
 {
        ()ca;
        ()solverBodyA;
        ()solverBodyB;
        ()timeStep;
 }


 virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info)=0;


 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info)=0;


 void internalSetAppliedImpulse(float appliedImpulse)
 {
  m_appliedImpulse = appliedImpulse;
 }

 float internalGetAppliedImpulse()
 {
  return m_appliedImpulse;
 }


 float getBreakingImpulseThreshold() const
 {
  return m_breakingImpulseThreshold;
 }

 void setBreakingImpulseThreshold(float threshold)
 {
  m_breakingImpulseThreshold = threshold;
 }

 bool isEnabled() const
 {
  return m_isEnabled;
 }

 void setEnabled(bool enabled)
 {
  m_isEnabled=enabled;
 }



 virtual void solveConstraintObsolete(btRigidBody& ,btRigidBody& ,float ) {};


 const btRigidBody& getRigidBodyA() const
 {
  return m_rbA;
 }
 const btRigidBody& getRigidBodyB() const
 {
  return m_rbB;
 }

 btRigidBody& getRigidBodyA()
 {
  return m_rbA;
 }
 btRigidBody& getRigidBodyB()
 {
  return m_rbB;
 }

 int getUserConstraintType() const
 {
  return m_userConstraintType ;
 }

 void setUserConstraintType(int userConstraintType)
 {
  m_userConstraintType = userConstraintType;
 };

 void setUserConstraintId(int uid)
 {
  m_userConstraintId = uid;
 }

 int getUserConstraintId() const
 {
  return m_userConstraintId;
 }

 void setUserConstraintPtr(void* ptr)
 {
  m_userConstraintPtr = ptr;
 }

 void* getUserConstraintPtr()
 {
  return m_userConstraintPtr;
 }

 int getUid() const
 {
  return m_userConstraintId;
 }

 bool needsFeedback() const
 {
  return m_needsFeedback;
 }



 void enableFeedback(bool needsFeedback)
 {
  m_needsFeedback = needsFeedback;
 }



 float getAppliedImpulse() const
 {
  ;
  return m_appliedImpulse;
 }

 btTypedConstraintType getConstraintType () const
 {
  return btTypedConstraintType(m_objectType);
 }

 void setDbgDrawSize(float dbgDrawSize)
 {
  m_dbgDrawSize = dbgDrawSize;
 }
 float getDbgDrawSize()
 {
  return m_dbgDrawSize;
 }



 virtual void setParam(int num, float value, int axis = -1) = 0;


 virtual float getParam(int num, int axis = -1) const = 0;

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

};



inline float btAdjustAngleToLimits(float angleInRadians, float angleLowerLimitInRadians, float angleUpperLimitInRadians)
{
 if(angleLowerLimitInRadians >= angleUpperLimitInRadians)
 {
  return angleInRadians;
 }
 else if(angleInRadians < angleLowerLimitInRadians)
 {
  float diffLo = btFabs(btNormalizeAngle(angleLowerLimitInRadians - angleInRadians));
  float diffHi = btFabs(btNormalizeAngle(angleUpperLimitInRadians - angleInRadians));
  return (diffLo < diffHi) ? angleInRadians : (angleInRadians + float(6.283185307179586232));
 }
 else if(angleInRadians > angleUpperLimitInRadians)
 {
  float diffHi = btFabs(btNormalizeAngle(angleInRadians - angleUpperLimitInRadians));
  float diffLo = btFabs(btNormalizeAngle(angleInRadians - angleLowerLimitInRadians));
  return (diffLo < diffHi) ? (angleInRadians - float(6.283185307179586232)) : angleInRadians;
 }
 else
 {
  return angleInRadians;
 }
}


class btTypedConstraintData
 { public: 
 btRigidBodyFloatData *m_rbA;
 btRigidBodyFloatData *m_rbB;
 char *m_name;

 int m_objectType;
 int m_userConstraintType;
 int m_userConstraintId;
 int m_needsFeedback;

 float m_appliedImpulse;
 float m_dbgDrawSize;

 int m_disableCollisionsBetweenLinkedBodies;
 char m_pad4[4];

};

inline int btTypedConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btTypedConstraintData);
}



class btAngularLimit
{
private:
 float
  m_center,
  m_halfRange,
  m_softness,
  m_biasFactor,
  m_relaxationFactor,
  m_correction,
  m_sign;

 bool
  m_solveLimit;

public:

 btAngularLimit()
  :m_center(0.0f),
  m_halfRange(-1.0f),
  m_softness(0.9f),
  m_biasFactor(0.3f),
  m_relaxationFactor(1.0f),
  m_correction(0.0f),
  m_sign(0.0f),
  m_solveLimit(false)
 {}




 void set(float low, float high, float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f);



 void test(const float angle);


 inline float getSoftness() const
 {
  return m_softness;
 }


 inline float getBiasFactor() const
 {
  return m_biasFactor;
 }


 inline float getRelaxationFactor() const
 {
  return m_relaxationFactor;
 }


 inline float getCorrection() const
 {
  return m_correction;
 }


 inline float getSign() const
 {
  return m_sign;
 }


 inline float getHalfRange() const
 {
  return m_halfRange;
 }


 inline bool isLimit() const
 {
  return m_solveLimit;
 }



 void fit(float& angle) const;


 float getError() const;

 float getLow() const;

 float getHigh() const;

};
# 22 "../../bullet/src/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h" 2

class btRigidBody;
# 34 "../../bullet/src/BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h"
class btConstraintSetting
 { public: 
 btConstraintSetting() :
  m_tau(float(0.3)),
  m_damping(float(1.)),
  m_impulseClamp(float(0.))
 {
 }
 float m_tau;
 float m_damping;
 float m_impulseClamp;
};

enum btPoint2PointFlags
{
 BT_P2P_FLAGS_ERP = 1,
 BT_P2P_FLAGS_CFM = 2
};


class btPoint2PointConstraint : public btTypedConstraint
{



 btJacobianEntry m_jac[3];

 btVector3 m_pivotInA;
 btVector3 m_pivotInB;

 int m_flags;
 float m_erp;
 float m_cfm;

public:


 bool m_useSolveConstraintObsolete;

 btConstraintSetting m_setting;

 btPoint2PointConstraint(btRigidBody& rbA,btRigidBody& rbB, const btVector3& pivotInA,const btVector3& pivotInB);

 btPoint2PointConstraint(btRigidBody& rbA,const btVector3& pivotInA);


 virtual void buildJacobian();

 virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info);

 void getInfo1NonVirtual (btTypedConstraint::btConstraintInfo1* info);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);

 void getInfo2NonVirtual (btTypedConstraint::btConstraintInfo2* info, const btTransform& body0_trans, const btTransform& body1_trans);

 void updateRHS(float timeStep);

 void setPivotA(const btVector3& pivotA)
 {
  m_pivotInA = pivotA;
 }

 void setPivotB(const btVector3& pivotB)
 {
  m_pivotInB = pivotB;
 }

 const btVector3& getPivotInA() const
 {
  return m_pivotInA;
 }

 const btVector3& getPivotInB() const
 {
  return m_pivotInB;
 }



 virtual void setParam(int num, float value, int axis = -1);

 virtual float getParam(int num, int axis = -1) const;

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btPoint2PointConstraintFloatData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btVector3FloatData m_pivotInA;
 btVector3FloatData m_pivotInB;
};


class btPoint2PointConstraintDoubleData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btVector3DoubleData m_pivotInA;
 btVector3DoubleData m_pivotInB;
};


inline int btPoint2PointConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btPoint2PointConstraintFloatData);

}


inline const char* btPoint2PointConstraint::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btPoint2PointConstraintFloatData* p2pData = (btPoint2PointConstraintFloatData*)dataBuffer;

 btTypedConstraint::serialize(&p2pData->m_typeConstraintData,serializer);
 m_pivotInA.serialize(p2pData->m_pivotInA);
 m_pivotInB.serialize(p2pData->m_pivotInB);

 return "btPoint2PointConstraintFloatData";
}
# 29 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btHingeConstraint.h" 1
# 28 "../../bullet/src/BulletDynamics/ConstraintSolver/btHingeConstraint.h"
class btRigidBody;
# 40 "../../bullet/src/BulletDynamics/ConstraintSolver/btHingeConstraint.h"
enum btHingeFlags
{
 BT_HINGE_FLAGS_CFM_STOP = 1,
 BT_HINGE_FLAGS_ERP_STOP = 2,
 BT_HINGE_FLAGS_CFM_NORM = 4
};




class btHingeConstraint : public btTypedConstraint
{



 btJacobianEntry m_jac[3];
 btJacobianEntry m_jacAng[3];

 btTransform m_rbAFrame;
 btTransform m_rbBFrame;

 float m_motorTargetVelocity;
 float m_maxMotorImpulse;



 btAngularLimit m_limit;
# 80 "../../bullet/src/BulletDynamics/ConstraintSolver/btHingeConstraint.h"
 float m_kHinge;


 float m_accLimitImpulse;
 float m_hingeAngle;
 float m_referenceSign;

 bool m_angularOnly;
 bool m_enableAngularMotor;
 bool m_useSolveConstraintObsolete;
 bool m_useOffsetForConstraintFrame;
 bool m_useReferenceFrameA;

 float m_accMotorImpulse;

 int m_flags;
 float m_normalCFM;
 float m_stopCFM;
 float m_stopERP;


public:

 btHingeConstraint(btRigidBody& rbA,btRigidBody& rbB, const btVector3& pivotInA,const btVector3& pivotInB, const btVector3& axisInA,const btVector3& axisInB, bool useReferenceFrameA = false);

 btHingeConstraint(btRigidBody& rbA,const btVector3& pivotInA,const btVector3& axisInA, bool useReferenceFrameA = false);

 btHingeConstraint(btRigidBody& rbA,btRigidBody& rbB, const btTransform& rbAFrame, const btTransform& rbBFrame, bool useReferenceFrameA = false);

 btHingeConstraint(btRigidBody& rbA,const btTransform& rbAFrame, bool useReferenceFrameA = false);


 virtual void buildJacobian();

 virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info);

 void getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1* info);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);

 void getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2* info,const btTransform& transA,const btTransform& transB,const btVector3& angVelA,const btVector3& angVelB);

 void getInfo2Internal(btTypedConstraint::btConstraintInfo2* info,const btTransform& transA,const btTransform& transB,const btVector3& angVelA,const btVector3& angVelB);
 void getInfo2InternalUsingFrameOffset(btTypedConstraint::btConstraintInfo2* info,const btTransform& transA,const btTransform& transB,const btVector3& angVelA,const btVector3& angVelB);


 void updateRHS(float timeStep);

 const btRigidBody& getRigidBodyA() const
 {
  return m_rbA;
 }
 const btRigidBody& getRigidBodyB() const
 {
  return m_rbB;
 }

 btRigidBody& getRigidBodyA()
 {
  return m_rbA;
 }

 btRigidBody& getRigidBodyB()
 {
  return m_rbB;
 }

 btTransform& getFrameOffsetA()
 {
 return m_rbAFrame;
 }

 btTransform& getFrameOffsetB()
 {
  return m_rbBFrame;
 }

 void setFrames(const btTransform& frameA, const btTransform& frameB);

 void setAngularOnly(bool angularOnly)
 {
  m_angularOnly = angularOnly;
 }

 void enableAngularMotor(bool enableMotor,float targetVelocity,float maxMotorImpulse)
 {
  m_enableAngularMotor = enableMotor;
  m_motorTargetVelocity = targetVelocity;
  m_maxMotorImpulse = maxMotorImpulse;
 }




 void enableMotor(bool enableMotor) { m_enableAngularMotor = enableMotor; }
 void setMaxMotorImpulse(float maxMotorImpulse) { m_maxMotorImpulse = maxMotorImpulse; }
 void setMotorTarget(const btQuaternion& qAinB, float dt);
 void setMotorTarget(float targetAngle, float dt);


 void setLimit(float low,float high,float _softness = 0.9f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)
 {

  m_limit.set(low, high, _softness, _biasFactor, _relaxationFactor);







 }

 void setAxis(btVector3& axisInA)
 {
  btVector3 rbAxisA1, rbAxisA2;
  btPlaneSpace1(axisInA, rbAxisA1, rbAxisA2);
  btVector3 pivotInA = m_rbAFrame.getOrigin();

  m_rbAFrame.getBasis().setValue( rbAxisA1.getX(),rbAxisA2.getX(),axisInA.getX(),
          rbAxisA1.getY(),rbAxisA2.getY(),axisInA.getY(),
          rbAxisA1.getZ(),rbAxisA2.getZ(),axisInA.getZ() );

  btVector3 axisInB = m_rbA.getCenterOfMassTransform().getBasis() * axisInA;

  btQuaternion rotationArc = shortestArcQuat(axisInA,axisInB);
  btVector3 rbAxisB1 = quatRotate(rotationArc,rbAxisA1);
  btVector3 rbAxisB2 = axisInB.cross(rbAxisB1);

  m_rbBFrame.getOrigin() = m_rbB.getCenterOfMassTransform().inverse()(m_rbA.getCenterOfMassTransform()(pivotInA));

  m_rbBFrame.getBasis().setValue( rbAxisB1.getX(),rbAxisB2.getX(),axisInB.getX(),
          rbAxisB1.getY(),rbAxisB2.getY(),axisInB.getY(),
          rbAxisB1.getZ(),rbAxisB2.getZ(),axisInB.getZ() );
  m_rbBFrame.getBasis() = m_rbB.getCenterOfMassTransform().getBasis().inverse() * m_rbBFrame.getBasis();

 }

 float getLowerLimit() const
 {

 return m_limit.getLow();



 }

 float getUpperLimit() const
 {

 return m_limit.getHigh();



 }


 float getHingeAngle();

 float getHingeAngle(const btTransform& transA,const btTransform& transB);

 void testLimit(const btTransform& transA,const btTransform& transB);


 const btTransform& getAFrame() const { return m_rbAFrame; };
 const btTransform& getBFrame() const { return m_rbBFrame; };

 btTransform& getAFrame() { return m_rbAFrame; };
 btTransform& getBFrame() { return m_rbBFrame; };

 inline int getSolveLimit()
 {

 return m_limit.isLimit();



 }

 inline float getLimitSign()
 {

 return m_limit.getSign();



 }

 inline bool getAngularOnly()
 {
  return m_angularOnly;
 }
 inline bool getEnableAngularMotor()
 {
  return m_enableAngularMotor;
 }
 inline float getMotorTargetVelosity()
 {
  return m_motorTargetVelocity;
 }
 inline float getMaxMotorImpulse()
 {
  return m_maxMotorImpulse;
 }

 bool getUseFrameOffset() { return m_useOffsetForConstraintFrame; }
 void setUseFrameOffset(bool frameOffsetOnOff) { m_useOffsetForConstraintFrame = frameOffsetOnOff; }




 virtual void setParam(int num, float value, int axis = -1);

 virtual float getParam(int num, int axis = -1) const;

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btHingeConstraintDoubleData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btTransformDoubleData m_rbAFrame;
 btTransformDoubleData m_rbBFrame;
 int m_useReferenceFrameA;
 int m_angularOnly;
 int m_enableAngularMotor;
 float m_motorTargetVelocity;
 float m_maxMotorImpulse;

 float m_lowerLimit;
 float m_upperLimit;
 float m_limitSoftness;
 float m_biasFactor;
 float m_relaxationFactor;

};

class btHingeConstraintFloatData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btTransformFloatData m_rbAFrame;
 btTransformFloatData m_rbBFrame;
 int m_useReferenceFrameA;
 int m_angularOnly;

 int m_enableAngularMotor;
 float m_motorTargetVelocity;
 float m_maxMotorImpulse;

 float m_lowerLimit;
 float m_upperLimit;
 float m_limitSoftness;
 float m_biasFactor;
 float m_relaxationFactor;

};



inline int btHingeConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btHingeConstraintFloatData);
}


inline const char* btHingeConstraint::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btHingeConstraintFloatData* hingeData = (btHingeConstraintFloatData*)dataBuffer;
 btTypedConstraint::serialize(&hingeData->m_typeConstraintData,serializer);

 m_rbAFrame.serialize(hingeData->m_rbAFrame);
 m_rbBFrame.serialize(hingeData->m_rbBFrame);

 hingeData->m_angularOnly = m_angularOnly;
 hingeData->m_enableAngularMotor = m_enableAngularMotor;
 hingeData->m_maxMotorImpulse = float(m_maxMotorImpulse);
 hingeData->m_motorTargetVelocity = float(m_motorTargetVelocity);
 hingeData->m_useReferenceFrameA = m_useReferenceFrameA;

 hingeData->m_lowerLimit = float(m_limit.getLow());
 hingeData->m_upperLimit = float(m_limit.getHigh());
 hingeData->m_limitSoftness = float(m_limit.getSoftness());
 hingeData->m_biasFactor = float(m_limit.getBiasFactor());
 hingeData->m_relaxationFactor = float(m_limit.getRelaxationFactor());
# 378 "../../bullet/src/BulletDynamics/ConstraintSolver/btHingeConstraint.h"
 return "btHingeConstraintFloatData";
}
# 30 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btConeTwistConstraint.h" 1
# 43 "../../bullet/src/BulletDynamics/ConstraintSolver/btConeTwistConstraint.h"
class btRigidBody;

enum btConeTwistFlags
{
 BT_CONETWIST_FLAGS_LIN_CFM = 1,
 BT_CONETWIST_FLAGS_LIN_ERP = 2,
 BT_CONETWIST_FLAGS_ANG_CFM = 4
};


class btConeTwistConstraint : public btTypedConstraint
{



 btJacobianEntry m_jac[3];

 btTransform m_rbAFrame;
 btTransform m_rbBFrame;

 float m_limitSoftness;
 float m_biasFactor;
 float m_relaxationFactor;

 float m_damping;

 float m_swingSpan1;
 float m_swingSpan2;
 float m_twistSpan;

 float m_fixThresh;

 btVector3 m_swingAxis;
 btVector3 m_twistAxis;

 float m_kSwing;
 float m_kTwist;

 float m_twistLimitSign;
 float m_swingCorrection;
 float m_twistCorrection;

 float m_twistAngle;

 float m_accSwingLimitImpulse;
 float m_accTwistLimitImpulse;

 bool m_angularOnly;
 bool m_solveTwistLimit;
 bool m_solveSwingLimit;

 bool m_useSolveConstraintObsolete;


 float m_swingLimitRatio;
 float m_twistLimitRatio;
 btVector3 m_twistAxisA;


 bool m_bMotorEnabled;
 bool m_bNormalizedMotorStrength;
 btQuaternion m_qTarget;
 float m_maxMotorImpulse;
 btVector3 m_accMotorImpulse;


 int m_flags;
 float m_linCFM;
 float m_linERP;
 float m_angCFM;

protected:

 void init();

 void computeConeLimitInfo(const btQuaternion& qCone,
  float& swingAngle, btVector3& vSwingAxis, float& swingLimit);

 void computeTwistLimitInfo(const btQuaternion& qTwist,
  float& twistAngle, btVector3& vTwistAxis);

 void adjustSwingAxisToUseEllipseNormal(btVector3& vSwingAxis) const;


public:

 btConeTwistConstraint(btRigidBody& rbA,btRigidBody& rbB,const btTransform& rbAFrame, const btTransform& rbBFrame);

 btConeTwistConstraint(btRigidBody& rbA,const btTransform& rbAFrame);

 virtual void buildJacobian();

 virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info);

 void getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1* info);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);

 void getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2* info,const btTransform& transA,const btTransform& transB,const btMatrix3x3& invInertiaWorldA,const btMatrix3x3& invInertiaWorldB);

 virtual void solveConstraintObsolete(btRigidBody& bodyA,btRigidBody& bodyB,float timeStep);

 void updateRHS(float timeStep);


 const btRigidBody& getRigidBodyA() const
 {
  return m_rbA;
 }
 const btRigidBody& getRigidBodyB() const
 {
  return m_rbB;
 }

 void setAngularOnly(bool angularOnly)
 {
  m_angularOnly = angularOnly;
 }

 void setLimit(int limitIndex,float limitValue)
 {
  switch (limitIndex)
  {
  case 3:
   {
    m_twistSpan = limitValue;
    break;
   }
  case 4:
   {
    m_swingSpan2 = limitValue;
    break;
   }
  case 5:
   {
    m_swingSpan1 = limitValue;
    break;
   }
  default:
   {
   }
  };
 }
# 198 "../../bullet/src/BulletDynamics/ConstraintSolver/btConeTwistConstraint.h"
 void setLimit(float _swingSpan1,float _swingSpan2,float _twistSpan, float _softness = 1.f, float _biasFactor = 0.3f, float _relaxationFactor = 1.0f)
 {
  m_swingSpan1 = _swingSpan1;
  m_swingSpan2 = _swingSpan2;
  m_twistSpan = _twistSpan;

  m_limitSoftness = _softness;
  m_biasFactor = _biasFactor;
  m_relaxationFactor = _relaxationFactor;
 }

 const btTransform& getAFrame() { return m_rbAFrame; };
 const btTransform& getBFrame() { return m_rbBFrame; };

 inline int getSolveTwistLimit()
 {
  return m_solveTwistLimit;
 }

 inline int getSolveSwingLimit()
 {
  return m_solveTwistLimit;
 }

 inline float getTwistLimitSign()
 {
  return m_twistLimitSign;
 }

 void calcAngleInfo();
 void calcAngleInfo2(const btTransform& transA, const btTransform& transB,const btMatrix3x3& invInertiaWorldA,const btMatrix3x3& invInertiaWorldB);

 inline float getSwingSpan1()
 {
  return m_swingSpan1;
 }
 inline float getSwingSpan2()
 {
  return m_swingSpan2;
 }
 inline float getTwistSpan()
 {
  return m_twistSpan;
 }
 inline float getTwistAngle()
 {
  return m_twistAngle;
 }
 bool isPastSwingLimit() { return m_solveSwingLimit; }

 void setDamping(float damping) { m_damping = damping; }

 void enableMotor(bool b) { m_bMotorEnabled = b; }
 void setMaxMotorImpulse(float maxMotorImpulse) { m_maxMotorImpulse = maxMotorImpulse; m_bNormalizedMotorStrength = false; }
 void setMaxMotorImpulseNormalized(float maxMotorImpulse) { m_maxMotorImpulse = maxMotorImpulse; m_bNormalizedMotorStrength = true; }

 float getFixThresh() { return m_fixThresh; }
 void setFixThresh(float fixThresh) { m_fixThresh = fixThresh; }





 void setMotorTarget(const btQuaternion &q);


 void setMotorTargetInConstraintSpace(const btQuaternion &q);

 btVector3 GetPointForAngle(float fAngleInRadians, float fLength) const;



 virtual void setParam(int num, float value, int axis = -1);

 virtual void setFrames(const btTransform& frameA, const btTransform& frameB);

 const btTransform& getFrameOffsetA() const
 {
  return m_rbAFrame;
 }

 const btTransform& getFrameOffsetB() const
 {
  return m_rbBFrame;
 }



 virtual float getParam(int num, int axis = -1) const;

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

};


class btConeTwistConstraintData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btTransformFloatData m_rbAFrame;
 btTransformFloatData m_rbBFrame;


 float m_swingSpan1;
 float m_swingSpan2;
 float m_twistSpan;
 float m_limitSoftness;
 float m_biasFactor;
 float m_relaxationFactor;

 float m_damping;

 char m_pad[4];

};



inline int btConeTwistConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btConeTwistConstraintData);

}



inline const char* btConeTwistConstraint::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btConeTwistConstraintData* cone = (btConeTwistConstraintData*) dataBuffer;
 btTypedConstraint::serialize(&cone->m_typeConstraintData,serializer);

 m_rbAFrame.serializeFloat(cone->m_rbAFrame);
 m_rbBFrame.serializeFloat(cone->m_rbBFrame);

 cone->m_swingSpan1 = float(m_swingSpan1);
 cone->m_swingSpan2 = float(m_swingSpan2);
 cone->m_twistSpan = float(m_twistSpan);
 cone->m_limitSoftness = float(m_limitSoftness);
 cone->m_biasFactor = float(m_biasFactor);
 cone->m_relaxationFactor = float(m_relaxationFactor);
 cone->m_damping = float(m_damping);

 return "btConeTwistConstraintData";
}
# 31 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h" 1
# 34 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h"
class btRigidBody;





class btRotationalLimitMotor
{
public:


    float m_loLimit;
    float m_hiLimit;
    float m_targetVelocity;
    float m_maxMotorForce;
    float m_maxLimitForce;
    float m_damping;
    float m_limitSoftness;
    float m_normalCFM;
    float m_stopERP;
    float m_stopCFM;
    float m_bounce;
    bool m_enableMotor;





    float m_currentLimitError;
    float m_currentPosition;
    int m_currentLimit;
    float m_accumulatedImpulse;


    btRotationalLimitMotor()
    {
     m_accumulatedImpulse = 0.f;
        m_targetVelocity = 0;
        m_maxMotorForce = 0.1f;
        m_maxLimitForce = 300.0f;
        m_loLimit = 1.0f;
        m_hiLimit = -1.0f;
  m_normalCFM = 0.f;
  m_stopERP = 0.2f;
  m_stopCFM = 0.f;
        m_bounce = 0.0f;
        m_damping = 1.0f;
        m_limitSoftness = 0.5f;
        m_currentLimit = 0;
        m_currentLimitError = 0;
        m_enableMotor = false;
    }

    btRotationalLimitMotor(const btRotationalLimitMotor & limot)
    {
        m_targetVelocity = limot.m_targetVelocity;
        m_maxMotorForce = limot.m_maxMotorForce;
        m_limitSoftness = limot.m_limitSoftness;
        m_loLimit = limot.m_loLimit;
        m_hiLimit = limot.m_hiLimit;
  m_normalCFM = limot.m_normalCFM;
  m_stopERP = limot.m_stopERP;
  m_stopCFM = limot.m_stopCFM;
        m_bounce = limot.m_bounce;
        m_currentLimit = limot.m_currentLimit;
        m_currentLimitError = limot.m_currentLimitError;
        m_enableMotor = limot.m_enableMotor;
    }




    bool isLimited()
    {
     if(m_loLimit > m_hiLimit) return false;
     return true;
    }


    bool needApplyTorques()
    {
     if(m_currentLimit == 0 && m_enableMotor == false) return false;
     return true;
    }





 int testLimitValue(float test_value);


    float solveAngularLimits(float timeStep,btVector3& axis, float jacDiagABInv,btRigidBody * body0, btRigidBody * body1);

};



class btTranslationalLimitMotor
{
public:
 btVector3 m_lowerLimit;
    btVector3 m_upperLimit;
    btVector3 m_accumulatedImpulse;


    float m_limitSoftness;
    float m_damping;
    float m_restitution;
 btVector3 m_normalCFM;
    btVector3 m_stopERP;
 btVector3 m_stopCFM;

 bool m_enableMotor[3];
    btVector3 m_targetVelocity;
    btVector3 m_maxMotorForce;
    btVector3 m_currentLimitError;
    btVector3 m_currentLinearDiff;
    int m_currentLimit[3];

    btTranslationalLimitMotor()
    {
     m_lowerLimit.setValue(0.f,0.f,0.f);
     m_upperLimit.setValue(0.f,0.f,0.f);
     m_accumulatedImpulse.setValue(0.f,0.f,0.f);
  m_normalCFM.setValue(0.f, 0.f, 0.f);
  m_stopERP.setValue(0.2f, 0.2f, 0.2f);
  m_stopCFM.setValue(0.f, 0.f, 0.f);

     m_limitSoftness = 0.7f;
     m_damping = float(1.0f);
     m_restitution = float(0.5f);
  for(int i=0; i < 3; i++)
  {
   m_enableMotor[i] = false;
   m_targetVelocity[i] = float(0.f);
   m_maxMotorForce[i] = float(0.f);
  }
    }

    btTranslationalLimitMotor(const btTranslationalLimitMotor & other )
    {
     m_lowerLimit = other.m_lowerLimit;
     m_upperLimit = other.m_upperLimit;
     m_accumulatedImpulse = other.m_accumulatedImpulse;

     m_limitSoftness = other.m_limitSoftness ;
     m_damping = other.m_damping;
     m_restitution = other.m_restitution;
  m_normalCFM = other.m_normalCFM;
  m_stopERP = other.m_stopERP;
  m_stopCFM = other.m_stopCFM;

  for(int i=0; i < 3; i++)
  {
   m_enableMotor[i] = other.m_enableMotor[i];
   m_targetVelocity[i] = other.m_targetVelocity[i];
   m_maxMotorForce[i] = other.m_maxMotorForce[i];
  }
    }
# 202 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h"
    inline bool isLimited(int limitIndex)
    {
       return (m_upperLimit[limitIndex] >= m_lowerLimit[limitIndex]);
    }
    inline bool needApplyForce(int limitIndex)
    {
     if(m_currentLimit[limitIndex] == 0 && m_enableMotor[limitIndex] == false) return false;
     return true;
    }
 int testLimitValue(int limitIndex, float test_value);


    float solveLinearAxis(
     float timeStep,
        float jacDiagABInv,
        btRigidBody& body1,const btVector3 &pointInA,
        btRigidBody& body2,const btVector3 &pointInB,
        int limit_index,
        const btVector3 & axis_normal_on_a,
  const btVector3 & anchorPos);


};

enum bt6DofFlags
{
 BT_6DOF_FLAGS_CFM_NORM = 1,
 BT_6DOF_FLAGS_CFM_STOP = 2,
 BT_6DOF_FLAGS_ERP_STOP = 4
};
# 271 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h"
class btGeneric6DofConstraint : public btTypedConstraint
{
protected:



 btTransform m_frameInA;
    btTransform m_frameInB;




    btJacobianEntry m_jacLinear[3];
    btJacobianEntry m_jacAng[3];




    btTranslationalLimitMotor m_linearLimits;





    btRotationalLimitMotor m_angularLimits[3];



protected:


    float m_timeStep;
    btTransform m_calculatedTransformA;
    btTransform m_calculatedTransformB;
    btVector3 m_calculatedAxisAngleDiff;
    btVector3 m_calculatedAxis[3];
    btVector3 m_calculatedLinearDiff;
 float m_factA;
 float m_factB;
 bool m_hasStaticBody;

 btVector3 m_AnchorPos;

    bool m_useLinearReferenceFrameA;
 bool m_useOffsetForConstraintFrame;

 int m_flags;



    btGeneric6DofConstraint& operator=(btGeneric6DofConstraint& other)
    {
        ;
        () other;
        return *this;
    }


 int setAngularLimits(btTypedConstraint::btConstraintInfo2*info, int row_offset,const btTransform& transA,const btTransform& transB,const btVector3& linVelA,const btVector3& linVelB,const btVector3& angVelA,const btVector3& angVelB);

 int setLinearLimits(btTypedConstraint::btConstraintInfo2*info, int row, const btTransform& transA,const btTransform& transB,const btVector3& linVelA,const btVector3& linVelB,const btVector3& angVelA,const btVector3& angVelB);

    void buildLinearJacobian(
        btJacobianEntry & jacLinear,const btVector3 & normalWorld,
        const btVector3 & pivotAInW,const btVector3 & pivotBInW);

    void buildAngularJacobian(btJacobianEntry & jacAngular,const btVector3 & jointAxisW);


 void calculateLinearInfo();


    void calculateAngleInfo();



public:


 bool m_useSolveConstraintObsolete;

    btGeneric6DofConstraint(btRigidBody& rbA, btRigidBody& rbB, const btTransform& frameInA, const btTransform& frameInB ,bool useLinearReferenceFrameA);
    btGeneric6DofConstraint(btRigidBody& rbB, const btTransform& frameInB, bool useLinearReferenceFrameB);






    void calculateTransforms(const btTransform& transA,const btTransform& transB);

 void calculateTransforms();





    const btTransform & getCalculatedTransformA() const
    {
     return m_calculatedTransformA;
    }





    const btTransform & getCalculatedTransformB() const
    {
     return m_calculatedTransformB;
    }

    const btTransform & getFrameOffsetA() const
    {
     return m_frameInA;
    }

    const btTransform & getFrameOffsetB() const
    {
     return m_frameInB;
    }


    btTransform & getFrameOffsetA()
    {
     return m_frameInA;
    }

    btTransform & getFrameOffsetB()
    {
     return m_frameInB;
    }



    virtual void buildJacobian();

 virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info);

 void getInfo1NonVirtual (btTypedConstraint::btConstraintInfo1* info);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);

 void getInfo2NonVirtual (btTypedConstraint::btConstraintInfo2* info,const btTransform& transA,const btTransform& transB,const btVector3& linVelA,const btVector3& linVelB,const btVector3& angVelA,const btVector3& angVelB);


    void updateRHS(float timeStep);





    btVector3 getAxis(int axis_index) const;





    float getAngle(int axis_index) const;





 float getRelativePivotPosition(int axis_index) const;

 void setFrames(const btTransform & frameA, const btTransform & frameB);






    bool testAngularLimitMotor(int axis_index);

    void setLinearLowerLimit(const btVector3& linearLower)
    {
     m_linearLimits.m_lowerLimit = linearLower;
    }

 void getLinearLowerLimit(btVector3& linearLower)
 {
  linearLower = m_linearLimits.m_lowerLimit;
 }

 void setLinearUpperLimit(const btVector3& linearUpper)
 {
  m_linearLimits.m_upperLimit = linearUpper;
 }

 void getLinearUpperLimit(btVector3& linearUpper)
 {
  linearUpper = m_linearLimits.m_upperLimit;
 }

    void setAngularLowerLimit(const btVector3& angularLower)
    {
  for(int i = 0; i < 3; i++)
   m_angularLimits[i].m_loLimit = btNormalizeAngle(angularLower[i]);
    }

 void getAngularLowerLimit(btVector3& angularLower)
 {
  for(int i = 0; i < 3; i++)
   angularLower[i] = m_angularLimits[i].m_loLimit;
 }

    void setAngularUpperLimit(const btVector3& angularUpper)
    {
  for(int i = 0; i < 3; i++)
   m_angularLimits[i].m_hiLimit = btNormalizeAngle(angularUpper[i]);
    }

 void getAngularUpperLimit(btVector3& angularUpper)
 {
  for(int i = 0; i < 3; i++)
   angularUpper[i] = m_angularLimits[i].m_hiLimit;
 }


    btRotationalLimitMotor * getRotationalLimitMotor(int index)
    {
     return &m_angularLimits[index];
    }


    btTranslationalLimitMotor * getTranslationalLimitMotor()
    {
     return &m_linearLimits;
    }


    void setLimit(int axis, float lo, float hi)
    {
     if(axis<3)
     {
      m_linearLimits.m_lowerLimit[axis] = lo;
      m_linearLimits.m_upperLimit[axis] = hi;
     }
     else
     {
   lo = btNormalizeAngle(lo);
   hi = btNormalizeAngle(hi);
      m_angularLimits[axis-3].m_loLimit = lo;
      m_angularLimits[axis-3].m_hiLimit = hi;
     }
    }
# 525 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h"
    bool isLimited(int limitIndex)
    {
     if(limitIndex<3)
     {
   return m_linearLimits.isLimited(limitIndex);

     }
        return m_angularLimits[limitIndex-3].isLimited();
    }

 virtual void calcAnchorPos();

 int get_limit_motor_info2( btRotationalLimitMotor * limot,
        const btTransform& transA,const btTransform& transB,const btVector3& linVelA,const btVector3& linVelB,const btVector3& angVelA,const btVector3& angVelB,
        btTypedConstraint::btConstraintInfo2*info, int row, btVector3& ax1, int rotational, int rotAllowed = false);


 bool getUseFrameOffset() { return m_useOffsetForConstraintFrame; }
 void setUseFrameOffset(bool frameOffsetOnOff) { m_useOffsetForConstraintFrame = frameOffsetOnOff; }



 virtual void setParam(int num, float value, int axis = -1);

 virtual float getParam(int num, int axis = -1) const;

 void setAxis( const btVector3& axis1, const btVector3& axis2);


 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btGeneric6DofConstraintData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btTransformFloatData m_rbAFrame;
 btTransformFloatData m_rbBFrame;

 btVector3FloatData m_linearUpperLimit;
 btVector3FloatData m_linearLowerLimit;

 btVector3FloatData m_angularUpperLimit;
 btVector3FloatData m_angularLowerLimit;

 int m_useLinearReferenceFrameA;
 int m_useOffsetForConstraintFrame;
};

inline int btGeneric6DofConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btGeneric6DofConstraintData);
}


inline const char* btGeneric6DofConstraint::serialize(void* dataBuffer, btSerializer* serializer) const
{

 btGeneric6DofConstraintData* dof = (btGeneric6DofConstraintData*)dataBuffer;
 btTypedConstraint::serialize(&dof->m_typeConstraintData,serializer);

 m_frameInA.serializeFloat(dof->m_rbAFrame);
 m_frameInB.serializeFloat(dof->m_rbBFrame);


 int i;
 for (i=0;i<3;i++)
 {
  dof->m_angularLowerLimit.m_floats[i] = float(m_angularLimits[i].m_loLimit);
  dof->m_angularUpperLimit.m_floats[i] = float(m_angularLimits[i].m_hiLimit);
  dof->m_linearLowerLimit.m_floats[i] = float(m_linearLimits.m_lowerLimit[i]);
  dof->m_linearUpperLimit.m_floats[i] = float(m_linearLimits.m_upperLimit[i]);
 }

 dof->m_useLinearReferenceFrameA = m_useLinearReferenceFrameA? 1 : 0;
 dof->m_useOffsetForConstraintFrame = m_useOffsetForConstraintFrame ? 1 : 0;

 return "btGeneric6DofConstraintData";
}
# 32 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btSliderConstraint.h" 1
# 36 "../../bullet/src/BulletDynamics/ConstraintSolver/btSliderConstraint.h"
class btRigidBody;
# 46 "../../bullet/src/BulletDynamics/ConstraintSolver/btSliderConstraint.h"
enum btSliderFlags
{
 BT_SLIDER_FLAGS_CFM_DIRLIN = (1 << 0),
 BT_SLIDER_FLAGS_ERP_DIRLIN = (1 << 1),
 BT_SLIDER_FLAGS_CFM_DIRANG = (1 << 2),
 BT_SLIDER_FLAGS_ERP_DIRANG = (1 << 3),
 BT_SLIDER_FLAGS_CFM_ORTLIN = (1 << 4),
 BT_SLIDER_FLAGS_ERP_ORTLIN = (1 << 5),
 BT_SLIDER_FLAGS_CFM_ORTANG = (1 << 6),
 BT_SLIDER_FLAGS_ERP_ORTANG = (1 << 7),
 BT_SLIDER_FLAGS_CFM_LIMLIN = (1 << 8),
 BT_SLIDER_FLAGS_ERP_LIMLIN = (1 << 9),
 BT_SLIDER_FLAGS_CFM_LIMANG = (1 << 10),
 BT_SLIDER_FLAGS_ERP_LIMANG = (1 << 11)
};


class btSliderConstraint : public btTypedConstraint
{
protected:

 bool m_useSolveConstraintObsolete;
 bool m_useOffsetForConstraintFrame;
 btTransform m_frameInA;
    btTransform m_frameInB;

 bool m_useLinearReferenceFrameA;

 float m_lowerLinLimit;
 float m_upperLinLimit;

 float m_lowerAngLimit;
 float m_upperAngLimit;






 float m_softnessDirLin;
 float m_restitutionDirLin;
 float m_dampingDirLin;
 float m_cfmDirLin;

 float m_softnessDirAng;
 float m_restitutionDirAng;
 float m_dampingDirAng;
 float m_cfmDirAng;

 float m_softnessLimLin;
 float m_restitutionLimLin;
 float m_dampingLimLin;
 float m_cfmLimLin;

 float m_softnessLimAng;
 float m_restitutionLimAng;
 float m_dampingLimAng;
 float m_cfmLimAng;

 float m_softnessOrthoLin;
 float m_restitutionOrthoLin;
 float m_dampingOrthoLin;
 float m_cfmOrthoLin;

 float m_softnessOrthoAng;
 float m_restitutionOrthoAng;
 float m_dampingOrthoAng;
 float m_cfmOrthoAng;


 bool m_solveLinLim;
 bool m_solveAngLim;

 int m_flags;

 btJacobianEntry m_jacLin[3];
 float m_jacLinDiagABInv[3];

    btJacobianEntry m_jacAng[3];

 float m_timeStep;
    btTransform m_calculatedTransformA;
    btTransform m_calculatedTransformB;

 btVector3 m_sliderAxis;
 btVector3 m_realPivotAInW;
 btVector3 m_realPivotBInW;
 btVector3 m_projPivotInW;
 btVector3 m_delta;
 btVector3 m_depth;
 btVector3 m_relPosA;
 btVector3 m_relPosB;

 float m_linPos;
 float m_angPos;

 float m_angDepth;
 float m_kAngle;

 bool m_poweredLinMotor;
    float m_targetLinMotorVelocity;
    float m_maxLinMotorForce;
    float m_accumulatedLinMotorImpulse;

 bool m_poweredAngMotor;
    float m_targetAngMotorVelocity;
    float m_maxAngMotorForce;
    float m_accumulatedAngMotorImpulse;


 void initParams();
public:

    btSliderConstraint(btRigidBody& rbA, btRigidBody& rbB, const btTransform& frameInA, const btTransform& frameInB ,bool useLinearReferenceFrameA);
    btSliderConstraint(btRigidBody& rbB, const btTransform& frameInB, bool useLinearReferenceFrameA);



    virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info);

 void getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1* info);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);

 void getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2* info, const btTransform& transA, const btTransform& transB,const btVector3& linVelA,const btVector3& linVelB, float rbAinvMass,float rbBinvMass);



    const btRigidBody& getRigidBodyA() const { return m_rbA; }
    const btRigidBody& getRigidBodyB() const { return m_rbB; }
    const btTransform & getCalculatedTransformA() const { return m_calculatedTransformA; }
    const btTransform & getCalculatedTransformB() const { return m_calculatedTransformB; }
    const btTransform & getFrameOffsetA() const { return m_frameInA; }
    const btTransform & getFrameOffsetB() const { return m_frameInB; }
    btTransform & getFrameOffsetA() { return m_frameInA; }
    btTransform & getFrameOffsetB() { return m_frameInB; }
    float getLowerLinLimit() { return m_lowerLinLimit; }
    void setLowerLinLimit(float lowerLimit) { m_lowerLinLimit = lowerLimit; }
    float getUpperLinLimit() { return m_upperLinLimit; }
    void setUpperLinLimit(float upperLimit) { m_upperLinLimit = upperLimit; }
    float getLowerAngLimit() { return m_lowerAngLimit; }
    void setLowerAngLimit(float lowerLimit) { m_lowerAngLimit = btNormalizeAngle(lowerLimit); }
    float getUpperAngLimit() { return m_upperAngLimit; }
    void setUpperAngLimit(float upperLimit) { m_upperAngLimit = btNormalizeAngle(upperLimit); }
 bool getUseLinearReferenceFrameA() { return m_useLinearReferenceFrameA; }
 float getSoftnessDirLin() { return m_softnessDirLin; }
 float getRestitutionDirLin() { return m_restitutionDirLin; }
 float getDampingDirLin() { return m_dampingDirLin ; }
 float getSoftnessDirAng() { return m_softnessDirAng; }
 float getRestitutionDirAng() { return m_restitutionDirAng; }
 float getDampingDirAng() { return m_dampingDirAng; }
 float getSoftnessLimLin() { return m_softnessLimLin; }
 float getRestitutionLimLin() { return m_restitutionLimLin; }
 float getDampingLimLin() { return m_dampingLimLin; }
 float getSoftnessLimAng() { return m_softnessLimAng; }
 float getRestitutionLimAng() { return m_restitutionLimAng; }
 float getDampingLimAng() { return m_dampingLimAng; }
 float getSoftnessOrthoLin() { return m_softnessOrthoLin; }
 float getRestitutionOrthoLin() { return m_restitutionOrthoLin; }
 float getDampingOrthoLin() { return m_dampingOrthoLin; }
 float getSoftnessOrthoAng() { return m_softnessOrthoAng; }
 float getRestitutionOrthoAng() { return m_restitutionOrthoAng; }
 float getDampingOrthoAng() { return m_dampingOrthoAng; }
 void setSoftnessDirLin(float softnessDirLin) { m_softnessDirLin = softnessDirLin; }
 void setRestitutionDirLin(float restitutionDirLin) { m_restitutionDirLin = restitutionDirLin; }
 void setDampingDirLin(float dampingDirLin) { m_dampingDirLin = dampingDirLin; }
 void setSoftnessDirAng(float softnessDirAng) { m_softnessDirAng = softnessDirAng; }
 void setRestitutionDirAng(float restitutionDirAng) { m_restitutionDirAng = restitutionDirAng; }
 void setDampingDirAng(float dampingDirAng) { m_dampingDirAng = dampingDirAng; }
 void setSoftnessLimLin(float softnessLimLin) { m_softnessLimLin = softnessLimLin; }
 void setRestitutionLimLin(float restitutionLimLin) { m_restitutionLimLin = restitutionLimLin; }
 void setDampingLimLin(float dampingLimLin) { m_dampingLimLin = dampingLimLin; }
 void setSoftnessLimAng(float softnessLimAng) { m_softnessLimAng = softnessLimAng; }
 void setRestitutionLimAng(float restitutionLimAng) { m_restitutionLimAng = restitutionLimAng; }
 void setDampingLimAng(float dampingLimAng) { m_dampingLimAng = dampingLimAng; }
 void setSoftnessOrthoLin(float softnessOrthoLin) { m_softnessOrthoLin = softnessOrthoLin; }
 void setRestitutionOrthoLin(float restitutionOrthoLin) { m_restitutionOrthoLin = restitutionOrthoLin; }
 void setDampingOrthoLin(float dampingOrthoLin) { m_dampingOrthoLin = dampingOrthoLin; }
 void setSoftnessOrthoAng(float softnessOrthoAng) { m_softnessOrthoAng = softnessOrthoAng; }
 void setRestitutionOrthoAng(float restitutionOrthoAng) { m_restitutionOrthoAng = restitutionOrthoAng; }
 void setDampingOrthoAng(float dampingOrthoAng) { m_dampingOrthoAng = dampingOrthoAng; }
 void setPoweredLinMotor(bool onOff) { m_poweredLinMotor = onOff; }
 bool getPoweredLinMotor() { return m_poweredLinMotor; }
 void setTargetLinMotorVelocity(float targetLinMotorVelocity) { m_targetLinMotorVelocity = targetLinMotorVelocity; }
 float getTargetLinMotorVelocity() { return m_targetLinMotorVelocity; }
 void setMaxLinMotorForce(float maxLinMotorForce) { m_maxLinMotorForce = maxLinMotorForce; }
 float getMaxLinMotorForce() { return m_maxLinMotorForce; }
 void setPoweredAngMotor(bool onOff) { m_poweredAngMotor = onOff; }
 bool getPoweredAngMotor() { return m_poweredAngMotor; }
 void setTargetAngMotorVelocity(float targetAngMotorVelocity) { m_targetAngMotorVelocity = targetAngMotorVelocity; }
 float getTargetAngMotorVelocity() { return m_targetAngMotorVelocity; }
 void setMaxAngMotorForce(float maxAngMotorForce) { m_maxAngMotorForce = maxAngMotorForce; }
 float getMaxAngMotorForce() { return m_maxAngMotorForce; }

 float getLinearPos() const { return m_linPos; }
 float getAngularPos() const { return m_angPos; }




 bool getSolveLinLimit() { return m_solveLinLim; }
 float getLinDepth() { return m_depth[0]; }
 bool getSolveAngLimit() { return m_solveAngLim; }
 float getAngDepth() { return m_angDepth; }

 void calculateTransforms(const btTransform& transA,const btTransform& transB);
 void testLinLimits();
 void testAngLimits();

 btVector3 getAncorInA();
 btVector3 getAncorInB();

 bool getUseFrameOffset() { return m_useOffsetForConstraintFrame; }
 void setUseFrameOffset(bool frameOffsetOnOff) { m_useOffsetForConstraintFrame = frameOffsetOnOff; }

 void setFrames(const btTransform& frameA, const btTransform& frameB)
 {
  m_frameInA=frameA;
  m_frameInB=frameB;
  calculateTransforms(m_rbA.getCenterOfMassTransform(),m_rbB.getCenterOfMassTransform());
  buildJacobian();
 }




 virtual void setParam(int num, float value, int axis = -1);

 virtual float getParam(int num, int axis = -1) const;

 virtual int calculateSerializeBufferSize() const;


 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;


};


class btSliderConstraintData
 { public: 
 btTypedConstraintData m_typeConstraintData;
 btTransformFloatData m_rbAFrame;
 btTransformFloatData m_rbBFrame;

 float m_linearUpperLimit;
 float m_linearLowerLimit;

 float m_angularUpperLimit;
 float m_angularLowerLimit;

 int m_useLinearReferenceFrameA;
 int m_useOffsetForConstraintFrame;

};


inline int btSliderConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btSliderConstraintData);
}


inline const char* btSliderConstraint::serialize(void* dataBuffer, btSerializer* serializer) const
{

 btSliderConstraintData* sliderData = (btSliderConstraintData*) dataBuffer;
 btTypedConstraint::serialize(&sliderData->m_typeConstraintData,serializer);

 m_frameInA.serializeFloat(sliderData->m_rbAFrame);
 m_frameInB.serializeFloat(sliderData->m_rbBFrame);

 sliderData->m_linearUpperLimit = float(m_upperLinLimit);
 sliderData->m_linearLowerLimit = float(m_lowerLinLimit);

 sliderData->m_angularUpperLimit = float(m_upperAngLimit);
 sliderData->m_angularLowerLimit = float(m_lowerAngLimit);

 sliderData->m_useLinearReferenceFrameA = m_useLinearReferenceFrameA;
 sliderData->m_useOffsetForConstraintFrame = m_useOffsetForConstraintFrame;

 return "btSliderConstraintData";
}
# 33 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h" 1
# 22 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h"
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h" 1
# 23 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h" 2
# 35 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h"
class btGeneric6DofSpringConstraint : public btGeneric6DofConstraint
{
protected:
 bool m_springEnabled[6];
 float m_equilibriumPoint[6];
 float m_springStiffness[6];
 float m_springDamping[6];
 void internalUpdateSprings(btTypedConstraint::btConstraintInfo2* info);
public:
    btGeneric6DofSpringConstraint(btRigidBody& rbA, btRigidBody& rbB, const btTransform& frameInA, const btTransform& frameInB ,bool useLinearReferenceFrameA);
 void enableSpring(int index, bool onOff);
 void setStiffness(int index, float stiffness);
 void setDamping(int index, float damping);
 void setEquilibriumPoint();
 void setEquilibriumPoint(int index);
 void setEquilibriumPoint(int index, float val);

 virtual void setAxis( const btVector3& axis1, const btVector3& axis2);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);

 virtual int calculateSerializeBufferSize() const;

 virtual const char* serialize(void* dataBuffer, btSerializer* serializer) const;

};



class btGeneric6DofSpringConstraintData
 { public: 
 btGeneric6DofConstraintData m_6dofData;

 int m_springEnabled[6];
 float m_equilibriumPoint[6];
 float m_springStiffness[6];
 float m_springDamping[6];
};

inline int btGeneric6DofSpringConstraint::calculateSerializeBufferSize() const
{
 return sizeof(btGeneric6DofSpringConstraintData);
}


inline const char* btGeneric6DofSpringConstraint::serialize(void* dataBuffer, btSerializer* serializer) const
{
 btGeneric6DofSpringConstraintData* dof = (btGeneric6DofSpringConstraintData*)dataBuffer;
 btGeneric6DofConstraint::serialize(&dof->m_6dofData,serializer);

 int i;
 for (i=0;i<6;i++)
 {
  dof->m_equilibriumPoint[i] = m_equilibriumPoint[i];
  dof->m_springDamping[i] = m_springDamping[i];
  dof->m_springEnabled[i] = m_springEnabled[i]? 1 : 0;
  dof->m_springStiffness[i] = m_springStiffness[i];
 }
 return "btGeneric6DofConstraintData";
}
# 34 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btUniversalConstraint.h" 1
# 34 "../../bullet/src/BulletDynamics/ConstraintSolver/btUniversalConstraint.h"
class btUniversalConstraint : public btGeneric6DofConstraint
{
protected:
 btVector3 m_anchor;
 btVector3 m_axis1;
 btVector3 m_axis2;
public:



    btUniversalConstraint(btRigidBody& rbA, btRigidBody& rbB, btVector3& anchor, btVector3& axis1, btVector3& axis2);

 const btVector3& getAnchor() { return m_calculatedTransformA.getOrigin(); }
 const btVector3& getAnchor2() { return m_calculatedTransformB.getOrigin(); }
 const btVector3& getAxis1() { return m_axis1; }
 const btVector3& getAxis2() { return m_axis2; }
 float getAngle1() { return getAngle(2); }
 float getAngle2() { return getAngle(1); }

 void setUpperLimit(float ang1max, float ang2max) { setAngularUpperLimit(btVector3(0.f, ang1max, ang2max)); }
 void setLowerLimit(float ang1min, float ang2min) { setAngularLowerLimit(btVector3(0.f, ang1min, ang2min)); }

 void setAxis( const btVector3& axis1, const btVector3& axis2);
};
# 35 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btHinge2Constraint.h" 1
# 23 "../../bullet/src/BulletDynamics/ConstraintSolver/btHinge2Constraint.h"
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h" 1
# 24 "../../bullet/src/BulletDynamics/ConstraintSolver/btHinge2Constraint.h" 2
# 32 "../../bullet/src/BulletDynamics/ConstraintSolver/btHinge2Constraint.h"
class btHinge2Constraint : public btGeneric6DofSpringConstraint
{
protected:
 btVector3 m_anchor;
 btVector3 m_axis1;
 btVector3 m_axis2;
public:



    btHinge2Constraint(btRigidBody& rbA, btRigidBody& rbB, btVector3& anchor, btVector3& axis1, btVector3& axis2);

 const btVector3& getAnchor() { return m_calculatedTransformA.getOrigin(); }
 const btVector3& getAnchor2() { return m_calculatedTransformB.getOrigin(); }
 const btVector3& getAxis1() { return m_axis1; }
 const btVector3& getAxis2() { return m_axis2; }
 float getAngle1() { return getAngle(2); }
 float getAngle2() { return getAngle(0); }

 void setUpperLimit(float ang1max) { setAngularUpperLimit(btVector3(-1.f, 0.f, ang1max)); }
 void setLowerLimit(float ang1min) { setAngularLowerLimit(btVector3( 1.f, 0.f, ang1min)); }
};
# 36 "../../bullet/src/btBulletDynamicsCommon.h" 2

# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h" 1
# 19 "../../bullet/src/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h"
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btConstraintSolver.h" 1
# 21 "../../bullet/src/BulletDynamics/ConstraintSolver/btConstraintSolver.h"
class btPersistentManifold;
class btRigidBody;
class btCollisionObject;
class btTypedConstraint;
struct btContactSolverInfo;
struct btBroadphaseProxy;
class btIDebugDraw;
class btStackAlloc;
class btDispatcher;

class btConstraintSolver
{

public:

 virtual ~btConstraintSolver() {}

 virtual void prepareSolve (int , int ) {;}


 virtual float solveGroup(btCollisionObject** bodies,int numBodies,btPersistentManifold** manifold,int numManifolds,btTypedConstraint** constraints,int numConstraints, const btContactSolverInfo& info,class btIDebugDraw* debugDrawer, btStackAlloc* stackAlloc,btDispatcher* dispatcher) = 0;

 virtual void allSolved (const btContactSolverInfo& ,class btIDebugDraw* , btStackAlloc* ) {;}


 virtual void reset() = 0;
};
# 20 "../../bullet/src/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h" 2
class btIDebugDraw;
# 1 "../../bullet/src/BulletDynamics/ConstraintSolver/btContactConstraint.h" 1
# 25 "../../bullet/src/BulletDynamics/ConstraintSolver/btContactConstraint.h"
class btContactConstraint : public btTypedConstraint
{
protected:

 btPersistentManifold m_contactManifold;

public:


 btContactConstraint(btPersistentManifold* contactManifold,btRigidBody& rbA,btRigidBody& rbB);

 void setContactManifold(btPersistentManifold* contactManifold);

 btPersistentManifold* getContactManifold()
 {
  return &m_contactManifold;
 }

 const btPersistentManifold* getContactManifold() const
 {
  return &m_contactManifold;
 }

 virtual ~btContactConstraint();

 virtual void getInfo1 (btTypedConstraint::btConstraintInfo1* info);

 virtual void getInfo2 (btTypedConstraint::btConstraintInfo2* info);


 virtual void buildJacobian();


};


float resolveSingleCollision(btRigidBody* body1, class btCollisionObject* colObj2, const btVector3& contactPositionWorld,const btVector3& contactNormalOnB, const struct btContactSolverInfo& solverInfo,float distance);



void resolveSingleBilateral(btRigidBody& body1, const btVector3& pos1,
                      btRigidBody& body2, const btVector3& pos2,
                      float distance, const btVector3& normal,float& impulse ,float timeStep);
# 22 "../../bullet/src/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h" 2



# 1 "../src/BulletCollision/NarrowPhaseCollision/btManifoldPoint.h" 1
# 26 "../../bullet/src/BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h" 2


class btSequentialImpulseConstraintSolver : public btConstraintSolver
{
protected:

 btConstraintArray m_tmpSolverContactConstraintPool;
 btConstraintArray m_tmpSolverNonContactConstraintPool;
 btConstraintArray m_tmpSolverContactFrictionConstraintPool;
 btAlignedObjectArray<int> m_orderTmpConstraintPool;
 btAlignedObjectArray<int> m_orderFrictionConstraintPool;
 btAlignedObjectArray<btTypedConstraint::btConstraintInfo1> m_tmpConstraintSizesPool;

 void setupFrictionConstraint( btSolverConstraint& solverConstraint, const btVector3& normalAxis,btRigidBody* solverBodyA,btRigidBody* solverBodyIdB,
         btManifoldPoint& cp,const btVector3& rel_pos1,const btVector3& rel_pos2,
         btCollisionObject* colObj0,btCollisionObject* colObj1, float relaxation,
         float desiredVelocity=0., float cfmSlip=0.);

 btSolverConstraint& addFrictionConstraint(const btVector3& normalAxis,btRigidBody* solverBodyA,btRigidBody* solverBodyB,int frictionIndex,btManifoldPoint& cp,const btVector3& rel_pos1,const btVector3& rel_pos2,btCollisionObject* colObj0,btCollisionObject* colObj1, float relaxation, float desiredVelocity=0., float cfmSlip=0.);

 void setupContactConstraint(btSolverConstraint& solverConstraint, btCollisionObject* colObj0, btCollisionObject* colObj1, btManifoldPoint& cp,
        const btContactSolverInfo& infoGlobal, btVector3& vel, float& rel_vel, float& relaxation,
        btVector3& rel_pos1, btVector3& rel_pos2);

 void setFrictionConstraintImpulse( btSolverConstraint& solverConstraint, btRigidBody* rb0, btRigidBody* rb1,
           btManifoldPoint& cp, const btContactSolverInfo& infoGlobal);


 unsigned long m_btSeed2;


 float restitutionCurve(float rel_vel, float restitution);

 void convertContact(btPersistentManifold* manifold,const btContactSolverInfo& infoGlobal);


 void resolveSplitPenetrationSIMD(
        btRigidBody& body1,
        btRigidBody& body2,
        const btSolverConstraint& contactConstraint);

 void resolveSplitPenetrationImpulseCacheFriendly(
        btRigidBody& body1,
        btRigidBody& body2,
        const btSolverConstraint& contactConstraint);


 int getOrInitSolverBody(btCollisionObject& body);

 void resolveSingleConstraintRowGeneric(btRigidBody& body1,btRigidBody& body2,const btSolverConstraint& contactConstraint);

 void resolveSingleConstraintRowGenericSIMD(btRigidBody& body1,btRigidBody& body2,const btSolverConstraint& contactConstraint);

 void resolveSingleConstraintRowLowerLimit(btRigidBody& body1,btRigidBody& body2,const btSolverConstraint& contactConstraint);

 void resolveSingleConstraintRowLowerLimitSIMD(btRigidBody& body1,btRigidBody& body2,const btSolverConstraint& contactConstraint);

protected:
 static btRigidBody& getFixedBody();

 virtual void solveGroupCacheFriendlySplitImpulseIterations(btCollisionObject** bodies,int numBodies,btPersistentManifold** manifoldPtr, int numManifolds,btTypedConstraint** constraints,int numConstraints,const btContactSolverInfo& infoGlobal,btIDebugDraw* debugDrawer,btStackAlloc* stackAlloc);
 virtual float solveGroupCacheFriendlyFinish(btCollisionObject** bodies ,int numBodies,btPersistentManifold** manifoldPtr, int numManifolds,btTypedConstraint** constraints,int numConstraints,const btContactSolverInfo& infoGlobal,btIDebugDraw* debugDrawer,btStackAlloc* stackAlloc);
 float solveSingleIteration(int iteration, btCollisionObject** bodies ,int numBodies,btPersistentManifold** manifoldPtr, int numManifolds,btTypedConstraint** constraints,int numConstraints,const btContactSolverInfo& infoGlobal,btIDebugDraw* debugDrawer,btStackAlloc* stackAlloc);

 virtual float solveGroupCacheFriendlySetup(btCollisionObject** bodies,int numBodies,btPersistentManifold** manifoldPtr, int numManifolds,btTypedConstraint** constraints,int numConstraints,const btContactSolverInfo& infoGlobal,btIDebugDraw* debugDrawer,btStackAlloc* stackAlloc);
 virtual float solveGroupCacheFriendlyIterations(btCollisionObject** bodies,int numBodies,btPersistentManifold** manifoldPtr, int numManifolds,btTypedConstraint** constraints,int numConstraints,const btContactSolverInfo& infoGlobal,btIDebugDraw* debugDrawer,btStackAlloc* stackAlloc);


public:


 btSequentialImpulseConstraintSolver();
 virtual ~btSequentialImpulseConstraintSolver();

 virtual float solveGroup(btCollisionObject** bodies,int numBodies,btPersistentManifold** manifold,int numManifolds,btTypedConstraint** constraints,int numConstraints,const btContactSolverInfo& info, btIDebugDraw* debugDrawer, btStackAlloc* stackAlloc,btDispatcher* dispatcher);




 virtual void reset();

 unsigned long btRand2();

 int btRandInt2 (int n);

 void setRandSeed(unsigned long seed)
 {
  m_btSeed2 = seed;
 }
 unsigned long getRandSeed() const
 {
  return m_btSeed2;
 }

};


typedef btSequentialImpulseConstraintSolver btSequentialImpulseConstraintSolverPrefered;
# 38 "../../bullet/src/btBulletDynamicsCommon.h" 2



# 1 "../../bullet/src/BulletDynamics/Vehicle/btRaycastVehicle.h" 1
# 15 "../../bullet/src/BulletDynamics/Vehicle/btRaycastVehicle.h"
# 1 "../src/BulletDynamics/ConstraintSolver/btTypedConstraint.h" 1
# 16 "../../bullet/src/BulletDynamics/Vehicle/btRaycastVehicle.h" 2
# 1 "../../bullet/src/BulletDynamics/Vehicle/btVehicleRaycaster.h" 1
# 17 "../../bullet/src/BulletDynamics/Vehicle/btVehicleRaycaster.h"
class btVehicleRaycaster
 { public: 
virtual ~btVehicleRaycaster()
{
}
 class btVehicleRaycasterResult
  { public: 
  btVehicleRaycasterResult() :m_distFraction(float(-1.)){};
  btVector3 m_hitPointInWorld;
  btVector3 m_hitNormalInWorld;
  float m_distFraction;
 };

 virtual void* castRay(const btVector3& from,const btVector3& to, btVehicleRaycaster::btVehicleRaycasterResult& result) = 0;

};
# 17 "../../bullet/src/BulletDynamics/Vehicle/btRaycastVehicle.h" 2
class btDynamicsWorld;

# 1 "../../bullet/src/BulletDynamics/Vehicle/btWheelInfo.h" 1
# 17 "../../bullet/src/BulletDynamics/Vehicle/btWheelInfo.h"
class btRigidBody;

class btWheelInfoConstructionInfo
 { public: 
 btVector3 m_chassisConnectionCS;
 btVector3 m_wheelDirectionCS;
 btVector3 m_wheelAxleCS;
 float m_suspensionRestLength;
 float m_maxSuspensionTravelCm;
 float m_wheelRadius;

 float m_suspensionStiffness;
 float m_wheelsDampingCompression;
 float m_wheelsDampingRelaxation;
 float m_frictionSlip;
 float m_maxSuspensionForce;
 bool m_bIsFrontWheel;

};


class btWheelInfo
 { public: 
 class RaycastInfo
  { public: 

  btVector3 m_contactNormalWS;
  btVector3 m_contactPointWS;
  float m_suspensionLength;
  btVector3 m_hardPointWS;
  btVector3 m_wheelDirectionWS;
  btVector3 m_wheelAxleWS;
  bool m_isInContact;
  void* m_groundObject;
 };

 RaycastInfo m_raycastInfo;

 btTransform m_worldTransform;

 btVector3 m_chassisConnectionPointCS;
 btVector3 m_wheelDirectionCS;
 btVector3 m_wheelAxleCS;
 float m_suspensionRestLength1;
 float m_maxSuspensionTravelCm;
 float getSuspensionRestLength() const;
 float m_wheelsRadius;
 float m_suspensionStiffness;
 float m_wheelsDampingCompression;
 float m_wheelsDampingRelaxation;
 float m_frictionSlip;
 float m_steering;
 float m_rotation;
 float m_deltaRotation;
 float m_rollInfluence;
 float m_maxSuspensionForce;

 float m_engineForce;

 float m_brake;

 bool m_bIsFrontWheel;

 void* m_clientInfo;

 btWheelInfo(btWheelInfoConstructionInfo& ci)

 {

  m_suspensionRestLength1 = ci.m_suspensionRestLength;
  m_maxSuspensionTravelCm = ci.m_maxSuspensionTravelCm;

  m_wheelsRadius = ci.m_wheelRadius;
  m_suspensionStiffness = ci.m_suspensionStiffness;
  m_wheelsDampingCompression = ci.m_wheelsDampingCompression;
  m_wheelsDampingRelaxation = ci.m_wheelsDampingRelaxation;
  m_chassisConnectionPointCS = ci.m_chassisConnectionCS;
  m_wheelDirectionCS = ci.m_wheelDirectionCS;
  m_wheelAxleCS = ci.m_wheelAxleCS;
  m_frictionSlip = ci.m_frictionSlip;
  m_steering = float(0.);
  m_engineForce = float(0.);
  m_rotation = float(0.);
  m_deltaRotation = float(0.);
  m_brake = float(0.);
  m_rollInfluence = float(0.1);
  m_bIsFrontWheel = ci.m_bIsFrontWheel;
  m_maxSuspensionForce = ci.m_maxSuspensionForce;

 }

 void updateWheel(const btRigidBody& chassis,btWheelInfo::RaycastInfo raycastInfo);

 float m_clippedInvContactDotSuspension;
 float m_suspensionRelativeVelocity;

 float m_wheelsSuspensionForce;
 float m_skidInfo;

};
# 20 "../../bullet/src/BulletDynamics/Vehicle/btRaycastVehicle.h" 2
# 1 "../src/BulletDynamics/Dynamics/btActionInterface.h" 1
# 19 "../src/BulletDynamics/Dynamics/btActionInterface.h"
class btIDebugDraw;
class btCollisionWorld;


# 1 "../src/BulletDynamics/Dynamics/btRigidBody.h" 1
# 24 "../src/BulletDynamics/Dynamics/btActionInterface.h" 2


class btActionInterface
{
protected:

 static btRigidBody& getFixedBody();


public:

 virtual ~btActionInterface()
 {
 }

 virtual void updateAction( btCollisionWorld* collisionWorld, float deltaTimeStep)=0;

 virtual void debugDraw(btIDebugDraw* debugDrawer) = 0;

};
# 21 "../../bullet/src/BulletDynamics/Vehicle/btRaycastVehicle.h" 2

class btVehicleTuning;


class btRaycastVehicle : public btActionInterface
{

  btAlignedObjectArray<btVector3> m_forwardWS;
  btAlignedObjectArray<btVector3> m_axle;
  btAlignedObjectArray<float> m_forwardImpulse;
  btAlignedObjectArray<float> m_sideImpulse;


  int m_userConstraintType;
  int m_userConstraintId;

public:
 class btVehicleTuning
  {
   public:

   btVehicleTuning()
    :m_suspensionStiffness(float(5.88)),
    m_suspensionCompression(float(0.83)),
    m_suspensionDamping(float(0.88)),
    m_maxSuspensionTravelCm(float(500.)),
    m_frictionSlip(float(10.5)),
    m_maxSuspensionForce(float(6000.))
   {
   }
   float m_suspensionStiffness;
   float m_suspensionCompression;
   float m_suspensionDamping;
   float m_maxSuspensionTravelCm;
   float m_frictionSlip;
   float m_maxSuspensionForce;

  };
private:

 float m_tau;
 float m_damping;
 btVehicleRaycaster* m_vehicleRaycaster;
 float m_pitchControl;
 float m_steeringValue;
 float m_currentVehicleSpeedKmHour;

 btRigidBody* m_chassisBody;

 int m_indexRightAxis;
 int m_indexUpAxis;
 int m_indexForwardAxis;

 void defaultInit(const btRaycastVehicle::btVehicleTuning& tuning);

public:


 btRaycastVehicle(const btRaycastVehicle::btVehicleTuning& tuning,btRigidBody* chassis, btVehicleRaycaster* raycaster );

 virtual ~btRaycastVehicle() ;



 virtual void updateAction( btCollisionWorld* collisionWorld, float step)
 {
        () collisionWorld;
  updateVehicle(step);
 }



 void debugDraw(btIDebugDraw* debugDrawer);

 const btTransform& getChassisWorldTransform() const;

 float rayCast(btWheelInfo& wheel);

 virtual void updateVehicle(float step);


 void resetSuspension();

 float getSteeringValue(int wheel) const;

 void setSteeringValue(float steering,int wheel);


 void applyEngineForce(float force, int wheel);

 const btTransform& getWheelTransformWS( int wheelIndex ) const;

 void updateWheelTransform( int wheelIndex, bool interpolatedTransform = true );



 btWheelInfo& addWheel( const btVector3& connectionPointCS0, const btVector3& wheelDirectionCS0,const btVector3& wheelAxleCS,float suspensionRestLength,float wheelRadius,const btRaycastVehicle::btVehicleTuning& tuning, bool isFrontWheel);

 inline int getNumWheels() const {
  return int (m_wheelInfo.size());
 }

 btAlignedObjectArray<btWheelInfo> m_wheelInfo;


 const btWheelInfo& getWheelInfo(int index) const;

 btWheelInfo& getWheelInfo(int index);

 void updateWheelTransformsWS(btWheelInfo& wheel , bool interpolatedTransform = true);


 void setBrake(float brake,int wheelIndex);

 void setPitchControl(float pitch)
 {
  m_pitchControl = pitch;
 }

 void updateSuspension(float deltaTime);

 virtual void updateFriction(float timeStep);



 inline btRigidBody* getRigidBody()
 {
  return m_chassisBody;
 }

 const btRigidBody* getRigidBody() const
 {
  return m_chassisBody;
 }

 inline int getRightAxis() const
 {
  return m_indexRightAxis;
 }
 inline int getUpAxis() const
 {
  return m_indexUpAxis;
 }

 inline int getForwardAxis() const
 {
  return m_indexForwardAxis;
 }



 btVector3 getForwardVector() const
 {
  const btTransform& chassisTrans = getChassisWorldTransform();

  btVector3 forwardW (
     chassisTrans.getBasis()[0][m_indexForwardAxis],
     chassisTrans.getBasis()[1][m_indexForwardAxis],
     chassisTrans.getBasis()[2][m_indexForwardAxis]);

  return forwardW;
 }


 float getCurrentSpeedKmHour() const
 {
  return m_currentVehicleSpeedKmHour;
 }

 virtual void setCoordinateSystem(int rightIndex,int upIndex,int forwardIndex)
 {
  m_indexRightAxis = rightIndex;
  m_indexUpAxis = upIndex;
  m_indexForwardAxis = forwardIndex;
 }



 int getUserConstraintType() const
 {
  return m_userConstraintType ;
 }

 void setUserConstraintType(int userConstraintType)
 {
  m_userConstraintType = userConstraintType;
 };

 void setUserConstraintId(int uid)
 {
  m_userConstraintId = uid;
 }

 int getUserConstraintId() const
 {
  return m_userConstraintId;
 }

};

class btDefaultVehicleRaycaster : public btVehicleRaycaster
{
 btDynamicsWorld* m_dynamicsWorld;
public:
 btDefaultVehicleRaycaster(btDynamicsWorld* world)
  :m_dynamicsWorld(world)
 {
 }

 virtual void* castRay(const btVector3& from,const btVector3& to, btVehicleRaycaster::btVehicleRaycasterResult& result);

};
# 42 "../../bullet/src/btBulletDynamicsCommon.h" 2
# 2 "../../root.h" 2

# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btGhostObject.h" 1
# 21 "../../bullet/src/BulletCollision/CollisionDispatch/btGhostObject.h"
# 1 "../src/BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h" 1
# 22 "../../bullet/src/BulletCollision/CollisionDispatch/btGhostObject.h" 2


# 1 "../../bullet/src/BulletCollision/CollisionDispatch/btCollisionWorld.h" 1
# 25 "../../bullet/src/BulletCollision/CollisionDispatch/btGhostObject.h" 2

class btConvexShape;

class btDispatcher;





class btGhostObject : public btCollisionObject
{
protected:

 btAlignedObjectArray<btCollisionObject*> m_overlappingObjects;

public:

 btGhostObject();

 virtual ~btGhostObject();

 void convexSweepTest(const class btConvexShape* castShape, const btTransform& convexFromWorld, const btTransform& convexToWorld, btCollisionWorld::btCollisionWorld::ConvexResultCallback& resultCallback, float allowedCcdPenetration = 0.f) const;

 void rayTest(const btVector3& rayFromWorld, const btVector3& rayToWorld, btCollisionWorld::btCollisionWorld::RayResultCallback& resultCallback) const;


 virtual void addOverlappingObjectInternal(btBroadphaseProxy* otherProxy, btBroadphaseProxy* thisProxy=0);

 virtual void removeOverlappingObjectInternal(btBroadphaseProxy* otherProxy,btDispatcher* dispatcher,btBroadphaseProxy* thisProxy=0);

 int getNumOverlappingObjects() const
 {
  return m_overlappingObjects.size();
 }

 btCollisionObject* getOverlappingObject(int index)
 {
  return m_overlappingObjects[index];
 }

 const btCollisionObject* getOverlappingObject(int index) const
 {
  return m_overlappingObjects[index];
 }

 btAlignedObjectArray<btCollisionObject*>& getOverlappingPairs()
 {
  return m_overlappingObjects;
 }

 const btAlignedObjectArray<btCollisionObject*> getOverlappingPairs() const
 {
  return m_overlappingObjects;
 }





 static const btGhostObject* upcast(const btCollisionObject* colObj)
 {
  if (colObj->getInternalType()==CO_GHOST_OBJECT)
   return (const btGhostObject*)colObj;
  return 0;
 }
 static btGhostObject* upcast(btCollisionObject* colObj)
 {
  if (colObj->getInternalType()==CO_GHOST_OBJECT)
   return (btGhostObject*)colObj;
  return 0;
 }

};

class btPairCachingGhostObject : public btGhostObject
{
 btHashedOverlappingPairCache* m_hashPairCache;

public:

 btPairCachingGhostObject();

 virtual ~btPairCachingGhostObject();


 virtual void addOverlappingObjectInternal(btBroadphaseProxy* otherProxy, btBroadphaseProxy* thisProxy=0);

 virtual void removeOverlappingObjectInternal(btBroadphaseProxy* otherProxy,btDispatcher* dispatcher,btBroadphaseProxy* thisProxy=0);

 btHashedOverlappingPairCache* getOverlappingPairCache()
 {
  return m_hashPairCache;
 }

};




class btGhostPairCallback : public btOverlappingPairCallback
{

public:
 btGhostPairCallback()
 {
 }

 virtual ~btGhostPairCallback()
 {

 }

 virtual btBroadphasePair* addOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1)
 {
  btCollisionObject* colObj0 = (btCollisionObject*) proxy0->m_clientObject;
  btCollisionObject* colObj1 = (btCollisionObject*) proxy1->m_clientObject;
  btGhostObject* ghost0 = btGhostObject::upcast(colObj0);
  btGhostObject* ghost1 = btGhostObject::upcast(colObj1);
  if (ghost0)
   ghost0->addOverlappingObjectInternal(proxy1, proxy0);
  if (ghost1)
   ghost1->addOverlappingObjectInternal(proxy0, proxy1);
  return 0;
 }

 virtual void* removeOverlappingPair(btBroadphaseProxy* proxy0,btBroadphaseProxy* proxy1,btDispatcher* dispatcher)
 {
  btCollisionObject* colObj0 = (btCollisionObject*) proxy0->m_clientObject;
  btCollisionObject* colObj1 = (btCollisionObject*) proxy1->m_clientObject;
  btGhostObject* ghost0 = btGhostObject::upcast(colObj0);
  btGhostObject* ghost1 = btGhostObject::upcast(colObj1);
  if (ghost0)
   ghost0->removeOverlappingObjectInternal(proxy1,dispatcher,proxy0);
  if (ghost1)
   ghost1->removeOverlappingObjectInternal(proxy0,dispatcher,proxy1);
  return 0;
 }

 virtual void removeOverlappingPairsContainingProxy(btBroadphaseProxy* ,btDispatcher* )
 {
  ;


 }



};
# 4 "../../root.h" 2
# 1 "../../bullet/src/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h" 1
# 71 "../../bullet/src/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h"
class btHeightfieldTerrainShape : public btConcaveShape
{
protected:
 btVector3 m_localAabbMin;
 btVector3 m_localAabbMax;
 btVector3 m_localOrigin;


 int m_heightStickWidth;
 int m_heightStickLength;
 float m_minHeight;
 float m_maxHeight;
 float m_width;
 float m_length;
 float m_heightScale;
 union
 {
  unsigned char* m_heightfieldDataUnsignedChar;
  short* m_heightfieldDataShort;
  float* m_heightfieldDataFloat;
  void* m_heightfieldDataUnknown;
 };

 PHY_ScalarType m_heightDataType;
 bool m_flipQuadEdges;
  bool m_useDiamondSubdivision;

 int m_upAxis;

 btVector3 m_localScaling;

 virtual float getRawHeightFieldValue(int x,int y) const;
 void quantizeWithClamp(int* out, const btVector3& point,int isMax) const;
 void getVertex(int x,int y,btVector3& vertex) const;
# 113 "../../bullet/src/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h"
 void initialize(int heightStickWidth, int heightStickLength,
                 void* heightfieldData, float heightScale,
                 float minHeight, float maxHeight, int upAxis,
                 PHY_ScalarType heightDataType, bool flipQuadEdges);

public:






 btHeightfieldTerrainShape(int heightStickWidth,int heightStickLength,
                           void* heightfieldData, float heightScale,
                           float minHeight, float maxHeight,
                           int upAxis, PHY_ScalarType heightDataType,
                           bool flipQuadEdges);
# 138 "../../bullet/src/BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h"
 btHeightfieldTerrainShape(int heightStickWidth,int heightStickLength,void* heightfieldData, float maxHeight,int upAxis,bool useFloatData,bool flipQuadEdges);

 virtual ~btHeightfieldTerrainShape();


 void setUseDiamondSubdivision(bool useDiamondSubdivision=true) { m_useDiamondSubdivision = useDiamondSubdivision;}


 virtual void getAabb(const btTransform& t,btVector3& aabbMin,btVector3& aabbMax) const;

 virtual void processAllTriangles(btTriangleCallback* callback,const btVector3& aabbMin,const btVector3& aabbMax) const;

 virtual void calculateLocalInertia(float mass,btVector3& inertia) const;

 virtual void setLocalScaling(const btVector3& scaling);

 virtual const btVector3& getLocalScaling() const;


 virtual const char* getName()const {return "HEIGHTFIELD";}

};
# 5 "../../root.h" 2
# 23 "../../root.h"
class ConcreteContactResultCallback : public btCollisionWorld::ContactResultCallback
{
public:
  ConcreteContactResultCallback() {};
  virtual float addSingleResult(btManifoldPoint& cp, const btCollisionObject* colObj0,int partId0,int index0,const btCollisionObject* colObj1,int partId1,int index1) { return 0; };
};
