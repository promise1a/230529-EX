#include <stdio.h>

int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf("%lf", &input);
		num++;
	}
	printf("평균: %f \n", total / (num - 1));
	return 0;
}
// 정수가 입력되면 실수로 바꾸어 계산해주세요...
// 자동형변환, 어떤 언어는 자동형변환이 없다..