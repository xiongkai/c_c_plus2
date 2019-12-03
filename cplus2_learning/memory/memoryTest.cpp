//
// Created by Administrator on 2019/12/3 0003.
//
#include <iostream>
#include <cstring>
using namespace std;

void memoryTest(){
    struct Book {
        char name[50];
        char author[20];
    };
    Book *book1 = new Book();
    strcpy(book1->name, "老人与海");
    strcpy(book1->author, "海明威");
    printf("%s  %s\n", book1->name, book1->author);
    cout << "book1->name = " << book1->name << endl;
    cout << "book1->author = " << book1->author << endl;
}
