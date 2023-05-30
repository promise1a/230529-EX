#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		printf("*");

		for (int j = 2; j <= i; j++)
		{
			if (j < i)
				printf(" ");
			else
				printf("*");

		}
		printf("\n");
	}
	for (int k = 1; k <= n; k++)
	{
		printf("*");
	}
	printf("\n");
}
