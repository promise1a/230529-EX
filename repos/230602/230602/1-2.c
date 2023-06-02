# include <stdio.h>
# include <stdlib.h>
# include <time.h>

//로또 번호생성 Sample_Code
void rand_num2(int n1);
void rand_num(int n);
void sort(int* snum, int size);

//메인함수
int main(void)
{
	int n = 1;

	printf("얼마를 지불하시겠습니까? : ");
	scanf_s("%d", &n);

	rand_num2(n); //지난회차 번호 1회 생성/출력

	rand_num(n); //번호생성 출력 함수호출

	return 0;
}
//지난 주 번호 1회분 생성/출력 :: rand_num(n)에 n+1
void rand_num2(int n1)
{
	int n2 = n1 / 1000;
	int num[6];//랜덤 생성 로또번호
	int loto[6] = { 0 };//비교될 로또번호

	srand((unsigned)time(NULL));

	for (int j = 0; j < n2+1; j++) {

		for (int i = 0; i <= 5; i++) {
			num[i] = 1 + (rand() % 45);//1~45 랜덤번호 생성
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])
				//@1.같은 줄 로또번호에 같은숫자가 있는지 비교
			{
				loto[i] = num[i];//같은숫자가 없으면 대입
			}
			else
				i--;//같은 숫자 생성시 다시진행
		}
		sort(loto, 6);//정렬함수 호출


	}
	printf("이전 회차 >> ");
	// 다음 금액 라운드차에 뽑을 번호를 지난 회차로 지정했음
	for (int i = 0; i < 6; i++)
		printf("%2d ", loto[i]);
	printf("\n");

	for (int i = 0; i < 6; i++) {
		loto[i] = 0;
		//@1.때문에 추가된 for문
	}

	return;
}


//번호 생성/출력
void rand_num(int n)
{
	int n1 = n / 1000;

	int num[6];//랜덤 생성 로또번호
	int loto[6] = { 0 };//비교될 로또번호

	int cnt1[100] = { 0 }; // 해당 번호 총 출현 개수

	srand((unsigned)time(NULL));

	for (int j = 0; j < n1; j++) {

		for (int i = 0; i <= 5; i++) {
			num[i] = 1 + (rand() % 45);//1~45 랜덤번호 생성
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])
				//@1.같은 줄 로또번호에 같은숫자가 있는지 비교
			{
				loto[i] = num[i];//같은숫자가 없으면 대입
				cnt1[loto[i]]++;
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
		//@1.때문에 추가된 for문
	}

	for (int i = 0; i < 45; i++) {
		if (cnt1[i] != 0)
		{
			printf("%d가 %d개 있습니다.\n", i, cnt1[i]);
		}
	}




	return;
}


//생성번호 오름차순 정렬 함수(버블정렬)
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
