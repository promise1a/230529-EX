// 값 입력받고, 입력된 값이 짝수이냐 아니냐 함수로 구현

#include <stdio.h>

char NumberCompare(int n)
{
	if (n % 2 == 0)
		return '짝';
	else
		return '홀';
}

int main(void)
{
	int num;
	scanf("%d", num);
	printf("%d는 %c수입니다.", num, NumberCompare(num));

	return 0;
}
