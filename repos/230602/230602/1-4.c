# include <stdio.h>
# include <stdlib.h>
# include <time.h>

//로또 번호생성 Sample_Code
void rand_num(int n);
void sort(int* snum, int size);

//메인함수
int main(void)
{
	int n = 1;

	printf("얼마를 지불하시겠습니까? : ");
	scanf_s("%d", &n);

	rand_num(n); //이전회차 + 현 번호생성 출력 함수호출


	return 0;
}


//번호 생성/출력
void rand_num(int n)
{
	// 이전 회차 로또 번호

	int n2 = n / 1000;
	int num2[6];//랜덤 생성 로또번호
	int loto2[6] = { 0 };//비교될 로또번호

	srand((unsigned)time(NULL));

	for (int j = 0; j < n2 + 1; j++) {

		for (int i = 0; i <= 5; i++) {
			num2[i] = 1 + (rand() % 45);//1~45 랜덤번호 생성
			if (num2[i] != loto2[0] && num2[i] != loto2[1] && num2[i] != loto2[2] && num2[i] != loto2[3] && num2[i] != loto2[4] && num2[i] != loto2[5])
				//@1.같은 줄 로또번호에 같은숫자가 있는지 비교
			{
				loto2[i] = num2[i];//같은숫자가 없으면 대입
			}
			else
				i--;//같은 숫자 생성시 다시진행
		}
		sort(loto2, 6);//정렬함수 호출


	}
	printf("이전 회차 >> ");
	// 다음 금액 라운드차에 뽑을 번호를 지난 회차로 지정했음
	for (int i = 0; i < 6; i++)
	{
	printf("%2d ", loto2[i]);
	}
	printf("\n");




	// 이전 회차 로또 번호


	int n1 = n / 1000;

	int num[6];//랜덤 생성 로또번호
	int loto[6] = { 0 };//비교될 로또번호

	int cnt1[100] = { 0 }; // 해당 번호 총 출현 개수


	srand((unsigned)time(NULL));

	for (int j = 0; j < n1; j++) {

		for (int i = 0; i <= 5; i++)
		{
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

		int cnt2 = 0;
		for (int i = 0; i < 6; i++)
			// 지난주랑 번호 비교, 맞는 숫자 확인
		{
			for (int j = 0; j < 6; j++)
			{
				if (loto[i] == loto2[j])
				{
					printf("ㅡㅡ 맞춘 번호 : %d\n", loto[i]);
					cnt2+=1;
					printf("ㅡㅡ %d개 맞추셨습니다.\n", cnt2);
					//printf("ㅡㅡ%d개 맞추셨습니다.\n", cnt2);
					// n개 맞춘걸 누산으로 할 순 없는가?
				}
			/*	if(j==5 && cnt2!=0)
					printf("ㅡㅡ%d개 맞추셨습니다.\n", cnt2);*/
			}

			// 1라운드 종료
		}


	}
	for (int i = 0; i < 6; i++) {
		loto[i] = 0;
		//@1.때문에 추가된 for문
	}

	for (int i = 0; i < 45; i++) {
		if (cnt1[i] != 0)
		{
			printf("%d(이)가 %d개 있습니다.\n", i, cnt1[i]);
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
