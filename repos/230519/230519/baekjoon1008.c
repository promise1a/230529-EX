#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int A, B;
//
//	scanf("%d%d", &A, &B);
//
//	double result;
//	result = A / B;
//
//	printf("%f", result);
//
//	// 내가 쓴 답 막 수정했음
//}


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.9f", (double)a / b);
	return 0;
}

