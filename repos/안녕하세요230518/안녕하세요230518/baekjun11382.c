#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int A;
	long long int B;
	long long int C;
	scanf("%lld %lld %lld", &A, &B, &C);
	long long int result = A + B + C;
	printf("%lld\n", result);
}