#include <stdio.h>

double sub1(int a, int b, int c)
{
	double avg;
	int sum;
	sum = a + b + c;
	avg = (double)sum / 3;
	return avg;
}



int main()
{
	//������ ���� �����ؼ� �Է¹ޱ�
	int A = 1;
	int B = 1;
	int C = 1;
	double best = 0;

	for (;;)
	{
		scanf("%d %d %d", &A, &B, &C);
		// 0 0 0 �Է¹޾��� �� �ݺ��� ���� ����
		if (A == 0, B == 0, C == 0)
			break;
		printf("����� %lf�Դϴ�.\n", sub1(A, B, C));

		if (sub1(A, B, C) > best)
			best = sub1(A, B, C);
		printf("������� best�� %lf�Դϴ�.\n", best);
		// best�� ������ �ȵȴ�..
	}
	printf("������ �����մϴ�.\n");
	printf("��� �ִ밪�� %lf�Դϴ�.\n", best);
}