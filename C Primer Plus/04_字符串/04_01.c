//
// Created by jiansheng on 2024/8/15.
//
#define PARIS "this is paris"
#include <stdio.h>
#include <string.h>
int main(void) {
    char name[40];
    printf("what is your name \n");
    scanf("%s", name);
    printf("hello, %s , %s \n", name , PARIS);

    printf("letter length is %zd , memory is %zd", strlen(name), sizeof name);
}