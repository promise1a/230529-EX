#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//1. 입력받은 돈만큼 로또번호 출력하기
//2. 번호 통계
//3. 지난주 번호와 비교하여 맞은 숫자 확인 {1, 10, 18, 22, 28, 31}

void rand_num(int n);
void sort(int* snum, int size);
int arr[45] = { 0 };

int main() {
	int money, N;
	printf("금액을 투입해주세요. \n");
	scanf_s("%d", &money);
	if (money < 1000) {
		printf("금액이 부족합니다. \n");
		return 0;
	}
	N = money / 1000;
	printf("당첨 번호는 {1, 10, 18, 22, 28, 31} 입니다.\n");
	rand_num(N);
	printf("거스름돈은 %d원 입니다. \n\n", money - (1000*N));
	
	printf("*번호 통계(2회 이상) \n");
	for (int i = 0; i < 45; i++) {
		if (arr[i] > 1) {
			printf("%d : %d회 \n", i + 1, arr[i]);
		}
	}
}

void rand_num(int n)
{

	int num[6];//랜덤 생성 로또번호
	int loto[6] = { 0 };//비교될 로또번호
	int count = 0;
	int arr1[6] = { 1, 10, 18, 22, 28, 31 };

	srand((unsigned)time(NULL));

	for (int j = 0; j < n; j++) {

		for (int i = 0; i <= 5; i++) {
			num[i] = 1 + (rand() % 45);//1~45 랜덤번호 생성
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])//같은 줄 로또번호에 같은숫자가 있는지 비교
			{
				loto[i] = num[i];//같은숫자가 없으면 대입
			}
			else
				i--;//같은 숫자 생성시 다시진행
		}
		sort(loto, 6);//정렬함수 호출
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
		printf(": %d개 일치 \n", count);
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