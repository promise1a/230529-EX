/*
1.  [함수 구현]
a부터 b까지의 합을 구하되,
c의 배수 부분은 제외하고 합을 구할 것. << 나중에 하자
main()에서 변수 a와 b와 c의 값을 입력받고,
위 함수 실행한 결과값을 main에서 반환하게끔 하기
(못하겠다면 그냥 main에 먼저 짜보기)

 c의 배수 부분 제외하고 합 << 구성해보자

 c에서는 아무것도 입력 안하고 싶으면 안 쓰면 됨!!

 이제 함수로 구현해서 당겨서 쓰게 유도하자.


*/


#include <stdio.h>


int sub1(int A, int B, int C)// (a>b)
{
int i;
int sum = 0;

	for (i = B; A >= i; i++)
	{
		if (i % C != 0) // i가 c로 나누었을때 안 떨어진다 = c의 배수가 아니다
		{
			sum += i; // 더해야함
		}
		// i가 c로 나누었을때 안 떨어진다 = c의 배수가 아니다
		// 아무것도 안함}

	}
	return sum; // A부터 B까지의 합(C의 배수를 포함하지 않은)을 return함
}

int sub2(int A, int B, int C)	//(a<b)
{
	int i;
	int sum = 0;

	for (i = A; B >= i; i++)
	{
		if (i % C != 0) // i가 c로 나누었을때 안 떨어진다 = c의 배수가 아니다
		{
			sum += i; // 더해야함
		}
		// i가 c로 나누었을때 안 떨어진다 = c의 배수가 아니다
		// 아무것도 안함}
	}
	return sum;// A부터 B까지의 합(C의 배수를 포함하지 않은)을 return함
}

int sub3(int A, int B, int C)	//(a==b)
{
	int sum = 0;
	return sum;// A부터 B까지의 합(C의 배수를 포함하지 않은)을 return함
}




int main()
{
	int a, b, c, i;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);//a와 b와 c에 하나씩 입력 받음


	if (a > b)
	{
		printf("%d부터 %d까지의 합은 %d입니다.\n", b, a, sub1(a, b, c));
	}
	if (a < b)
	{
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sub2(a, b, c));
	}
	if (a == b)
	{
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sub3(a, b, c));
	}

}
