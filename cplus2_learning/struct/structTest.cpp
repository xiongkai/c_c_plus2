//
// Created by Administrator on 2019/12/3 0003.
//
#include <iostream>

#include "structTest.h"

void structTest(){
    struct Book{
    private:
        char name[20];
        char author[10];
        void print(){
            std::cout << "book1 = {name: " << name << ", author: " << author << "}" << std::endl;
        }
    public:
        Book(char *name, char *author){

        }
    };

    Book book1 = {"老人与海", "海明威"};
    //std::cout << "book1 = {name: " << book1.name << ", author: " << book1.author << "}" << std::endl;

    //book1.print();
}