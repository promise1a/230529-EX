#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//1. �Է¹��� ����ŭ �ζǹ�ȣ ����ϱ�
//2. ��ȣ ���
//3. ������ ��ȣ�� ���Ͽ� ���� ���� Ȯ�� {1, 10, 18, 22, 28, 31}

void rand_num(int n);
void sort(int* snum, int size);
int arr[45] = { 0 };

int main() {
	int money, N;
	printf("�ݾ��� �������ּ���. \n");
	scanf_s("%d", &money);
	if (money < 1000) {
		printf("�ݾ��� �����մϴ�. \n");
		return 0;
	}
	N = money / 1000;
	printf("��÷ ��ȣ�� {1, 10, 18, 22, 28, 31} �Դϴ�.\n");
	rand_num(N);
	printf("�Ž������� %d�� �Դϴ�. \n\n", money - (1000*N));
	
	printf("*��ȣ ���(2ȸ �̻�) \n");
	for (int i = 0; i < 45; i++) {
		if (arr[i] > 1) {
			printf("%d : %dȸ \n", i + 1, arr[i]);
		}
	}
}

void rand_num(int n)
{

	int num[6];//���� ���� �ζǹ�ȣ
	int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ
	int count = 0;
	int arr1[6] = { 1, 10, 18, 22, 28, 31 };

	srand((unsigned)time(NULL));

	for (int j = 0; j < n; j++) {

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
		for (int i = 0; i < 6; i++) {
			printf("%2d ", loto[i]);
		}
		printf(">>>>>> ");
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (loto[i] == arr1[j]) {
					printf("%d ", arr1[j]);
					count++;
				}
			}
		}
		printf(": %d�� ��ġ \n", count);
		count = 0;
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 45; j++) {
				if (loto[i] == j + 1)
					arr[j]++;
			}
		}
		for (int i = 0; i < 6; i++) {
			loto[i] = 0;
		}
	}
	return;
}

void sort(int snum[], int size) {
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++) {
			if (snum[i] < snum[j]) {
				temp = snum[j];
				snum[j] = snum[i];
				snum[i] = temp;
			}
		}
	}
}

/*int match(int num) {
	int n = 0;
	int arr[6] = { 1, 10, 18, 22, 28, 31 };
		for (int j = 0; j < 6; j++) {
			if (num == arr[j]) {
				printf("%d ", num);
				n++;
			}
		}
	return n;
}*/

//int func(int num) {
//	
//	for (int i = 0; i < 45; i++) {
//		if (num == i+1) 
//			arr[i]++;
//	}
//}