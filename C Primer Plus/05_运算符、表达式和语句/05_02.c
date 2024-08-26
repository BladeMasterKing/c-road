//
// Created by jiansheng on 2024/8/17.
//
#include <stdio.h>
int main(void){
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f \n", ch, i,fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f \n", ch, i,fl);

    printf("%d \n", (int)1.6 + (int)1.7);

    int n = 3;
    while (n){
        printf("循环%d\n", n);
        n--;
    }
}