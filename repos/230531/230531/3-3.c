#include <stdio.h>

// 10번 입력받고 홀짝 구분
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

int NumberInput(int num)
{
	scanf("%d", &num);
	return num;
}

int main()
{

	for (int i=0;i<10;i++)
	{
		int num3 = 0;
		NumberCompare(NumberInput(num3));
	}
	return 0;
}
