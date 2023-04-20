#include <stdint.h>

#define F 16384

int convert_to_fixed(int n);
int convert_to_int_floor(int x);
int convert_to_int_round(int x);
int normal_add(int x , int y);
int normal_sub(int x , int y);
int add_to_fixed(int x, int n);
int sub_from_fixed(int x, int n);
int mult_fixed(int x, int n);
int mult_int(int x, int y);
int div_fixed(int x, int y);
int div_int(int x, int y);

int convert_to_fixed(int n){
    return n*F ;
}

int convert_to_int_floor(int x){
    return x/F ;
}

int convert_to_int_round(int x){
    if(x >= 0){
        return (x + F/2)/F ;
    }else{
        return (x - F/2)/F ;
    }
}

int normal_add(int x , int y){
    return x + y ; 
}

int normal_sub(int x , int y){
    return x - y ;
}

int add_to_fixed(int x, int n){
    return x + n*F ;
}

int sub_from_fixed(int x, int n){
    return x - n*F ;
}

int mult_fixed(int x, int y){
    return  ((int64_t) x) * y / F ;
}

int mult_int(int x, int n){
    return x*n ;
}

int div_fixed(int x, int y){
    return ((int64_t) x) * F / y ;
}

int div_int(int x, int n){
    return x / n ;
}
