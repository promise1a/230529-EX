
#include <stdio.h>

double calc(int A, int B, char C) // ��Ģ���� ���� :: C������
{
	int add = 0;
	int sub;
	int mul = 1;
	double div = 1.000000;

	if (C == '+') // ����
	{
		//printf("��������\n");
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
		return add; // add�� ���� ��ȯ�Ѵ�.
	}


	if (C == '*') // ����
	{
		//printf("��������\n");
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
			return sub; // sub�� ���� ��ȯ�Ѵ�.


		}
	}
	if (C == 'x') // ����
	{
		//printf("��������\n");
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

			return mul; // mul�� ���� ��ȯ�Ѵ�.
		}
	}
	if (C == 'X') // ������
	{
		//printf("����������\n");
		{
			div = A;
			if (A < B)
			{
				for (int i = A + 1; i <= B; i++)
				{
					div = div / (double)i;
				}
			}
			if (A >= B)
			{
				for (int i = A - 1; i >= B; i--)
				{
					div = div / (double)i;
				}
			}

			return div; // div�� ���� ��ȯ�Ѵ�.
		}
	}
}

int main()
{
	// �Է� �ޱ�
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);

	printf("���� ����� %.9lf�Դϴ�.\n", calc(a, b, c)); // 

}