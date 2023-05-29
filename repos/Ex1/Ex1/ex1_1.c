//1.[함수 구현]
//a부터 b까지의 합을 구하되, c의 배수 부분은 제외하고 합을 구할 것.
// main()에서 변수 a와 b와 c의 값을 입력받고,
// 위 함수 실행한 결과값을 main에서 반환하게끔 하기
//(못하겠다면 그냥 main에 먼저 짜보기)

#include <stdio.h>


int sum1(n1,n2) // a>b , n1>n2
{
	for(;n2>n1;n2++)
	{
		int sum;
		sum+= n2;

	}


	//int num;
	//int res = 0;
	//while (n1 = n2)
	//{
	//	num = n2;
	//	res += num;
	//	n2++;
	//}
	//return res;
}


int sum2(n1,n2) // a<b , n1<n2
{
	int num;
	int res = 0;
	while (n1 = n2)
	{
		num = n1;
		res += num;
		n1++;
	}

	return res;
}


int sum3(n1,n2) // a=b, n1=n2
{
		return 0;
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