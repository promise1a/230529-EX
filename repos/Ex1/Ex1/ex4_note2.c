#include <stdio.h>

int main()

{
	// �Է� �ޱ�
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);

	int sub = 0;

	sub = a;

	for (int i = a + 1; i <= b; i++)
	{
		sub -= i;
	}

	printf("���� ����� %d�Դϴ�.", calc(a, b, c)); // 

}