#ifndef STDINT_H
#define STDINT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Exact-width integer types */
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;

typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

/* Minimum-width integer types */
typedef int8_t   int_least8_t;
typedef int16_t  int_least16_t;
typedef int32_t  int_least32_t;
typedef int64_t  int_least64_t;

typedef uint8_t  uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

/* Fastest minimum-width integer types */
typedef int8_t   int_fast8_t;
typedef int16_t  int_fast16_t;
typedef int32_t  int_fast32_t;
typedef int64_t  int_fast64_t;

typedef uint8_t  uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

/* Pointer-sized integer types */
typedef int32_t  intptr_t;
typedef uint32_t uintptr_t;

/* Greatest-width integer types */
typedef int64_t  intmax_t;
typedef uint64_t uintmax_t;

/* Limits */
#define INT8_MIN    (-128)
#define INT16_MIN   (-32768)
#define INT32_MIN   (-2147483647-1)
#define INT64_MIN   (-9223372036854775807LL-1)

#define INT8_MAX    (127)
#define INT16_MAX   (32767)
#define INT32_MAX   (2147483647)
#define INT64_MAX   (9223372036854775807LL)

#define UINT8_MAX   (255U)
#define UINT16_MAX  (65535U)
#define UINT32_MAX  (4294967295U)
#define UINT64_MAX  (18446744073709551615ULL)

#ifdef __cplusplus
}
#endif

#endif /* STDINT_H */
