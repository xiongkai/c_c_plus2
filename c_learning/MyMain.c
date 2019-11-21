#include <stdio.h>
#include <stdlib.h>
#include "array/arrayTest.h"

void intTest();
void floatTest();
void operatorsTest();
void loopTest();
void conditionTest();

int main(int argc, char* argv[]) {
	printf("Hello World!\n");

    printf("---------------------intTest--------------------------\n");

	intTest();

	printf("---------------------floatTest--------------------------\n");

	floatTest();

    printf("---------------------operatorsTest--------------------------\n");

    operatorsTest();

    printf("---------------------loopTest--------------------------\n");

    loopTest();

    printf("---------------------conditionTest--------------------------\n");

    conditionTest();

    printf("---------------------arrayTest--------------------------\n");

    arrayTest();

	//system("pause");
	return 0;
}

void intTest() {
    int int_a = 123;			    //  signed int 简写

    long long_a = 123;				//  signed long int  的简写

    long long long_long_a = 123;    //  signed long long int  的简写

    unsigned int u_int_a = 123; // 无符号必须 使用 unsigned 声明 不能省略

    unsigned long long int u_long_long_int_a = 123;

	printf("整型：%d  %ld %lld %llu\n", int_a, long_a, long_long_a, u_long_long_int_a);

    int len_a = sizeof(int_a);

    int len_int = sizeof(int);

	printf("整型占用：sizeof(var)=%d, sizeof(int)=%d\n", len_a, len_int);
}

void floatTest(){
    float float_a = 12345.1f;

    double double_a = 1.1;

    long double double_b = 1.1L;

    printf("%f  %f  %lf\n", float_a, double_a, double_b);

    printf("%10.2f\n", float_a);
}

void operatorsTest(){
    int a, b, c = 1;
    a = b = c = 123;
    printf("a = b = c = %d\n", a);

    int d = a ++;
    printf("d = %d\n", d);
    int e = a ++;
    printf("e = %d\n", e);
}

void loopTest(){
    int a = 0;
    while (a < 2) {
        printf("a = %d ", a);
        a++;
    }
    printf("\n");

    do{
        printf("a = %d ", a);
        a--;
    }while(a > 0);
    printf("\n");

    for (int i = 0; i < 2; ++i) {
        printf("i = %d ", i);
    }
    printf("\n");

    for (int i = 0; i < 2; ++i) {
        if(i == 0){
            break;
        }
        printf("i = %d ", i);
    }
    printf("\n");

    for (int i = 0; i < 2; ++i) {
        if(i == 0){
            continue;
        }
        printf("i = %d ", i);
    }
    printf("\n");
}

int get(int a){
    return a + 1;
}

void conditionTest(){
    int a = 1, b = 1;
    if(a > 1 && (b++ == 1)){

    }
    printf("a = %d  b = %d\n", a , b);

    if(a == 1 && b == 1){

    }else if(a > 1 || b < 1){

    }else {

    }

    switch(get(1)){
        case 1:

            break;
        case 2:

            break;
        default:

            break;
    }
}