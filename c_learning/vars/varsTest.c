//
// Created by Administrator on 2019/12/1.
//
#include <stdio.h>
#include <stdlib.h>
#include "varsTest.h"

int arr_a[2] = {123};

void func1(void){
    /* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
    * 每次调用函数 'func1' 'thingy' 值不会被重置。
    */
    static int thingy=5;
    thingy++;
    printf("value of thingy : %d\n", thingy);
}
static int int_a = 1111111;
void varsTest(){
    {
        const int  LENGTH = 10;
        const int  WIDTH  = 5;
        int area = LENGTH * WIDTH;
        printf("value of area : %d\n", area);
        int *WIDTH_P = &WIDTH;
        *WIDTH_P = 6;
        printf("WIDTH = %d\n", WIDTH);
    }
    {
        #define LENGTH 10
        #define WIDTH  5
        int area = LENGTH * WIDTH;
        printf("value of area : %d\n", area);
    }
    func1();
    func1();

    int int_a = 123, int_b = 234;
    const int *p_a = &int_a;
    int * const p_b = &int_a;
    printf("p_b value = %d\n", *p_b);

    /*
    因为restar是访问分配的内存的唯一且初始的方式，那么编译器可以将上述对restar的操作进行优化：restar[n]+=8;
    而par并不是访问数组ar的唯一方式，因此并不能进行下面的优化：par[n]+=8;因为在par[n]+=3前，ar[n]*=2进行了改变。
     使用了关键字restrict，编译器就可以放心地进行优化了
     * */
    int ar[10];
    int * restrict restar=(int *)malloc(10*sizeof(int));
    int *par=ar;
    for(int n=0;n<10;n++){
        par[n]+=5;
        restar[n]+=5;
        ar[n]*=2;
        par[n]+=3;
        restar[n]+=3;
    }
}
