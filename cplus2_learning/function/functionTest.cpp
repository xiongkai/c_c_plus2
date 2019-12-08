//
// Created by Administrator on 2019/12/7.
//
#include <iostream>
#include "functionTest.h"
using namespace std;

void defaultTest(int a);
void defaultTest(int a, int b = 20);

void defaultTest(int a, int b){
    cout<<"a="<<a<<";b="<<b<<endl;
}
void defaultTest(int a){
    cout<<"a="<<a<<endl;
}

void floatTest(float var){
    cout<<"float var="<<var<<endl;
}

void floatTest(double var){
    cout<<"double var="<<var<<endl;
}

void integerTest(int var){
    cout<<"int var="<<var<<endl;
}

void integerTest(long var){
    cout<<"long var="<<var<<endl;
}

void functionTest(){
    defaultTest(1, 2);
    floatTest(1.0f);
    integerTest(1L);
}
