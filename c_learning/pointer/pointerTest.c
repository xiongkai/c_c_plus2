//
// Created by Administrator on 2019/11/21 0021.
//
#include <stdio.h>
#include <stdlib.h>

#include "pointerTest.h"

void pointerTest(){
    int arr_a[2][2] = {{1, 2}, {3, 4}};
    int (*arr_a_pa)[2][2] = &arr_a;
    int *arr_a_pb = (int *)arr_a;

    printf("%d\n", sizeof(int *[2]));
    printf("%d\n", sizeof(int (*)[2]));

    int *p[3];
    int a[3][4];
    printf("%p\n", p);
    printf("%p\n", p[0]);
    printf("%p\n", *p);
    int *p_p = p + 1;             //该语句表示p数组指向下一个数组元素。注：此数组每一个元素都是一个指针
    for(int i=0;i<3;i++)
        p[i]=a[i];
}