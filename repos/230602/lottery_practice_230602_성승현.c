#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* GetLottoNumbers();
int AskExitProgram(long long int money);
void sort(int* snum, int size);

void LottoGame(long long int money, long long int price, long long int prize[], int* jackpot, int noojeok_stat, int jump);
long long int EarnMoney_PlayLotto(long long int n, long long int money, long long int prize[],int* jackpot, int* last_win, int cumulation);

int main(void)
{
	long long int 
		money = 0,
		price = 1000,			
		prize[5] = {				// 상금 풀		
			1863217554 + 55031743 , //  1등			(6개 일치)
			1446277,				//  2등			(5개 일치)
			50000,					//  3등			(4개 일치)
			5000,					//  4등			(3개 일치)
			0}						//  5등			(2개 이하)
		;							// 당첨금 (동행복권 1069회 추첨결과 기준)
	
	int jackpot[45] = { 0 },		// 번호 통계 저장용 배열
		noojeok_stat = 0,			// 1: 누적 통계 , 0: 해당 라운드만
		jump = 10					// 번호 통계 줄바꿈 수
		;

	LottoGame(money, price, prize, jackpot, noojeok_stat, jump);

	return 0;

}

///////////////////////////////////////////////////////////////
// 초기 6개 로또값 생성 함수
int* GetLottoNumbers() {
	static number[6] = { 0 };
	int random_number;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 6; i++) number[i] = 0;

	for (int i = 0; i < 6; i++) {
		for (int i = 0; i <= 5; i++) {
			random_number = 1 + (rand() % 45);//1~45 랜덤번호 생성
			if (random_number != number[0]
				&& random_number != number[1]
				&& random_number != number[2]
				&& random_number != number[3]
				&& random_number != number[4]
				&& random_number != number[5])//같은 줄 로또번호에 같은숫자가 있는지 비교
			{
				number[i] = random_number;//같은숫자가 없으면 대입
			}
			else
				i--;//같은 숫자 생성시 다시진행
		}
		sort(number, 6);//정렬함수 호출
	}
	return number;
}
// 정렬 함수
void sort(int snum[], int size) {
	int temp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i; j < size; j++) {
			if (snum[i] > snum[j]) {
				temp = snum[j];
				snum[j] = snum[i];
				snum[i] = temp;
			}
		}
	}
}
/////////////////////////////////////////////////////////////
// 현재 금액만큼 로또를 사는 함수
long long int EarnMoney_PlayLotto(long long int n, long long int money, long long int prize[], int* jackpot, int* last_win, int cumulation)
{
	int num;
	int loto[6] = { 0 };

	srand((unsigned)time(NULL));

	if (cumulation) { // 역대 당첨번호 통계 초기화 여부
		for (int i = 0; i < 45; i++) {
			jackpot[i] = 0;
		}
	}

	for (int j = 0; j < (int)n; j++) {

		// 1 ~ 6번째 로또 번호 추첨 //
		for (int i = 0; i < 6; i++) {

			num = 1 + (rand() % 45);

			if (num != loto[0]
				&& num != loto[1]
				&& num != loto[2]
				&& num != loto[3]
				&& num != loto[4]
				&& num != loto[5])
			{
				loto[i] = num;
			}
			else
				i--;
		}

		sort(loto, 6);

		// 현재 뽑은 번호 출력 //

		int count = 0;

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (loto[i] == last_win[j]) {
					count++;
				}
			}
		}
		printf("%2d>> ", j + 1);

		for (int i = 0; i < 6; i++)
			printf("%2d ", loto[i]);

		// 등수 계산 //

		int place = 0;
		switch (count) {
		case 6: place = 1; break;
		case 5: place = 2; break;
		case 4: place = 3; break;
		case 3: place = 4; break;
		default: place = 5; break;
		}

		printf("<< %lld원 당첨! (%d등, %d개 숫자 일치)", prize[place-1], place, count);
		money += prize[place -1];

		printf("\n");

		// 등장 번호 통계 기록 //

		for (int i = 0; i < 6; i++) {
			
			jackpot[ loto[i] - 1 ]++;
			last_win[i] = loto[i];
			loto[i] = 0;
		}

	}

	return money;
}
// 게임 재시작/종료 입력 판별용 함수
int AskExitProgram(long long int money) {
	char keyboard_input = '\0';

	while (1) {
		scanf(" %c", &keyboard_input);
		if (keyboard_input == 'y') return 0;
		if (keyboard_input == 'q') {
			printf("프로그램이 종료됩니다. \n반환금 : %lld원", money);
			return 1;
		}
		printf("유효한 문자를 넣어주세요.\n");
	}
}
/////////////////////////////////////////////////////////////
// 전체 게임이 실행되는 함수
void LottoGame(long long int money, long long int price, long long int prize[], int* jackpot, int noojeok_stat, int jump)
{
	
	long long int n = 0;
	int* last_win = GetLottoNumbers();

	int replay = 0;

	printf("안녕하세요. 로또 자동구입기를 사용해주셔서 감사합니다.\n");
	printf("금액을 투입하시면 투입한 금액만큼 최대로 자동으로 로또를 구입합니다.\n");
	printf("마지막 추첨번호와 같은 숫자가 많을수록 더 큰 상금을 드립니다.\n");

	printf("\n\n지난 회 추첨번호 >> ");
	for (int i = 0; i < 6; i++)
		printf("%2d ", last_win[i]);
	printf("<< \n\n");

	printf("로또 자동구입기에 투입할 돈을 입력해주세요.\n");
	printf("(1회 %lld원)\n", price);

	scanf_s("%lld", &money);
	printf("\n%lld원 넣으셨습니다.\n", money);
	
	n = money / price;
	money -= n * price;

	while (1) {

		if (n < 1) {
			printf("금액이 부족합니다. 다시 실행해주세요.\n");
			return 0;
		}

		printf("%lld회 자동추첨합니다.\n", n);

		////////////////////////////////////////////////////////////////////////////
		money = EarnMoney_PlayLotto(n, money, prize, jackpot, last_win, noojeok_stat);
		////////////////////////////////////////////////////////////////////////////

		printf("\n\n 이번 자동추첨 결과 나온 숫자의 빈도는 아래와 같습니다. \n\n");

		for (int i = 0; i < 2 * jump; i ++) printf("/////");
		printf("\n");

		for (int i = 0; i < 45; i++) {
			printf("%2d x %2d회  ", i + 1, jackpot[i]);
			if ((i + 1) % jump == 0) printf("\n");
		}
		printf("\n");
		for (int i = 0; i < 2 * jump; i++) printf("/////");
		printf("\n");

		printf("\n현재 %lld원이 남아있습니다. \n", money);

		if (money < price) {
			printf("금액이 부족합니다. 다시 실행해주세요.\n");
			return 0;
		}

		printf("y : 현재 돈으로 다시하기\n");
		printf("q : 그만하고 종료하기\n");

		if (AskExitProgram(money)) return 0;

		n = money / price;
		money -= n * price;

	}

}


