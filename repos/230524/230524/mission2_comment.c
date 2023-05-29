#include <stdio.h>

int main() {

	int num1 = 0;
	int num2 = 0;
	double result = 0.0;
	char inp;
	int	res = 1;
	int i;
	do
	{
		printf("첫번째 정수 입력 : ");
		scanf_s("%d", &num1);
		printf("두번째 정수 입력 : ");
		scanf_s("%d", &num2);

		res = num1 + num2;
		printf("더한 값은 %d\n", res);
		res = num1 - num2;
		printf("뺀값은 %d\n", res);
		res = num1 * num2;
		printf("곱한 값은 %d\n", res);
		result = (double)num1 / num2;
		printf


		("나눈 값은 %f\n", result);
		res = 1;

		if (num1 % 2 == 0)
		{
			for (i = 0; i < 3; i++)
				res *= num1;
			printf("세제곱 값은 %d\n", res);
			res = 1;
		}
		if (num2 % 2 != 0)
		{
			for (i = 0; i < 2; i++)
				res *= num2;

			printf("제곱 값은 %d\n", res);
		}

		printf("종료하시겠습니까? ('q' to quit or contiue to any key): ");
		scanf_s(" %c", &inp, 1);

	} while (inp != 'q');

	return 0;
}

	/*
	{
	int n, num = 0;
	//j는 짝수 , i는 홀수 , n 제곱의 수
	int total = 1;
	while (1) {
		printf("숫자 입력\n");
		scanf_s(" %d", &num);
		printf("%d", num);
		if (num == 0)
		{
			printf("프로그램을 종료합니다.");
			printf("%d", num);
			break;
		}

		for (n = 1, total = 1; n < 11; n++) {
			total = total * num;
			printf("%d의 %d제곱은 %d\n", num, n, total);
		}
	}
}

*/


