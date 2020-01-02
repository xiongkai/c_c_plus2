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
    virtual void printAge(){
        cout<<"Animal age = "<<age<<endl;
    }
};

class Dog: public Animal{
public:
    Dog(int p_age): Animal(p_age){}
    void printAge(){
        cout<<"Dog age = "<<age<<endl;
    }
    int age_II;
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
    Animal animal = static_cast<Animal>(dog);

    Dog *ptr_dog = new Dog(1);
    Animal *ptr_animal = static_cast<Animal *>(ptr_dog);
    ptr_animal->printAge();
    Animal *ptr_animal2 = dynamic_cast<Animal *>(ptr_dog);
    ptr_animal2->printAge();

    Animal *ptr_animal3 = new Animal(1);
    Dog *ptr_dog2 = dynamic_cast<Dog *>(ptr_animal3);
    if(ptr_dog2 == NULL){
        cout<<"ptr_dog2 is null"<<endl;
    }
    Dog *ptr_dog3 = static_cast<Dog *>(ptr_animal3);
    ptr_dog3->age_II = 1;
    int xxx = 2;
    cout<<"ptr_dog3.age_II="<<ptr_dog3->age_II<<endl;
    ptr_dog3->printAge();
}