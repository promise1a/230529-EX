#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	// n이 3이라 가정,
	// i=1 :: j=1,2,3
	// i=2 :: j=1,2,3
	// i=3 :: j=1,2,3

	for (int i = 1;i<=n; i++){
		for (int j = 1; j <= i; j++) {

			printf("*");
		}
		printf("\n");
	}
}