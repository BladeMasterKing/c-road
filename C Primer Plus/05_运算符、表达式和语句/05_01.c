//
// Created by jiansheng on 2024/8/17.
//
#include <stdio.h>
#define ADJUST 7.31
int main(void ){
    const double SCALE = 0.333;
    double shoe, foot;
    shoe = 0.9;

    printf("男鞋的尺码 对应的英尺 \n");
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%5.1f %10.2f \n", shoe, foot);
        shoe += 1;
    }
    return 0;
}