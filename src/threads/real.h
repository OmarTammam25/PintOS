#include <stdint.h>
#define Q 14
#define F (1 << Q)

typedef int32_t real;

real int_to_real(long long n);

long long real_to_int(real x);

long long real_to_int_round(real x);

real add_real(real x, real y);

real sub_real(real x, real y);

real mult_real(real x, real y);

real div_real(real x, real y);