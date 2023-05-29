#include <stdio.h>


int sub1(int A, int B, int C)
{
	int i;
	int sum = 0;

	for (i = B; A >= i; i++)
	{
		if (i % C != 0)
		{
			sum += i;
		}


	}
	return sum;
}

int sub2(int A, int B, int C)
{
	int i;
	int sum = 0;

	for (i = A; B >= i; i++)
	{
		if (i % C != 0)
		{
			sum += i;
		}

	}
	return sum;
}

int sub3(int A, int B, int C)
{
	int sum = 0;
	return sum;
}




int main()
{
	int a, b, c, i;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);


	if (a > b)
	{
		printf("%d부터 %d까지의 합은 %d입니다.\n", b, a, sub1(a, b, c));
	}
	if (a < b)
	{
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sub2(a, b, c));
	}
	if (a == b)
	{
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sub3(a, b, c));
	}

}
