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
	printf("금액을 투입해 주세요: ");
	scanf("%d", &money);
	printf("몇게임 하시겠습니까?(한게임당 1000원): ");
	scanf("%d", &n);
	lottocount(money,n);
	return 0;
}
void lottocount(int money,int n) {
	if (n > 100) { printf("1인당 100,000원을 초과할수 없습니다."); }
	else if (money / 1000 > 0) {
		if (n > money / 1000) {
			printf("금액이 부족합니다.\n");
			printf("잔액은 %d원입니다.", money);
		}
		else {
			srand((unsigned)time(NULL));
			lotto(n);
			printf("잔액은 %d원입니다.", money - n * 1000);
		}
	}
	else {
		printf("금액이 부족합니다.\n");
		printf("잔액은 %d원입니다.", money);
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
		printf("맞춘 숫자 갯수는 %d개입니다.\n", check(lotto));
	}
	for (int i = 0; i < 45; i++) {
		printf("%d의 갯수는 %d개\n", i + 1, count1[i]);
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
	printf("맞은 번호:");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (pwinnum[j] == lotto[i]) {
				wincount++;
				printf("%d ",lotto[i]);
				break;
			}
		}
	}
	if (wincount == 0) { printf("없음"); }
	printf("\n");
	return wincount;
}