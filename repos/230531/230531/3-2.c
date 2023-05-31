#include <stdio.h>
// 값 입력받고, 입력된 값이 짝수이냐 아니냐 함수로 구현
int NumberCompare(int num)
{
	if (num % 2 == 0)
	{ 
		printf("입력한 값 %는 짝수입니다.\n", num);
	}
	else
	{
		printf("입력한 값 %는 홀수입니다.\n", num);
	}
}

int main()
{
	int num3;
	scanf("%d", &num3);
	NumberCompare(num3);

	return 0;
}
