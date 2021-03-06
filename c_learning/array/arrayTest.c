//
// Created by Administrator on 2019/11/20.
//
#include <stdio.h>
#include <stdlib.h>
#include "arrayTest.h"

void arrayTest(){
    int arr_a[] = {1, 2};

    printf("%p\n", arr_a);
    printf("%p\n", &arr_a);
    printf("%p\n", &arr_a[0]);
    printf("%d\n", sizeof(arr_a));

    int len = sizeof(arr_a) / sizeof(arr_a[0]);
    printf("arr_a element len  = %d\n", len);

    printf("arr_a[1] = %d\n", *(arr_a + 1));

    printf("arr_a + 1 = %p\n", arr_a + 1);
    printf("&arr_a[0] + 1 = %p\n", &arr_a[0] + 1);
    printf("&arr_a + 1 = %p\n", &arr_a + 1);

    printf("%d\n", &arr_a[1] - &arr_a[0]);

    int (*arr_p)[2] = &arr_a;
    printf("%p\n", arr_p);

    int arr_aa[2][2] = {{1, 2}, {3, 4}};
    printf("arr_aa[0][0] = %d [0][1] = %d\n", arr_aa[0][0], arr_aa[0][1]);
    printf("arr_aa[1][0] = %d [1][1] = %d\n", arr_aa[1][0], arr_aa[1][1]);
    printf("arr_aa = %p\n", arr_aa);
    printf("arr_aa[0] = %p\n", arr_aa[0]);
    printf("arr_aa[0][0] = %p\n", &arr_aa[0][0]);
    printf("---------------\n");

    printf("int (*)[2] size = %d\n", sizeof(int (*)[2]));
    printf("arr_aa + 1 = %p\n", arr_aa + 1);
    printf("arr_aa[0] + 1 = %p\n", arr_aa[0] + 1);
    printf("&arr_aa + 1 = %p\n", &arr_aa + 1);
    printf("&arr_aa[0] + 1 = %p\n", &arr_aa[0] + 1);
    printf("---------------\n");

    int arr_d[2] = {1, 2};
    int arr_c[2] = {3, 4};
    *arr_d = &arr_a;
    printf("%d %d\n", arr_d[0], arr_d[1]);

    int a[10] = {1,2 ,3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0];
    printf("%d %d\n", *(p + 1 + 2), p[1]);

    int aaa[] = {1, 2, 3};

    int* p_aaa[] = {&aaa[0], &aaa[1], &aaa[2]};

    printf("%p  %p  %p  %p\n", &aaa[0], &p_aaa[0], p_aaa, *p_aaa);

    int arr_f[2] = {1, 2};
    int *p_b[2] = {arr_f, arr_f};

    int (*p_c)[2] = &arr_f;

    printf("***********%d\n", sizeof(int (*)[2]));
}