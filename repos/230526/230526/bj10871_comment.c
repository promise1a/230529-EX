#include <stdio.h>

int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	// n:�����Ǳ��� x:������

	// �Է� ����, ���� ����
	int arr[10000];
	// �ִ��� ������ �����ϸ�,
	// �� ������ ���ؼ��� ������ ������ �� �ִ�.
	for (int i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			printf("%d", arr[i]);
		}
	}

}