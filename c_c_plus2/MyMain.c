#include <stdio.h>
#include <stdlib.h>

void intTest();

int main(int argc, char* argv[]) {
	printf("Hello World!\n");

	intTest();

	system("pause");
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