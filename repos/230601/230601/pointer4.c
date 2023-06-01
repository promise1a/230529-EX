#include <stdio.h>
// 사칙연산 계산기 만들기



int main()
{ 
	// 수 2개 입력받기
	int a, b;
	scanf("%d %d\n", &a ,&b);

	// 사칙연산 수행하기
	int Add;
	Add = a + b;
	printf("%d + %d 는 %d 입니다.\n", &a, &b, &Add);

	int Sub;
	Add = a - b;
	printf("%d - %d 는 %d 입니다.\n", &a, &b, &Sub);

	int Mul;
	Add = a * b;
	printf("%d x %d 는 %d 입니다.\n", &a, &b, &Mul);

	double Div;
	Add = (double)a / b;
	printf("%d + %d 는 %lf 입니다.\n", &a, &b, &Div);

	return 0;

}