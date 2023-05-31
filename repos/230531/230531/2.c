#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main(void)
{
	int n1, n2, n3, n4;

	printf("숫자 2개를 입력해주세요.");
	scanf("%d %d", &n1, &n2);

	int result;
	result = add(n1, n2);
	printf("덧셈결과1: %d \n", result);


	printf("숫자 2개를 입력해주세요.");
	scanf("%d %d", &n3, &n4);

	result = add(n3, n4);
	printf("덧셈결과2: %d \n", result);
	return 0;

}