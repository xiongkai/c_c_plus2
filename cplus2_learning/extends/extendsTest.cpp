//
// Created by Administrator on 2019/12/20.
//
#include <iostream>
using namespace std;
#include "extendsTest.h"

class GrandFather{                        //第一层基类GrandFather
public:
    GrandFather()=default;
    GrandFather(int v):value(v){
        cout<<"调用GrandFather类的构造函数"<<endl;
    }
    int value;
};
class Father1:public GrandFather{         //第二层基类Father1
public:
    Father1()=default;
    Father1(int v):GrandFather(v){
        cout<<"调用Father1类的构造函数"<<endl;
    }
    void set_value(int value){           //设置value的值
        this->value=value;
    }
};
class Father2:public GrandFather{        //第二层基类Father2
public:
    Father2()=default;
    Father2(int v):GrandFather(v){
        cout<<"调用Father2类的构造函数"<<endl;
    }
    int get_value(){                     //获取value的值
        return this->value;
    }
};
class Son:public Father1,public Father2{ //第三次层类Son
public:
    Son()=default;
    Son(int v):Father1(v),Father2(v){
        cout<<"调用Son类的构造函数"<<endl;
    }
};
void extendsTest(){
    Son s(10);
    s.set_value(20);
    cout<<"value="<<s.get_value()<<endl;//value=10
    cout<<"Father1类创建的子对象的value值："<<s.Father1::value<<endl;
    cout<<"Father2类创建的子对象的value值："<<s.Father2::value<<endl;
}
