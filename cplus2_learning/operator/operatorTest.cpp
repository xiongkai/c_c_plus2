//
// Created by Administrator on 2019/12/17.
//
#include <iostream>
using namespace std;
#include "operatorTest.h"

class Line{
public:
    int length;
    Line();
    Line operator+(const Line& line){
        cout<<"operator+(Line &line)"<<endl;
        Line temp = *this;
        temp.length += line.length;
        return temp;
    }
};

void operator+(Line &line, int var){
    cout<<"operator+(Line &line, int var)"<<endl;
}

void operator+(int var, Line &line){
    cout<<"operator+(int var, Line &line)"<<endl;
}

void operatorTest(){
    Line line;
    line + 1;
    1 + line;
    line+line;
}
