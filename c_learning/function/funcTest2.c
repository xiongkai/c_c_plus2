//
// Created by Administrator on 2019/11/26.
//
#include <stdio.h>
#include <stdarg.h>
#include "funcTest2.h"

void funcParam_arr2(int var[2]){
    printf("var size = %d\n", sizeof(var));
    var[0] = 123;
    var[1] = 234;
}

void funcParam2_arr2(int var[2][2]){
    printf("var size = %d\n", sizeof(var));
    var[0][0] = 123;
    var[0][1] = 234;
    var[1][0] = 345;
    var[1][1] = 456;
}

double average(int num,...){                //
    va_list valist;
    double sum = 0.0;
    int i;
    /* 为 num 个可变参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++){
        sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);
    return sum/num;
}

void functionTest2(){
    int arr_a[2] = {111, 222};
    printf("arr_a size = %d\n", sizeof(arr_a));     // arr_a size = 8
    printf("arr_a = %d %d\n", arr_a[0], arr_a[1]);  // arr_a = 111  222
    funcParam_arr2(arr_a);
    printf("arr_a = %d %d\n", arr_a[0], arr_a[1]);  // arr_a = 123  234

    int arr_b[2][2] = {{111, 222}, {333, 444}};
    printf("arr_b size = %d\n", sizeof(arr_b));     // arr_b size = 16
    printf("arr_b[0] = %d %d\n", arr_b[0][0], arr_b[0][1]);  // arr_b[0] = 111  222
    printf("arr_b[1] = %d %d\n", arr_b[1][0], arr_b[1][1]);  // arr_b[1] = 333  444
    funcParam2_arr2(arr_b);
    printf("arr_b[0] = %d %d\n", arr_b[0][0], arr_b[0][1]);  // arr_b[0] = 123  234
    printf("arr_b[1] = %d %d\n", arr_b[1][0], arr_b[1][1]);  // arr_b[1] = 345  456

    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
}
