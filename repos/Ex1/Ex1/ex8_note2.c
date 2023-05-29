#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++) // i가 n보다 같을 때 반복문 탈출
	{
		printf("*"); // j = 1일때, 미리 출력

		for (int j = 2; j <= i; j++)
		{
			if (j<i)
				printf(" ");
			else 
				printf("*");

		}
		printf("\n");
	}
	// i=n일때 n만큼 * 출력
	int k = 1;
	for (;k <= n; k++)
	{
		printf("*");
	}
	printf("\n");
}

/*
ex) n=6
* : 정상출력 (i,j) (1,1)
** : 처음과 끝만 출력
* *
*  *
*   * : 처음과 끝만 출력
****** : 정상출력 (6,1)
*/