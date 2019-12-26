//
// Created by Administrator on 2019/12/21.
//
#include <iostream>
using namespace std;
#include "overriedTest.h"

class FatherTest{ //基类
public:
    FatherTest()=default;
    void show(){
        cout<<"Father show()"<<endl;
    }
    void show(string msg){
        cout<<"Father show(string msg)"<<endl;
    }
    int value=20;
};

class SonTest:public FatherTest{ //Father类的派生类Son
public:
    SonTest():FatherTest(){};
    void show(){
        cout<<"Son show()"<<endl;
    }
    int value=10;
};

void overriedTest(){
    FatherTest father;
    father.show();
    father.show("123");
    SonTest son;
    son.show();
    son.FatherTest::show();
    FatherTest son1 = SonTest();
    son1.show();
    FatherTest &son2 = son;
    son2.show();
    FatherTest *son3 = &son;
    son3->show();
    FatherTest *son4 = new SonTest();
    son4->show();
    cout<<son4->value<<endl;
}
