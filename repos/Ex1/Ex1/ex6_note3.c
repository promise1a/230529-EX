//6.[main������ �ۼ�]
//�������� ����(n)�� �Է¹ް�, n����ŭ ������ �����͸� �Է¹޴´�.
//�� �����͵��� �ִ밪, �ּҰ�, �հ�, ����� ����Ͽ���(�迭 �̿�X)

#include <stdio.h>

int main()
{

	int n; // n�� �Է¹��� �������� ����
	scanf("%d", &n); // n�� ���� �ϳ��� �Է¹���
	printf("�Է¹��� ������ ������ %d�� �Դϴ�.\n", n);

	int max, min, sum;
	double avg;

	int num;
	scanf("%d", &num); // n�� ���� �ϳ��� �Է¹޴´�(n=1)
	printf("num�� %d���� �ԷµǾ����ϴ�.\n", num);

	max = num;
	printf("�ִ밪�� %d�Դϴ�.\n", num);
	min = num;
	printf("�ּҰ��� %d�Դϴ�.\n", num);
	sum = num;
	printf("�հ�� %d�Դϴ�.\n", num);
	avg = num;
	printf("����� %d�Դϴ�.\n", num);

	int j = 2; // j�� �Է¹���

	for (int i = 2; i <= n; i++)
		// i�� 2�̰�, �ݺ����� ���� �� i++; i�� n���� ũ�� Ż��
		// i�� n�� �� �� ���� j�� ���� �Է°� �ϳ��� �޴´�.
	{
		scanf("%d", &j); // j�� ���� �ϳ��� �Է¹޴´�.
		printf("%d�� �ԷµǾ����ϴ�.\n", j); // ������
		if (max < j)
		{
			max = j;
			printf("�ִ밪�� %d�Դϴ�.\n", j);
		}
		else if (max >= j)
		{
			printf("�ִ밪�� %d�Դϴ�.\n", max);
		}

		if (min<j)
		{
			printf("�ּҰ��� %d�Դϴ�.\n", min);
		}
		else if (min>=j)
		{
			min = j;
			printf("�ּҰ��� %d�Դϴ�.\n", j);
		}
		// �ִ밪, �ּҰ� ��

		sum += j;
		printf("�հ�� %d�Դϴ�.\n", sum);
		// �հ� ��

		avg = (double)(sum) / i;
		printf("����� %.4f�Դϴ�.\n", avg);
		// ��� ��
	}
	// for �ݺ��� ��

	printf("\n�� �Է¹��� �������� ������ %d�� �̸�,\n", n);
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	printf("�ּҰ��� %d�Դϴ�.\n", min);
	printf("�հ�� %d�Դϴ�.\n", sum);
	printf("����� %.4f�Դϴ�.\n", avg);

}