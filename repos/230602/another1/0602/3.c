#include <stdio.h>

int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 2,3,4,5,6,7 };
	int count=0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
	}
}

int match(int arr[]) {
	int arr[6]= { 1, 10, 18, 22, 28, 31 };
	int arr2[6];
	int count = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr2[i] == arr[j]) {
				printf("%d ", arr[j]);
				count++;
			}
		}
	}
	printf("%d�� ������ϴ�. \n", count);
}

void rand_num(int n)
{

	int num[6];//���� ���� �ζǹ�ȣ
	


	srand((unsigned)time(NULL));

	for (int j = 0; j < n; j++) {
		int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ
		for (int i = 0; i <= 5; i++) {
			num[i] = 1 + (rand() % 45);//1~45 ������ȣ ����
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])//���� �� �ζǹ�ȣ�� �������ڰ� �ִ��� ��
			{
				loto[i] = num[i];//�������ڰ� ������ ����
			}
			else
				i--;//���� ���� ������ �ٽ�����
		}
		sort(loto, 6);//�����Լ� ȣ��
		printf("%2d>> ", j + 1);
		for (int i = 0; i < 6; i++)
			printf("%2d ", loto[i]);
		printf("\n");
	}
	for (int i = 0; i < 6; i++) {
		loto[i] = 0;
	}
	return;
}

int func(int num) {

	int arr[45] = { 0 };
	for (int i = 0; i < 45; i++) {
		if (num == i) {
			arr[i]++;
		}
	}
	for (int i = 0; i < 45; i++) {
		if (arr[i] > 1)
			printf("%d�� %�� ���Խ��ϴ�.", i + 1, arr[i]);
	}

}