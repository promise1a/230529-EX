#include <stdio.h>

int main() {
	int N, X;
	scanf("%d %d", &N, &X);
	// ���� N, X �Է¹���

	int i;
	int a; // 
	for (i = 0; i < N; i++) // i�� �迭 ���� ����
	{
		scanf("%d", &a);// ���� A�� �̷�� ���� N���� �Էµ�.

		if (X > a) // �Է¹��� a�� X���� ������,
		{
			printf("%d ", a); // ����ض�
		}
	}