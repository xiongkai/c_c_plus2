//
// Created by Administrator on 2019/12/21.
//
#include <iostream>
using namespace std;
#include "overriedTest.h"

class FatherTest{ //����
public:
    FatherTest()=default;
    void show(){
        cout<<"Father show()"<<endl;
    }
    void show(string msg){
        cout<<"Father show(string msg)"<<endl;
    }
};

class SonTest:public FatherTest{ //Father���������Son
public:
    void show(){
        cout<<"Son show()"<<endl;
    }
};

void overriedTest(){
    FatherTest father;
    father.show();
    father.show("123");
    SonTest son;
    son.show();
    FatherTest son1 = SonTest();
    son1.show();
    FatherTest *son2 = new SonTest();
    son2->show();
}
