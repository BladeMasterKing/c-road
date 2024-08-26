//
// Created by 王建生 on 2024/6/12.
//
# include <stdio.h>
void topic_1();
void topic_3();
int main(void)
{
    topic_1();
    topic_3();
}

void topic_1()
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav");
    printf(" Mahler\n");
}

void topic_2()
{
    printf("my name is a, address is b");
}

void topic_3()
{
    int age = 32;
    int day = age * 365;
    printf("age is %d", day);
}