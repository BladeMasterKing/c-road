//
// Created by jiansheng on 2024/8/17.
//
#include "hotel.h"
#include <stdio.h>
int menu(void){
    char ch[6] = "abcde";
    int *a = &ch;
    printf("%p \n", a);
    printf("%c \n", *a);
}

int main(void) {
    menu();
}