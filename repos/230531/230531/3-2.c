#include <stdio.h>
// �� �Է¹ް�, �Էµ� ���� ¦���̳� �ƴϳ� �Լ��� ����
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

int main()
{
	int num3;
	scanf("%d", &num3);
	NumberCompare(num3);

	return 0;
}
