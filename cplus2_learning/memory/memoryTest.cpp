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
        Book(){
            cout << "Book create" << endl;
        }
        ~Book(){
            cout << "Book destroy" << endl;
        }
    };
    Book *book1 = new Book;
    strcpy(book1->name, "�����뺣");
    strcpy(book1->author, "������");
    cout << "book1->name = " << book1->name << endl;
    cout << "book1->author = " << book1->author << endl;
    delete book1;

    Book *books = new Book[5];
    for(int i=0; i<5; i++){
        Book *book = books + i;
        strcpy(book->name, "�����뺣");
        strcpy(book->author, "������");
    }
    delete [] books;

    int **parr = new int *[2];

    int *arr_1 = parr[0];
    arr_1[0] = 123;
    arr_1[1] = 234;
    cout << "arr_1[0] = " << parr[0][0] << endl;
    cout << "arr_1[1] = " << parr[0][1] << endl;

    char *pvalue  = nullptr;   // ��ʼ��Ϊ null ��ָ��
    pvalue  = new char[20]; // Ϊ���������ڴ�

    int (*b)[2] = (int (*)[2])pvalue;
}
