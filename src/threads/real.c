#include "threads/real.h"

real int_to_real(long long n) {
    return n * F;
}

long long real_to_int(real x) {
    return x / F;
}

long long real_to_int_round(real x) {
    if(x >= 0){
        return (x + F/2)/F ;
    }else{
        return (x - F/2)/F ;
    }
}

real add_real(real x, real y) {
    return x + y;
}

real sub_real(real x, real y) {
    return x - y;
}

real mult_real(real x, real y) {
    return ((int64_t) x) * y / F;
}

real div_real(real x, real y) {
    return ((int64_t) x) * F / y;
}