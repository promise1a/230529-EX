/*
1.  [함수 구현]
a부터 b까지의 합을 구하되,
c의 배수 부분은 제외하고 합을 구할 것. << 나중에 하자
main()에서 변수 a와 b와 c의 값을 입력받고,
위 함수 실행한 결과값을 main에서 반환하게끔 하기
(못하겠다면 그냥 main에 먼저 짜보기)
*/


// a부터 b까지 의 합


#include <stdio.h>

int main() {
	int a, b, i;
	int sum = 0;

	scanf("%d %d", &a, &b);//a와 b에 하나씩 입력 받음


	if (a > b)
	{
		for(i=b;a>=i;i++)
		{
			sum += i;
		}
		printf("%d부터 %d까지의 합은 %d입니다.\n", b, a, sum);
	}
	if (a < b)
	{
		for (i=a; b >= i; i++)
		{
			sum += i;
		}
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sum);
	}
	if (a == b)
	{
		sum = 0;
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sum);
	}

}
