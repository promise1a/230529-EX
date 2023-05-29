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

int calc(int A, int B) // 사칙연산을 다 함
{
	//int res, sum, sub, mul, div;

	int sum = 0;
	// 덧셈
	if (A > B)
	{
		int sum1(int A, int B);
		{
			int i;
			int sum = 0;
			for (i = B; A >= i; i++)
			{
				sum += i;
			}
			return sum;
		}
	}
	if (A < B)
	{
		int sum2(int A, int B);
		{
			int i;
			int sum = 0;

			for (i = A; B >= i; i++)
			{
				sum += i;
			}
			return sum;
		}
	}
	if (A == B)
	{
		int sum3(int A, int B);
		{
			int sum = 0;
			return sum;
		}
	}
	return sum;

	// 뺄셈

	// 곱셈

	// 나눗셈


	/*return res;*/
}


int main()
{
	// 입력 받기
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d", calc(a,b)); // %d%d%d 뺄 곱 나, - * / 추가해야

}