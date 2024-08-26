//
// Created by jiansheng on 2024/8/17.
//
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
    char ch;
    char prev;
    long n_chars = 0L;
    int n_lines = 0L;
    int n_words = 0L;
    int p_lines = 0L;
    bool inword = false;

    prev = '\n';

    while ((ch = getchar()) != '|'){
        n_chars ++;
        if ( ch == '\n'){
            n_lines ++;
        }

        if (!isspace(ch) && !inword){
            inword = true;
            n_words ++;
        }

        if (isspace(ch) && inword){
            inword = false;
        }

        prev = ch;
    }

    if(prev != '\n'){
        p_lines = 1;
    }

    printf("character = %ld, words = %d, lines = %d, partial_lines = %d \n", n_chars, n_words, n_lines, p_lines);
    return 0;
}