#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++) // i�� n���� ���� �� �ݺ��� Ż��
	{
		printf("*"); // j = 1�϶�, �̸� ���

		for (int j = 2; j <= i; j++)
		{
			if (j<i)
				printf(" ");
			else 
				printf("*");

		}
		printf("\n");
	}
	// i=n�϶� n��ŭ * ���
	int k = 1;
	for (;k <= n; k++)
	{
		printf("*");
	}
	printf("\n");
}

/*
ex) n=6
* : ������� (i,j) (1,1)
** : ó���� ���� ���
* *
*  *
*   * : ó���� ���� ���
****** : ������� (6,1)
*/