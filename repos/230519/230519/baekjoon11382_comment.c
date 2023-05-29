#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 1. 3개의 숫자 입력받기
	long long int a, b, c;

	scanf("%lld %lld %lld", &a, &b, &c);

	// 2. 결과값 즉시 출력
	printf("%lld", a + b + c);

}