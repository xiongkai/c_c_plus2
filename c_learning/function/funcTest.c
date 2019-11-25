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
int min(int num1, int num2)
{
    /* 局部变量声明 */
    int result;

    if (num1 > num2)
        result = num2;
    else
        result = num1;

    return result;
}

void functionTest(){
    int max_a = max(1, 2);
    printf("max_a = %d\n", max_a);
    int (*func_a)(int, int) = &max;
    printf("max = %p func_a = %p\n", max, func_a);
    max_a = func_a(1, 2);
    printf("max_a = %d\n", max_a);

    func_a = &min;
    max_a = func_a(1, 2);
    printf("max_a = %d\n", max_a);
}

