#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0;		// 초기화하지 않으면 0 초기화
	// static :: 딱 1회 초기화되고, 프로그램 종료 시까지
	// 메모리 공간에 존재한다.(전역변수 특성)
	int num2 = 0;		// 초기화하지 않으면 쓰레기 값 초기화
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}