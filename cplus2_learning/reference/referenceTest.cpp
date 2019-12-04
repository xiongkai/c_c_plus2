//
// Created by Administrator on 2019/12/4.
//
#include <iostream>
using namespace std;
#include "referenceTest.h"

void referenceTest(){
    double value = 10.3;
    //int &b=a; //错误，引用的类型必须和其所绑定的变量的类型相同
    double &ref_var = value;
    cout<<"value在内存中的地址为："<<&value<<endl;
    cout<<"ref_var在内存中的地址为："<<&ref_var<<endl;

    int arr[3] = {1,2,3};
    int (&ref_arr)[3] = arr;//对数组的引用
    cout<<&arr[0]<<" "<<&ref_arr[0]<<endl;
    cout<<&arr[1]<<" "<<&ref_arr[1]<<endl;
    cout<<&arr[2]<<" "<<&ref_arr[2]<<endl;

    int var = 10;
    int *ptr = &var;
    int *&new_ptr = ptr;
    cout<<&ptr<<" "<<&new_ptr<<endl;

    int (*p_arr)[3] = &arr;
    int (*&p_ref_arr)[3] = p_arr;
    cout<<"p_arr在内存中的地址为："<<&p_arr<<endl;
    cout<<"p_ref_arr在内存中的地址为："<<&p_ref_arr<<endl;
}

