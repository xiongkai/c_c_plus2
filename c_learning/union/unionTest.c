//
// Created by Administrator on 2019/11/28.
//
#include <stdio.h>
#include "unionTest.h"

void unionTest(){
    union Data
    {
        int i;
        float f;
        char  str[9];
    } data;

    printf("data size = %d\n", sizeof(data));
}