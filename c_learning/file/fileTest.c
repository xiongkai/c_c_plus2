//
// Created by Administrator on 2019/12/2 0002.
//
#include <stdio.h>
#include <errno.h>
#include "fileTest.h"

void fileTest(){
    {
        FILE *fp = NULL;
        fp = fopen("../temp/test.txt", "w+");
        fprintf(fp, "This is testing for fprintf...\n");
        fputs("This is testing for fputs...\n", fp);
        fclose(fp);
    }
    {
        FILE *fp = NULL;
        char buff[255];

        fp = fopen("../temp/test.txt", "r+");
        fscanf(fp, "%s", buff);
        printf("buff = %s\n", buff );
        char *str_a = fgets(buff, 255, (FILE*)fp);
        if(str_a > 0) printf("str_a = %s\n", buff);
        str_a = fgets(buff, 255, (FILE*)fp);
        if(str_a > 0) printf("str_a = %s\n", buff);
        fclose(fp);
    }
    {
        FILE *fp = NULL;
        fp = fopen("../file/test.txt", "r+");  // 确保 test.txt 文件已创建
        fprintf(fp, "This is testing for fprintf...\n");
        fseek(fp, 10, SEEK_SET);
        if (fputc(65,fp) == EOF) {
            printf("fputc fail\n");
        }
        fclose(fp);
    }
    {
        FILE *fp = fopen("../file/test.txt", "r");
        if( fp == NULL ){
            perror ("打开文件错误");
            return;
        }
        fseek(fp, 0, SEEK_SET);
        int len = ftell(fp);
        fclose(fp);
        printf("test.txt 的总大小 = %d 字节\n", len);
    }
}