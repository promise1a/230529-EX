#include <stdio.h>

int main()
{

	int n; // n�� �Է¹��� �������� ����
	scanf("%d", &n); // n�� ���� �ϳ��� �Է¹���

	int max, min, sum;
	double avg;

	int num;
	scanf("%d", &num); // n�� ���� �ϳ��� �Է¹޴´�(n=1)

	max = num; // �ʱ� ����
	min = num;
	sum = num;
	avg = num;

	int j = 2; // j�� �Է¹���

	for (int i = 2; i <= n; i++)
		// i�� 2�̰�, �ݺ����� ���� �� i++; i�� n���� ũ�� Ż��
		// i�� n�� �� �� ���� j�� ���� �Է°� �ϳ��� �޴´�.
	{
		scanf("%d", &j); // j�� ���� �ϳ��� �Է¹޴´�.

		if (max < j)
		{
			max = j;
		}
		else if (max >= j)
		{
		}

		if (min < j)
		{
		}
		else if (min >= j)
		{
			min = j;
		}
		// �ִ밪, �ּҰ� ��

		sum += j;
		// �հ� ��

		avg = (double)(sum) / i;

		// ��� ��
	}
	// for �ݺ��� ��

	printf("\n�� �Է¹��� �������� ������ %d�� �̸�,\n", n);
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	printf("�ּҰ��� %d�Դϴ�.\n", min);
	printf("�հ�� %d�Դϴ�.\n", sum);
	printf("����� %.4f�Դϴ�.\n", avg);

}