#include <stdio.h>

/*int main() {

	int num1 = 0;
	int num2 = 0;
	double result = 0.0;
	char inp ;
	int	res = 1;
	int i;
	do
	{
		printf("첫번째 정수 입력 : ");
		scanf_s("%d", &num1);
		printf("첫번째 정수 입력 : ");
		scanf_s("%d", &num2);

		res = num1 + num2;
		printf("더한 값은 %d\n", res);
		res = num1 - num2;
		printf("뺀값은 %d\n", res);
		res = num1 * num2;
		printf("곱한 값은 %d\n", res);
		result = (double)num1 / num2;
		printf("나눈 값은 %f\n", result);
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


}*/
int main() {
	int dan = 0;
	int num = 0;
	int count = 0; // do while의 초기식 :: count로 돌아가니까
	char inp;
	do
	{
		printf("단을 입력하세요 : ");
		scanf_s("%d", &dan);
		if (dan <= 9)
		{
			for (num = 1; num < 10; num++)
				printf("%d X %d = %d\n", dan, num, dan * num);
			count++; // 반복문이 얼마나 작동했는지 카운트, 증감식
		}
		else
			printf("다시 입력해주세요!!\n"); // 카운트에 세어지지 않음

		printf("종료하시겠습니까? ");
		scanf_s(" %c", &inp, 1);
		if (inp == 'q')
			break;
	} while (count < 11); // 조건식
	// 0부터 출발 11 round, <=10 보다 <11을 쓰도록 하자
	// = 연산을 한 번 더 하는거로 작용
	// 0부터 시작하면 <,>을 사용 // while 문에서도 <,>을 사용 <=,>= ㄴㄴ
	// 
}




