#include <stdio.h>

long long int mul(int n1, int n2) // n1부터 n2까지 곱하는 함수
{
	//n1>n2 // 5 1
	if (n1 > n2)
	{
		int i = n2;
		long long int res = 1;
		for (; i < n1; i++)
		{
			res *= i;
			printf("%lldx", i);
		}
		res *= i;
		printf("%lld", i);

		return res;
	}

	//n1<n2
	if (n1 < n2)
	{
		int i = n1;
		long long int res = 1;
		for (; i < n2; i++)
		{
			res *= i;
			printf("%lldx", i);
		}
		res *= i;
		printf("%lld", i);

		return res;
	}


	//n1=n2

	if (n1 == n2)
	{
		printf("%lldx%lld", n1, n2);
		long long int res = n1 * n2;
		return res;
	}

}



int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("\ntotal=%lld", mul(a, b));
}