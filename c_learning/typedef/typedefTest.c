//
// Created by Administrator on 2019/11/30.
//
#include <stdio.h>
#include <string.h>
#include "typedefTest.h"

void typedefTest(){
    {
        typedef unsigned char BYTE;
        BYTE  b1 = 1, b2 = 2;
        unsigned char char1 = b1;
    }{
        typedef struct Books
        {
            char  title[50];
            char  author[50];
            char  subject[100];
            int   book_id;
        } Book;
        Book book;
        strcpy( book.title, "C �̳�");
        strcpy( book.author, "Runoob");
        strcpy( book.subject, "�������");
        book.book_id = 12345;
        printf( "����� : %s\n", book.title);
        printf( "������ : %s\n", book.author);
        printf( "����Ŀ : %s\n", book.subject);
        printf( "�� ID : %d\n", book.book_id);
    }
    {
        #define TRUE  1
        #define FALSE 0
        printf( "TRUE ��ֵ: %d\n", TRUE);
        printf( "FALSE ��ֵ: %d\n", FALSE);
        #define byte  unsigned char
        byte byte1 = 123;
        printf( "byte1 ��ֵ: %d\n", byte1);
    }
}
