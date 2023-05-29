#include <stdio.h>

int main(void)
{
	while (1)
		// 무한반복
	{

		// 변수 미리 선언
		int a, b;
		// 0. 10진 정수 두개 입력 받기
		scanf("%d %d", &a, &b);

		if (a == 0 || b == 0) {
			return 0;
		}
		// 4. 정수 0이 입력되면 프로그램은 종료됩니다.
	//	(while 사용)
	// a나 b 둘 중 하나라도 0으로 입력받으면, 반복문 종료


	// 1. 4칙 연산 결과를 내어주기
	//a+b
		printf("\na + b 는 %d\n", a + b);
		//a-b
		printf("a - b 는 %d\n", a - b);
		//a*b
		printf("a * b 는 %d\n", a * b);
		//a/b
		printf("a / b 는 %.10f\n", (double)a / b);


		// 2. 첫 번째 입력한 값이 짝수이면,
		//		입력한 값의 세제곱을 구해라.
		if (a % 2 == 0) { // a가 짝수이면
			printf("%d의 세제곱은 %d\n", a, a * a * a);
		}
		// 3. 두 번째 입력한 값이 홀수이면,
		//		제곱값을 구해라.
		if (b % 2 == 1) { // b가 홀수이면
			printf("%d의 제곱은 %d\n", b, b * b);
		}

	}
}