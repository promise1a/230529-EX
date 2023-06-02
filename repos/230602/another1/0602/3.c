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
	printf("%d개 맞췄습니다. \n", count);
}

void rand_num(int n)
{

	int num[6];//랜덤 생성 로또번호
	


	srand((unsigned)time(NULL));

	for (int j = 0; j < n; j++) {
		int loto[6] = { 0 };//비교될 로또번호
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
			printf("%d가 %번 나왔습니다.", i + 1, arr[i]);
	}

}