#include <stdio.h>

int main()
{
	int arr1[10001]; // ���� ũ�� �ִ� 10000 ũ�⸸ŭ
	int n; // n:: ������ ���� ����

	scanf("%d", &n); // n �Է¹���
	printf("������ ũ�� %d�� �Է¹���\n", n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]); // i�� n�� �ٴٸ�������(n-1) �Է¹���
		printf("%d�� �Է¹���\n", arr1[i]);
	}
	// �ϴ� �Է��� �� �޾���


	printf("������������ �����մϴ�.\n");
	// ������������ �����ϴ� ��ɹ�; ��������
	// �������� �������� �������� ��� ����...
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr1[i]);

	}
}