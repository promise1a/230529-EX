#include <stdio.h>

int main()

{
	// 입력 받기
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);

	int sub = 0;

	sub = a;

	for (int i = a + 1; i <= b; i++)
	{
		sub -= i;
	}

	printf("연산 결과는 %d입니다.", calc(a, b, c)); // 

}