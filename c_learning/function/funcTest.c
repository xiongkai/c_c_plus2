//
// Created by Administrator on 2019/11/25 0025.
//
#include <stdio.h>
#include <stdlib.h>

#include "funcTest.h"

/* ���������������нϴ���Ǹ��� */
int max(int num1, int num2)
{
    /* �ֲ��������� */
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

int min(int num1, int num2)
{
    /* �ֲ��������� */
    int result;

    if (num1 > num2)
        result = num2;
    else
        result = num1;

    return result;
}

int* getResults(){
    int (*arr_a_p)[2] = (int (*)[2])malloc(sizeof(int) * 2);
    printf("arr_a_p = %p\n", arr_a_p);
    (*arr_a_p)[0] = 123;
    (*arr_a_p)[1] = 234;
    return (int*)arr_a_p;
}


void swap(int x, int y){
    int temp;
    temp = x;               /* ���� x ��ֵ */
    x = y;                  /* �� y ��ֵ�� x */
    y = temp;               /* �� temp ��ֵ�� y */
}

void _swap(int *x, int *y){
    int temp;
    temp = *x;               /* ���� x ��ֵ */
    *x = *y;                  /* �� y ��ֵ�� x */
    *y = temp;               /* �� temp ��ֵ�� y */
}

void funcParam_arr(int p[2]){
    p[0] = 123;
    p[1] = 234;
}

void funcParam_arr_test(int p[2]){
    printf("%d\n", sizeof(p));
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

    int (*results)[2] = (int (*)[2])getResults();
    printf("results = %p\n", results);
    printf("result = %d  %d\n", (*results)[0], (*results)[1]);
    free(results);

    /* �ֲ��������� */
    int a = 100, b = 200;
    printf("����ǰ a=%d  b=%d\n", a, b);
    swap(a, b);/* ���ú���������ֵ */
    printf("������ a=%d  b=%d\n", a, b);

    printf("����ǰ a=%d  b=%d\n", a, b);
    _swap(&a, &b);/* ���ú���������ֵ */
    printf("������ a=%d  b=%d\n", a, b);

    int arr_a[2] = {111, 222};
    printf("arr_a = %d  %d\n", arr_a[0], arr_a[1]);
    funcParam_arr(arr_a);
    printf("arr_a = %d  %d\n", arr_a[0], arr_a[1]);
    arr_a[0] = 111, arr_a[1] = 222;
    funcParam_arr(&arr_a);
    printf("arr_a = %d  %d\n", arr_a[0], arr_a[1]);

    int (*p)[2] = &arr_a;
    printf("%d\n", sizeof(*p));

    funcParam_arr_test(arr_a);
}

