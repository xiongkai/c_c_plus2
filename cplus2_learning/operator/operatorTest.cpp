//
// Created by Administrator on 2019/12/17.
//
#include <iostream>
using namespace std;
#include "operatorTest.h"

class Line{
public:
    int length=0;
    Line();
    Line(const Line &line){
        cout<<"Line(const Line &line)"<<endl;
    }
    Line& operator+(const Line& line);
    void operator=(const Line& line);
};

Line& Line::operator+(const Line &line) {
    cout<<"operator+(Line &line)"<<endl;
    cout<< this << "--" << &line << endl;
    this->length += line.length;
    return *this;
}
void Line::operator=(const Line& line){
    cout << "ÖØÐÂ¸³Öµ" << endl;
    length = line.length;
}

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
    Line line1 = line+line;
    cout<< &line << "--" << &line1 << endl;
    {
        Line line1, line2;
        line1.length = 1;
        line2.length = 2;
        line1 = line2;
    }
}
