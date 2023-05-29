
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 백준 10869 사칙연산

	// 1. a와 b 입력받기 :: scanf()
	// 테스트 데이터 범위 :: 1~10,000
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. 결과 출력 ( +, -, *, /, % )
	// 2-1) 즉시 출력
	/*printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);*/

	// 2-2) 변수에 결과값 저장하여 출력
	int result = a + b;
	printf("%d\n", result);
	result = a - b;
	printf("%d\n", result);
	result = a * b;
	printf("%d\n", result);
	result = a / b;
	printf("%d\n", result);
	result = a % b;
	printf("%d\n", result);


}