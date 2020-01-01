//
// Created by Administrator on 2019/12/29 0029.
//
#include <iostream>
#include "typeCastTest.h"
using namespace std;

class Animal{
public:
    int age;
    Animal(int p_age):age(p_age){}
    void printAge(){
        cout<<"Animal age = "<<age<<endl;
    }
};

class Dog: public Animal{
public:
    int age_II;
    Dog(int p_age): Animal(p_age){}
    void printAge(){
        cout<<"Dog age = "<<age<<endl;
    }
};

void typeCastTest(){
    const double a = 1.1;
    int b = int(a);
    int c = static_cast<int>(a);
    cout<<"c = "<<c<<endl;

    Dog dog(1);
    cout<<"dog add = "<<&dog<<endl;
    dog = Dog(2);
    cout<<"dog add = "<<&dog<<endl;
    Animal animal = static_cast<Animal>(dog);xK13197167876Kx
}