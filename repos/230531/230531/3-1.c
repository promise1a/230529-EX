// �� �Է¹ް�, �Էµ� ���� ¦���̳� �ƴϳ� �Լ��� ����

#include <stdio.h>

char NumberCompare(int n)
{
	if (n % 2 == 0)
		return '¦';
	else
		return 'Ȧ';
}

int main(void)
{
	int num;
	scanf("%d", num);
	printf("%d�� %c���Դϴ�.", num, NumberCompare(num));

	return 0;
}
