#include <stdio.h>

int main(void)
{
	// 변수 미리 선언
	int a, b;
	// 0. 10진 정수 두개 입력 받기
	scanf("%d %d", &a, &b);

	while (a != 0 && b != 0)
	// 4. 정수 0이 입력되면 프로그램은 종료됩니다.
	//	(while 사용)
	// 입력 받은 값 중 하나라도 0이 포함되어 있으면
	// 반복문 탈출함
	{

		// 1. 4칙 연산 결과를 내어주기
		//a+b
		printf("a + b 는 %d\n", a+b);
		//a-b
		printf("a - b 는 %d\n", a-b);
		//a*b
		printf("a * b 는 %d\n", a*b);
		//a/b
		printf("a / b 는 %.3f\n", (double)a/b);


		// 2. 첫 번째 입력한 값이 짝수이면,
		//		입력한 값의 세제곱을 구해라.
		if (a%2== 0) { // a가 짝수이면
			printf("%d의 세제곱은 %d\n", a, a*a*a);
		}
		// 3. 두 번째 입력한 값이 홀수이면,
		//		제곱값을 구해라.
		if (b%2 == 1) { // b가 홀수이면
			printf("%d의 제곱은 %d\n", b, b*b);
		}
		break; // while 반복문 탈출
	}
	// 다시 입력받는곳으로 가야함, 반복문 안에 포함
}

// 나중에 왜 안되는지..