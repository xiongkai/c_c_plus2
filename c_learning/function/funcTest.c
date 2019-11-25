//
// Created by Administrator on 2019/11/25 0025.
//
#include <stdio.h>
#include <stdlib.h>

#include "funcTest.h"

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2)
{
    /* 局部变量声明 */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

void funcTest(){
    return 0;
}

