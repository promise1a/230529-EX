//5.[함수 구현]
//a부터 b까지 곱하는 함수를 만들고 1x2x......xb = 결과 출력하고 반환값 주는 함수 만들기
//(예시)
//1x2x3x4x5[함수에서 출력]
//total = 120[main에서 출력]

#include <stdio.h>

int sum1() //a<b일때
{
	int n1, n2;
	int res = 1;
	while (n1 > n2)
	{
		res *= n2; // n2 * n2+1 * n2+2 * ... * n1-1 * n1
		printf(res, n2);
		n2++;
	}

}

int sum2() // a>b일때
{
	int n1, n2;
	while (n1 < n2)

		n1++;

}

int sum3() // a=b
{
	int n1, n2;
	return n1 * n2;

}



int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// a, b 입력받음

	if (a > b) // b*(b+1)*...*(a-1)*a // sum1() 수행하러
				// b++;
	{

	}
	else if (a < b) // a*(a+1)*...*(b-1)*b // sum2() 수행하러
				// a++;
	{

	}
	else;//(a=b), sum3() 수행하러
	{

	}


}


/*

int main(


*/