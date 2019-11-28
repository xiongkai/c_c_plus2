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

    //������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
    //ͬʱ�������˽ṹ�����s1
    //����ṹ�岢û�б������ǩ
    struct{
        int a;
        char b;
        double c;
    } s1;

    //������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
    //�ṹ��ı�ǩ������ΪSIMPLE,û����������
    struct SIMPLE{
        int a;
        char b;
        double c;
    };
    //��SIMPLE��ǩ�Ľṹ�壬���������˱���t1��t2��t3
    struct SIMPLE t1, t2[20], *t3;

    //Ҳ������typedef����������
    typedef struct{
        int a;
        char b;
        double c;
    } Simple;
    //���ڿ�����Simple2��Ϊ���������µĽṹ�����
    Simple u1, u2[20], *u3;

    //�˽ṹ������������������Ľṹ��
    struct COMPLEX{
        char string[100];
        struct SIMPLE a;
    };

    //�˽ṹ�������������ָ���Լ����͵�ָ��
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
        } book = {"C ����", "RUNOOB", "�������", 123456};

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
        } book = {.title="C ����" , .book_id=123456, .author="RUNOOB", .subject="�������"};
        printf( "Book title : %s\n", book.title);           // Book title : C ����
        printf( "Book author : %s\n", book.author);         // Book author : RUNOOB
        printf( "Book subject : %s\n", book.subject);       // Book subject : �������
        printf( "Book book_id : %d\n", book.book_id);       // Book book_id : 123456
    }

    {
        struct Books {
            char title[50];
            char author[50];
            char subject[100];
            int book_id;
        };
        struct Books book;        /* ���� Book1������Ϊ Books */

        /* Book1 ���� */
        strcpy( book.title, "C Programming");
        strcpy( book.author, "Nuha Ali");
        strcpy( book.subject, "C Programming Tutorial");
        book.book_id = 6495407;

        /* ��� Book1 ��Ϣ */
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