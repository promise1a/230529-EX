/*
4.[�Լ� ����]
�Ű������� �̿��ؼ� a���� b���� ��Ģ���� �����ϰ�
 �� ����� ��¸� ���ִ� �Լ� �����
(�Ű������� + �� * Ȥ�� x, X�̷��� 4���� �����)
ex) calc(1, 10, '+')  -> 1���� 10���� ����
ex) calc(1, 10, '*')  -> 1���� 10���� ����
ex) calc(1, 10, 'x')  -> 1���� 10���� ����
ex) calc(1, 10, '-')->���ܸ޽���

main���θ� �ۼ� ���� �غ���
*/



#include <stdio.h>

int calc(int A, int B) // ��Ģ������ �� ��
{
	//int res, sum, sub, mul, div;

	int sum = 0;
	// ����
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

	// ����

	// ����

	// ������


	/*return res;*/
}


int main()
{
	// �Է� �ޱ�
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d", calc(a,b)); // %d%d%d �� �� ��, - * / �߰��ؾ�

}