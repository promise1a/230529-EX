//6.[main������ �ۼ�]
//�������� ����(n)�� �Է¹ް�, n����ŭ ������ �����͸� �Է¹޴´�.
//�� �����͵��� �ִ밪, �ּҰ�, �հ�, ����� ����Ͽ���(�迭 �̿�X)

#include <stdio.h>

int main()
{

	int number, n; // n�� �Է¹��� �������� ����
	scanf("%d", &n); // n�� ���� �ϳ��� �Է¹���

	int max, min, sum, avg;

	int num;
	scanf("%d", &num); // n�� ���� �ϳ��� �Է¹޴´�(n=1)

	max = num;
	min = num;
	sum = num;
	avg = num;

	for (int i=2;i<=n;i++)
		// i�� 2�̰�, �ݺ����� ���� �� i++; i�� n���� ũ�� Ż��
		// i�� n�� �� �� ���� i�� ���� �Է°� �ϳ��� �޴´�.
	{
		scanf("%d", &i); // i�� ���� �ϳ��� �Է¹޴´�.
		if (num <i)
		{
			max = i;
		}
		else if (num >= i)
		{
			min = num;
		}
		// �ִ밪, �ּҰ� ��

		sum = num + i;
		// �հ� ��

		avg = (double)(sum) / n;
		// ��� ��
	}
	// for �ݺ��� ��
	printf("�ִ밪�� %d�Դϴ�.\n", max);
	printf("�ּҰ��� %d�Դϴ�.\n", min);
	printf("�հ�� %d�Դϴ�.\n", sum);
	printf("����� %d�Դϴ�.\n", avg);

}

/*

[�ܼ�â]

8
*
**
***
****
*****
******
*******
********


*/