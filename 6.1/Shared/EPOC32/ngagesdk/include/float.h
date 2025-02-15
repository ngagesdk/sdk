#ifndef __FLOAT_H__
#define __FLOAT_H__

/* Radix of exponent representation */
#define FLT_RADIX       2

/* Number of base-FLT_RADIX digits in the significand of a float */
#define FLT_MANT_DIG    24

/* Number of decimal digits of precision in a float */
#define FLT_DIG         6

/* Difference between 1 and the least value greater than 1 that is representable in a float */
#define FLT_EPSILON     1.19209290e-07F

/* Minimum normalized positive value of a float */
#define FLT_MIN         1.17549435e-38F

/* Minimum positive value of a float */
#define FLT_TRUE_MIN    1.40129846e-45F

/* Maximum finite value of a float */
#define FLT_MAX         3.40282347e+38F

/* Number of base-FLT_RADIX digits in the significand of a double */
#define DBL_MANT_DIG    53

/* Number of decimal digits of precision in a double */
#define DBL_DIG         15

/* Difference between 1 and the least value greater than 1 that is representable in a double */
#define DBL_EPSILON     2.2204460492503131e-16

/* Minimum normalized positive value of a double */
#define DBL_MIN         2.2250738585072014e-308

/* Minimum positive value of a double */
#define DBL_TRUE_MIN    4.9406564584124654e-324

/* Maximum finite value of a double */
#define DBL_MAX         1.7976931348623157e+308

/* Maximum integer value of the exponent for a double */
#define DBL_MAX_EXP     1024

/* Maximum integer value of the exponent for a double in base 10 */
#define DBL_MAX_10_EXP   308

/* Minimum integer value of the exponent for a double */
#define LDBL_MAX_10_EXP  308

/* Number of base-FLT_RADIX digits in the significand of a long double */
#define LDBL_MANT_DIG   53

/* Number of decimal digits of precision in a long double */
#define LDBL_DIG        15

/* Difference between 1 and the least value greater than 1 that is representable in a long double */
#define LDBL_EPSILON    2.2204460492503131e-16L

/* Minimum normalized positive value of a long double */
#define LDBL_MIN        2.2250738585072014e-308L

/* Minimum positive value of a long double */
#define LDBL_TRUE_MIN   4.9406564584124654e-324L

/* Maximum finite value of a long double */
#define LDBL_MAX        1.7976931348623157e+308L

#endif /* __FLOAT_H__ */
