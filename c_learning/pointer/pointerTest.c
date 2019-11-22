//
// Created by Administrator on 2019/11/21 0021.
//
#include <stdio.h>
#include <stdlib.h>

#include "pointerTest.h"

void pointerTest2();

void pointerTest(){
    int arr_a[2][2] = {{1, 2}, {3, 4}};
    int (*arr_a_pa)[2][2] = &arr_a;
    int *arr_a_pb = (int *)arr_a;

    printf("%d\n", sizeof(int *[2]));
    printf("%d\n", sizeof(int (*)[2]));

    /*int *p_a = NULL;
    printf("%p %d\n", p_a, p_a == 0);*/

    double double_a = 1.1;
    int *p_a = &double_a;

    printf("%f\n", *p_a);

    int int_a = 1000;

    p_a = &int_a;

    printf("int_a = %d\n", *p_a);
    *p_a = 2000;
    printf("int_a = %d\n", *p_a);

    printf("------------------pointerTest2------------------\n");
    pointerTest2();
}

void pointerTest2(){
    int a = 123;
    int *p_a = &a;
    int * *p_p_a = &p_a;
    int * * *p_p_p_a = &p_p_a;
    printf("%d  %d %d\n", ***p_p_p_a, **p_p_a, *p_a);

    int arr_a[2] = {1, 2};
    int *arr_p_a = arr_a;
    printf("%d\n", arr_p_a[1]);

    int int_a = 123;
    int *p_int_a = &int_a;
    printf("%d\n", p_int_a[1]);
}