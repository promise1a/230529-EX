#include <stdio.h>

// 10�� �Է¹ް� Ȧ¦ ����
int NumberCompare(int num)
{
	if (num % 2 == 0)
	{
		printf("�Է��� �� %�� ¦���Դϴ�.\n", num);
	}
	else
	{
		printf("�Է��� �� %�� Ȧ���Դϴ�.\n", num);
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
