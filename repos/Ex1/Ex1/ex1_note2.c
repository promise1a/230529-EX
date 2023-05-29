#include <stdio.h>

int sum1(int n1,int n2)
{

for (; n2 > n1; n2++)

{
	int sum = 0;
	sum += n2;
	int res;
	res = sum;
}
	return
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// a,b 입력받기

	if (a > b) { // sum1()로 보내기
		printf("%d부터 %d까지의 합은 %d입니다.\n", b, a, sum1(a, b));
		// sum(a,b,c)함수에서 반환된 값을 정수형으로 출력하기.
	}
	else if (a < b) { // sum2()로 보내기
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sum2(a, b));
		// sum(a,b,c)함수에서 반환된 값을 정수형으로 출력하기.
	}
	else // ( a = b ) , sum3()로 보내기
		printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sum3(a, b));
	// sum(a,b,c)함수에서 반환된 값을 정수형으로 출력하기.
}