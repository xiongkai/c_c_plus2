//
// Created by Administrator on 2019/12/29 0029.
//
#include <iostream>
#include <exception>
using namespace std;

#include "exceptionTest.h"

class MyException : public exception{
public:
    const char* what() throw(){
        return "C++ Custom Exception";
    }
};

void exceptionTest(){
    try{
        throw MyException();
    }catch (MyException &e){
        cout<<e.what()<<endl;
    }
}

