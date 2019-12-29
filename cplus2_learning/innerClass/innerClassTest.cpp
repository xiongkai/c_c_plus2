//
// Created by Administrator on 2019/12/29 0029.
//
#include <iostream>
#include "innerClassTest.h"
using namespace std;

class MyClass {
public:
    char *desc = "MyClass";
    class InnerClassA{
    public:
        void print(){
            cout<<"InnerClassA print"<<endl;
        }
    };
};

void innerClassTest(){
    MyClass::InnerClassA innerClassA = MyClass::InnerClassA();
    innerClassA.print();
}

