//
// Created by Administrator on 2019/11/28.
//
#include <stdio.h>
#include <string.h>
#include "unionTest.h"

void unionTest(){
    {
        union Data{
            int i;
            float f;
            char  str[9];
        } data;
        data.i = 10;
        data.f = 220.5f;
        strcpy( data.str, "Hello");
        printf("data size = %d\n", sizeof(data));
        printf( "data.i = %d\n", data.i);
        printf( "data.f = %f\n", data.f);
        printf( "data.str = %s\n", data.str);
    }
    {

    }
}