//
// Created by Administrator on 2019/12/4.
//
#include <iostream>
using namespace std;
#include "referenceTest.h"

void referenceTest(){
    double value = 10.3;
    //int &b=a; //�������õ����ͱ���������󶨵ı�����������ͬ
    double &ref_var = value;
    cout<<"value���ڴ��еĵ�ַΪ��"<<&value<<endl;
    cout<<"ref_var���ڴ��еĵ�ַΪ��"<<&ref_var<<endl;

    int arr[3] = {1,2,3};
    int (&ref_arr)[3] = arr;//�����������
    cout<<&arr[0]<<" "<<&ref_arr[0]<<endl;
    cout<<&arr[1]<<" "<<&ref_arr[1]<<endl;
    cout<<&arr[2]<<" "<<&ref_arr[2]<<endl;

    int var = 10;
    int *ptr = &var;
    int *&new_ptr = ptr;
    cout<<&ptr<<" "<<&new_ptr<<endl;

    int (*p_arr)[3] = &arr;
    int (*&p_ref_arr)[3] = p_arr;
    cout<<"p_arr���ڴ��еĵ�ַΪ��"<<&p_arr<<endl;
    cout<<"p_ref_arr���ڴ��еĵ�ַΪ��"<<&p_ref_arr<<endl;
}

