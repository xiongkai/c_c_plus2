//
// Created by Administrator on 2019/11/29.
//
#include <stdio.h>
#include "typeConvertTest.h"

void typeConvertTest(){
    int int_a = 1;
    char char_a = 'a';
    short short_a = char_a;
    float sum = int_a + char_a;
    printf("sum = %f\n", sum);

    {
        int sum = 17, count = 5;
        double mean;
        mean = sum / count;           //
        printf("Value of mean : %f\n", mean );
        mean = (double) sum / count;           //
        printf("Value of mean : %f\n", mean );
    }
}
