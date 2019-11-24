//
// Created by Administrator on 2019/11/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "allocTest.h"

void allocTest(){
    int *int_a = (int *)malloc(sizeof(int));
    *int_a = 1024;
    printf("*int_a = %d  int_a = %p\n", *int_a, int_a);

    int (*arr_a)[2] = calloc(2, sizeof(int));
    (*arr_a)[0] = 1024;
    (*arr_a)[1] = 2048;
    printf("*arr_a = {%d, %d}\n", (*arr_a)[0], (*arr_a)[1]);

    char *char_a = realloc(int_a, sizeof(char));
    *char_a = 'a';
    printf("int_a = %p char_a = %p\n", int_a, char_a);
    printf("*char_a = %c\n", *char_a);

    printf("char_a = %p\n", char_a);
    free(char_a);   // 释放 *char_a 指向的内存空间
    printf("char_a = %p\n", char_a);

    int int_x;
    memset(&int_x, 0, sizeof(int));
    printf("int_x = %d\n", int_x);
    memset(&int_x, 1, sizeof(int));
    printf("int_x = %d\n", int_x);

    int (*p)[2] = (int (*)[2])calloc(2, sizeof(int));
    (*p)[0] = 1;
    (*p)[1] = 2;
    printf("%d  %d\n", (*p)[0], (*p)[1]);
    int (*x)[3] = (int (*)[3])realloc(p, 3);
    printf("%d  %d  %d\n", (*x)[0], (*x)[1], (*x)[2]);
}


