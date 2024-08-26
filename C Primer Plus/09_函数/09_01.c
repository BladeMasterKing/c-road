//
// Created by jiansheng on 2024/8/19.
//
#include <stdio.h>

void interchange(int *u, int * v);

int main(void){
    int x = 5, y = 10;
    printf("%5d%5d\n", x, y);
    interchange(&x, &y);
    printf("%5d%5d\n", x, y);
}

void interchange(int *u, int * v){
    int tmp;
    tmp = *u;
    *u = *v;
    *v = tmp;
}