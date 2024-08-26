//
// Created by jiansheng on 2024/8/17.
//
#include <stdio.h>
int main(void){
    char ch;
    ch = getchar();
    while (ch != '\n'){
        if (ch == ' '){
            putchar(ch);
        } else {
            putchar(ch + 1);
        }
        ch = getchar();
    }
    return 0;
}