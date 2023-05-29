#include <stdio.h>
int main()
{
	int num = 0; // 반복문 밖에
	do
	{
		printf("hello world! \n");
		num++;
	} while (num < 3);
}

// do while :: 입력값 검증이 가능함