//5.[�Լ� ����]
//a���� b���� ���ϴ� �Լ��� ����� 1x2x......xb = ��� 
// ����ϰ� ��ȯ�� �ִ� �Լ� �����
//(����)
//1x2x3x4x5[�Լ����� ���]
//total = 120[main���� ���]

#include <stdio.h>

int sum1(int n1,int n2) //a<b�϶� // 1 4
{
	int res = 1;
	int i = n1;
	while (i < n2)
	{
		res *= i; // n2 * n2+1 * n2+2 * ... * n1-1 * n1
		printf("%dx", i);
		i++;
	}
	res *= i;
	printf("%d", i);
	return res;
}

int sum2(int n1, int n2) // a>b�϶�
{
	int res = 1;
	int i = n2;
	while (i < n1)
	{
		res *= i; // n2 * n2+1 * n2+2 * ... * n1-1 * n1
		printf("%dx", i);
		i++;
	}
	res *= i;
	printf("%d", i);
	return res;
}

int sum3(int n1, int n2) // a=b
{
	printf("%dx%d\n", &n1, &n2);
	return n1 * n2;
	
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// a, b �Է¹���

	if (a > b) // b*(b+1)*...*(a-1)*a // sum1() �����Ϸ�
		// b++;
	{
		printf("total=%d", sum1(a,b));
	}
	if (a < b) // a*(a+1)*...*(b-1)*b // sum2() �����Ϸ�
		// a++;
	{
		printf("total=%d", sum2(a,b));
	}
	if ( a == b) //(a=b), sum3() �����Ϸ�
	{
		printf("total=%d", sum3(a,b));
	}


}