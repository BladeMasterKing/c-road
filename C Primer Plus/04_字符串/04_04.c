//
// Created by jiansheng on 2024/8/16.
//
#include <stdio.h>
int main(void ){
    int age;
    float assets;
    char pet[30];
    printf("你的年龄 资产 喜欢的宠物\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d ￥%.2f %s", age, assets, pet);
}