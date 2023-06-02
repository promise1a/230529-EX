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
		prize[5] = {				// ��� Ǯ		
			1863217554 + 55031743 , //  1��			(6�� ��ġ)
			1446277,				//  2��			(5�� ��ġ)
			50000,					//  3��			(4�� ��ġ)
			5000,					//  4��			(3�� ��ġ)
			0}						//  5��			(2�� ����)
		;							// ��÷�� (���ູ�� 1069ȸ ��÷��� ����)
	
	int jackpot[45] = { 0 },		// ��ȣ ��� ����� �迭
		noojeok_stat = 0,			// 1: ���� ��� , 0: �ش� ���常
		jump = 10					// ��ȣ ��� �ٹٲ� ��
		;

	LottoGame(money, price, prize, jackpot, noojeok_stat, jump);

	return 0;

}

///////////////////////////////////////////////////////////////
// �ʱ� 6�� �ζǰ� ���� �Լ�
int* GetLottoNumbers() {
	static number[6] = { 0 };
	int random_number;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 6; i++) number[i] = 0;

	for (int i = 0; i < 6; i++) {
		for (int i = 0; i <= 5; i++) {
			random_number = 1 + (rand() % 45);//1~45 ������ȣ ����
			if (random_number != number[0]
				&& random_number != number[1]
				&& random_number != number[2]
				&& random_number != number[3]
				&& random_number != number[4]
				&& random_number != number[5])//���� �� �ζǹ�ȣ�� �������ڰ� �ִ��� ��
			{
				number[i] = random_number;//�������ڰ� ������ ����
			}
			else
				i--;//���� ���� ������ �ٽ�����
		}
		sort(number, 6);//�����Լ� ȣ��
	}
	return number;
}
// ���� �Լ�
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
// ���� �ݾ׸�ŭ �ζǸ� ��� �Լ�
long long int EarnMoney_PlayLotto(long long int n, long long int money, long long int prize[], int* jackpot, int* last_win, int cumulation)
{
	int num;
	int loto[6] = { 0 };

	srand((unsigned)time(NULL));

	if (cumulation) { // ���� ��÷��ȣ ��� �ʱ�ȭ ����
		for (int i = 0; i < 45; i++) {
			jackpot[i] = 0;
		}
	}

	for (int j = 0; j < (int)n; j++) {

		// 1 ~ 6��° �ζ� ��ȣ ��÷ //
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

		// ���� ���� ��ȣ ��� //

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

		// ��� ��� //

		int place = 0;
		switch (count) {
		case 6: place = 1; break;
		case 5: place = 2; break;
		case 4: place = 3; break;
		case 3: place = 4; break;
		default: place = 5; break;
		}

		printf("<< %lld�� ��÷! (%d��, %d�� ���� ��ġ)", prize[place-1], place, count);
		money += prize[place -1];

		printf("\n");

		// ���� ��ȣ ��� ��� //

		for (int i = 0; i < 6; i++) {
			
			jackpot[ loto[i] - 1 ]++;
			last_win[i] = loto[i];
			loto[i] = 0;
		}

	}

	return money;
}
// ���� �����/���� �Է� �Ǻ��� �Լ�
int AskExitProgram(long long int money) {
	char keyboard_input = '\0';

	while (1) {
		scanf(" %c", &keyboard_input);
		if (keyboard_input == 'y') return 0;
		if (keyboard_input == 'q') {
			printf("���α׷��� ����˴ϴ�. \n��ȯ�� : %lld��", money);
			return 1;
		}
		printf("��ȿ�� ���ڸ� �־��ּ���.\n");
	}
}
/////////////////////////////////////////////////////////////
// ��ü ������ ����Ǵ� �Լ�
void LottoGame(long long int money, long long int price, long long int prize[], int* jackpot, int noojeok_stat, int jump)
{
	
	long long int n = 0;
	int* last_win = GetLottoNumbers();

	int replay = 0;

	printf("�ȳ��ϼ���. �ζ� �ڵ����Ա⸦ ������ּż� �����մϴ�.\n");
	printf("�ݾ��� �����Ͻø� ������ �ݾ׸�ŭ �ִ�� �ڵ����� �ζǸ� �����մϴ�.\n");
	printf("������ ��÷��ȣ�� ���� ���ڰ� �������� �� ū ����� �帳�ϴ�.\n");

	printf("\n\n���� ȸ ��÷��ȣ >> ");
	for (int i = 0; i < 6; i++)
		printf("%2d ", last_win[i]);
	printf("<< \n\n");

	printf("�ζ� �ڵ����Ա⿡ ������ ���� �Է����ּ���.\n");
	printf("(1ȸ %lld��)\n", price);

	scanf_s("%lld", &money);
	printf("\n%lld�� �����̽��ϴ�.\n", money);
	
	n = money / price;
	money -= n * price;

	while (1) {

		if (n < 1) {
			printf("�ݾ��� �����մϴ�. �ٽ� �������ּ���.\n");
			return 0;
		}

		printf("%lldȸ �ڵ���÷�մϴ�.\n", n);

		////////////////////////////////////////////////////////////////////////////
		money = EarnMoney_PlayLotto(n, money, prize, jackpot, last_win, noojeok_stat);
		////////////////////////////////////////////////////////////////////////////

		printf("\n\n �̹� �ڵ���÷ ��� ���� ������ �󵵴� �Ʒ��� �����ϴ�. \n\n");

		for (int i = 0; i < 2 * jump; i ++) printf("/////");
		printf("\n");

		for (int i = 0; i < 45; i++) {
			printf("%2d x %2dȸ  ", i + 1, jackpot[i]);
			if ((i + 1) % jump == 0) printf("\n");
		}
		printf("\n");
		for (int i = 0; i < 2 * jump; i++) printf("/////");
		printf("\n");

		printf("\n���� %lld���� �����ֽ��ϴ�. \n", money);

		if (money < price) {
			printf("�ݾ��� �����մϴ�. �ٽ� �������ּ���.\n");
			return 0;
		}

		printf("y : ���� ������ �ٽ��ϱ�\n");
		printf("q : �׸��ϰ� �����ϱ�\n");

		if (AskExitProgram(money)) return 0;

		n = money / price;
		money -= n * price;

	}

}


