//
// Created by jiansheng on 2024/8/8.
//
#include <stdio.h>
#include <limits.h>
int main(void){
    printf("char bytes is %zd \n", sizeof(char));
    printf("short bytes is %zd \n", sizeof(short));
    printf("int bytes is %zd \n", sizeof(int));
    printf("long bytes is %zd \n", sizeof(long));
    printf("long long bytes is %zd \n", sizeof(long long));
    printf("float bytes is %zd \n", sizeof(float));
    printf("double bytes is %zd \n", sizeof(double));
    printf("long double bytes is %zd \n", sizeof(long double));

    printf("%#o \n", 070);
    printf("%d \n", 070);
    printf("%#x \n", 0x70);
}