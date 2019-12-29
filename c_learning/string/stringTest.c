//
// Created by Administrator on 2019/11/27.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "stringTest.h"

void _charTest(){
    char char_a = 'a';
    printf("char len = %d\n", sizeof(char));
    printf("char_a = %c\n", char_a);

    char char_b = 'a';
    printf("char_b = %c\n", char_b);
    printf("char_b = %d\n", char_b);
    char_b = 65;                     //
    printf("char_b = %c\n", char_b);
    printf("char_b = %d\n", char_b);

    char char_c = 'a';
    printf("char_c upper = %c\n", toupper(char_c));
    char char_d = 'A';
    printf("char_d lower = %c\n", tolower(char_d));
}

void _stringTest(){
    char string_a[6] = {'1', '2', '3', '4', '\0'};
    printf("string_a = %s\n", string_a);
    printf("string_a len = %d\n", sizeof(string_a));
    string_a[0] = '5';
    printf("string_a = %s\n", string_a);

    char string_b[5] = "1234";
    printf("string_b = %s\n", string_b);
    printf("string_b len = %d\n", sizeof(string_b));
    string_b[0] = '5';
    printf("string_b = %s\n", string_b);

    char string_c[5] = "1234";
    char string_d[9] = "23456789";
    strcpy(string_c, string_d);
    printf("string_c = %s\n", string_c);

    const char str[] = "http://www.runoob.com";
    const char ch = '.';
    char *ret;
    ret = strchr(str, ch);
    printf("%c 之后的字符串是 %s\n", ch, ret);

    const char string_e[20] = "RUNOOB";
    const char string_f[10] = "NOOB";
    char *ret_address;
    ret_address = strstr(string_e, string_f);
    printf("子字符串是： %s\n", ret_address);

    char str1[15], str2[15];
    strcpy(str1, "abcdef");
    strcpy(str2, "ABCDEF");
    int result = strcmp(str1, str2);
    if(result < 0){
        printf("str1 小于 str2\n");
    }else if(result > 0){
        printf("str2 小于 str1\n");
    }else{
        printf("str1 等于 str2\n");
    }

    char str_a[30] = "20.30300 This is test";
    char *ptr;
    double ret_a = strtod(str_a, &ptr);
    printf("数字（double）是：%lf\n", ret_a);
    printf("字符串部分是：%s\n", ptr);
}

void convertString(){
    char str[20];
    strcpy(str, "98993489");
    int val = atoi(str);
    printf("字符串值 = %s, 整型值 = %d\n", str, val);
    strcpy(str, "runoob.com");
    char str2[] = "11.1";
    val = atoi(str2);
    printf("字符串值 = %s, 整型值 = %d\n", str, val);
}

void stringTest(){
    printf("------------------------_charTest-----------------\n");
    _charTest();
    printf("------------------------_stringTest-----------------\n");
    _stringTest();
    printf("------------------------convertString-----------------\n");
    convertString();
}
