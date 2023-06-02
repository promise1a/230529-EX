#include<stdio.h>
# include <stdlib.h>
void lottocount(int money, int n);
void lotto(int n);
void sort(int* snum, int size);
void count(int lotto[]);
int check(int lotto[]);
int count1[45] = { 0 };
int main(void) {
	int money;
	int n;
	printf("�ݾ��� ������ �ּ���: ");
	scanf("%d", &money);
	printf("����� �Ͻðڽ��ϱ�?(�Ѱ��Ӵ� 1000��): ");
	scanf("%d", &n);
	lottocount(money,n);
	return 0;
}
void lottocount(int money,int n) {
	if (n > 100) { printf("1�δ� 100,000���� �ʰ��Ҽ� �����ϴ�."); }
	else if (money / 1000 > 0) {
		if (n > money / 1000) {
			printf("�ݾ��� �����մϴ�.\n");
			printf("�ܾ��� %d���Դϴ�.", money);
		}
		else {
			srand((unsigned)time(NULL));
			lotto(n);
			printf("�ܾ��� %d���Դϴ�.", money - n * 1000);
		}
	}
	else {
		printf("�ݾ��� �����մϴ�.\n");
		printf("�ܾ��� %d���Դϴ�.", money);
	}
}
void lotto(int n) {
	int num[6];
	int lotto[6] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			num[j] = 1 + (rand() % 45);
			for (int k = 0; k < j; k++) {
				if (num[j] == lotto[k]) {
					j--;
				}
			}
			lotto[j] = num[j];
		}
		sort(lotto, 6);
		count(lotto);
		printf("%d>>", i + 1);
		for (int i = 0; i < 6; i++)
			printf("%d ", lotto[i]);
		printf("\n");
		printf("���� ���� ������ %d���Դϴ�.\n", check(lotto));
	}
	for (int i = 0; i < 45; i++) {
		printf("%d�� ������ %d��\n", i + 1, count1[i]);
	}
	for (int i = 0; i < 6; i++) {
		lotto[i] = 0;
	}
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
void count(int lotto[]) {
	for (int i = 0; i < 6; i++) {
		count1[lotto[i]-1]++;
	}
}
int check(int lotto[]) {
	int winnum[6] = { 1,10,18,22,28,31 };
	int* pwinnum = &winnum[0];
	int wincount = 0;
	printf("���� ��ȣ:");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (pwinnum[j] == lotto[i]) {
				wincount++;
				printf("%d ",lotto[i]);
				break;
			}
		}
	}
	if (wincount == 0) { printf("����"); }
	printf("\n");
	return wincount;
}