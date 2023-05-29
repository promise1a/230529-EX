/*
4.[함수 구현]
매개변수를 이용해서 a부터 b까지 사칙연산 수행하고
 그 결과를 출력만 해주는 함수 만들기
(매개변수는 + 와 * 혹은 x, X이렇게 4개만 허용함)
ex) calc(1, 10, '+')  -> 1부터 10까지 더함
ex) calc(1, 10, '*')  -> 1부터 10까지 곱함
ex) calc(1, 10, 'x')  -> 1부터 10까지 곱함
ex) calc(1, 10, '-')->예외메시지

main으로만 작성 먼저 해보자
*/
#include <stdio.h>

double calc(int A, int B, char C) // 사칙연산 구분 :: C값으로
{
	int add = 0;
	int sub;
	int mul = 1;
	double div = 1.000000;

	if (C == '+') // 덧셈
	{
		printf("덧셈진입\n");
		{
			if (A < B)
			{
				for (int i = A; i <= B; i++)
				{
					add += i;
				}
			}

			if (A >= B)
			{
				for (int i = B; i <= A; i++)
				{
					add += i;
				}
			}

		}
		return add; // add의 값을 반환한다.
	}


	if (C == '*') // 뺄셈
	{
		printf("뺄셈진입\n");
		{
			sub = A;
			if (A < B)
			{
				for (int i = A + 1; i <= B; i++)
				{
					sub -= i;
				}
			}
			if (A >= B)
			{
				for (int i = A - 1; i >= B; i--)
				{
					sub -= i;
				}
			}
			return sub; // sub의 값을 반환한다.


		}
	}
	if (C == 'x') // 곱셈
	{
		printf("곱셈진입\n");
		{
			if (A < B)
			{
				for (int i = A; i <= B; i++)
				{
					mul *= i;
				}
			}
			if (A >= B)
			{
				for (int i = B; i <= A; i++)
				{
					mul *= i;
				}
			}

			return mul; // mul의 값을 반환한다.
		}
	}
	if (C == 'X') // 나눗셈
	{	printf("나눗셈진입\n");
		{
		div = A;
		if (A < B)
		{
			for (int i = A+1; i <= B; i++)
			{
				div = div / (double)i;
			}
		}
		if (A >= B)
		{
			for (int i = A-1; i >= B; i--)
			{
				div = div / (double)i;
			}
		}

		return div; // div의 값을 반환한다.
		}
	}
}

int main()
{
	// 입력 받기
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);

	printf("연산 결과는 %.9lf입니다.\n", calc(a, b, c)); // 

}