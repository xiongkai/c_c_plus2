//
// Created by Administrator on 2019/11/28 0028.
//
#include <stdio.h>
#include <string.h>
#include "structTest.h"

void structTest(){
    struct Books
    {
        char  title[50];
        char  author[50];
        char  subject[100];
        int   book_id;
    } book;

    //此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
    //同时又声明了结构体变量s1
    //这个结构体并没有标明其标签
    struct{
        int a;
        char b;
        double c;
    } s1;

    //此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
    //结构体的标签被命名为SIMPLE,没有声明变量
    struct SIMPLE{
        int a;
        char b;
        double c;
    };
    //用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
    struct SIMPLE t1, t2[20], *t3;

    //也可以用typedef创建新类型
    typedef struct{
        int a;
        char b;
        double c;
    } Simple;
    //现在可以用Simple2作为类型声明新的结构体变量
    Simple u1, u2[20], *u3;

    //此结构体的声明包含了其他的结构体
    struct COMPLEX{
        char string[100];
        struct SIMPLE a;
    };

    //此结构体的声明包含了指向自己类型的指针
    struct NODE{
        char string[100];
        struct NODE *next_node;
    };

    {
        struct Books{
            char  title[50];
            char  author[50];
            char  subject[100];
            int   book_id;
        } book = {"C 语言", "RUNOOB", "编程语言", 123456};

        printf( "Book title : %s\n", book.title);
        printf( "Book author : %s\n", book.author);
        printf( "Book subject : %s\n", book.subject);
        printf( "Book book_id : %d\n", book.book_id);
    }

    {
        struct Books{
            char title[50];
            char author[50];
            char subject[100];
            int book_id;
        } book = {.title="C 语言" , .book_id=123456, .author="RUNOOB", .subject="编程语言"};
        printf( "Book title : %s\n", book.title);           // Book title : C 语言
        printf( "Book author : %s\n", book.author);         // Book author : RUNOOB
        printf( "Book subject : %s\n", book.subject);       // Book subject : 编程语言
        printf( "Book book_id : %d\n", book.book_id);       // Book book_id : 123456
    }

    {
        struct Books {
            char title[50];
            char author[50];
            char subject[100];
            int book_id;
        };
        struct Books book;        /* 声明 Book1，类型为 Books */

        /* Book1 详述 */
        strcpy( book.title, "C Programming");
        strcpy( book.author, "Nuha Ali");
        strcpy( book.subject, "C Programming Tutorial");
        book.book_id = 6495407;

        /* 输出 Book1 信息 */
        printf( "Book title : %s\n", book.title);
        printf( "Book author : %s\n", book.author);
        printf( "Book subject : %s\n", book.subject);
        printf( "Book book_id : %d\n", book.book_id);

        struct Books *book_p = &book;
        book_p->book_id = 123456789;
        printf( "Book title : %s\n", book_p->title);
        printf( "Book author : %s\n", book_p->author);
        printf( "Book subject : %s\n", book_p->subject);
        printf( "Book book_id : %d\n", book_p->book_id);
    }
    {
        struct {
            char name[10];
            int age;
            struct {
                char name2[10];
                char age2;
            } test;
        } user;
        printf("user size = %d\n", sizeof(user));
        printf("user.name size = %d\n", sizeof(user.name));
        printf("user.age size = %d\n", sizeof(user.age));
        printf("user.test size = %d\n", sizeof(user.test));

        printf("user address = %d\n", &user);
        printf("user.name address = %d\n", &(user.name));
        printf("user.age address = %d\n", &(user.age));
    }
}