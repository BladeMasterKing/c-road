//
// Created by jiansheng on 2024/8/15.
//
#include <stdio.h>
#include <limits.h>
#define PI 3.14159
int main(void ){
    float area, circum, radius;
    printf("半径是多少?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = PI * radius * 2;
    printf("周长是 %1.2f 面积是 %1.2f\n", circum, area);


    const int MONTH = 12;

}