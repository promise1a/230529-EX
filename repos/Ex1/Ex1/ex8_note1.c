#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= i; j++)
		{
				printf("*");
			
		}
		printf("\n");
	}
}

/*

7
*
**
***
****
*****
******
*******
[이렇게 콘솔창에 출력됨]


ex) n=6
* : 정상출력 (i,j) (1,1)
** : 처음과 끝만 출력
* *
*  *
*   * : 처음과 끝만 출력
****** : 정상출력 (6,1)
*/