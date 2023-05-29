//두 정수 A와 B를 입력받은 다음,
//A+B를 출력하는 프로그램을 작성하시오.

//첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

//첫째 줄에 A+B를 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;

	scanf("%d %d", &A, &B);

	int result = A + B;

	printf("%d", result);


}