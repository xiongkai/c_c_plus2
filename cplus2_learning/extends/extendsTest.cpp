//
// Created by Administrator on 2019/12/20.
//
#include <iostream>
using namespace std;
#include "extendsTest.h"

class GrandFather{                        //��һ�����GrandFather
public:
    GrandFather()=default;
    GrandFather(int v):value(v){
        cout<<"����GrandFather��Ĺ��캯��"<<endl;
    }
    int value;
};
class Father1:public GrandFather{         //�ڶ������Father1
public:
    Father1()=default;
    Father1(int v):GrandFather(v){
        cout<<"����Father1��Ĺ��캯��"<<endl;
    }
    void set_value(int value){           //����value��ֵ
        this->value=value;
    }
};
class Father2:public GrandFather{        //�ڶ������Father2
public:
    Father2()=default;
    Father2(int v):GrandFather(v){
        cout<<"����Father2��Ĺ��캯��"<<endl;
    }
    int get_value(){                     //��ȡvalue��ֵ
        return this->value;
    }
};
class Son:public Father1,public Father2{ //�����β���Son
public:
    Son()=default;
    Son(int v):Father1(v),Father2(v){
        cout<<"����Son��Ĺ��캯��"<<endl;
    }
};
void extendsTest(){
    Son s(10);
    s.set_value(20);
    cout<<"value="<<s.get_value()<<endl;//value=10
    cout<<"Father1�ഴ�����Ӷ����valueֵ��"<<s.Father1::value<<endl;
    cout<<"Father2�ഴ�����Ӷ����valueֵ��"<<s.Father2::value<<endl;
}
