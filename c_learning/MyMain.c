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
	int int_a = 123;			    //  signed int ��д

	long long_a = 123;				//  signed long int  �ļ�д

	long long long_long_a = 123;    //  signed long long int  �ļ�д

	unsigned int u_int_a = 123; // �޷��ű��� ʹ�� unsigned ���� ����ʡ��

	unsigned long long int u_long_long_int_a = 123;

	printf("���ͣ�%d  %ld %lld %llu\n", int_a, long_a, long_long_a, u_long_long_int_a);

	int len_a = sizeof(int_a);

	int len_int = sizeof(int);

	printf("����ռ�ã�sizeof(var)=%d, sizeof(int)=%d\n", len_a, len_int);
}