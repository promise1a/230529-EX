#include <stdio.h>

int sum1(n1)
{
	int h;
	h = n1 / 60;
	return h;
}

int sum2(n1)
{
	int m;
	m = n1 % 60;
	return m;
}

int main()
{
	int Sec;
	scanf("%d", &Sec);

	if (Sec < 3600)
	{
		printf("%d�� %d��", sum1(Sec), sum2(Sec));
	}
	else if (Sec >= 3600)
		printf("�����޼���");
}