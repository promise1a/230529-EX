# include <stdio.h>
# include <stdlib.h>

// Call by value & Call by referenc
/*
void swapNum(int a, int b) // Swap value 함수
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a : %d  b : %d \n", a, b);
}
void swapRef(int* a, int* b) //Swap Address 함수
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("a : %d  b : %d \n", *a, *b);
}

int main()
{
	int num, num1;
	num = 10;
	num1 = 20;

	swapNum(num, num1); //Call by Value
	printf("num : %d, num1 : %d \n", num, num1);
	swapRef(&num, &num1); //Call by Refrence
	printf("num : %d, num1 : %d \n", num, num1);
}
*/

// 배열 반환하기
/*
 int* getNum() {
	static int arr[6] = { 1,2,3,4,5,6 };
	return arr;
	}

int main() {
		int* nums = getNum();
		for (int i = 0; i < 6; i++)
			printf("%d ", nums[i]);
	}*/

	//random함수 사용하기
	/*int main()
	{
		int i,seed;
		//임의의 난수를 생성하는 rand함수
		for (i = 0; i < 4; i++)
			printf("난수 생성 %d회 : %d \n", i + 1, rand());

		//임의의 난수를 변화하여(변화값=seed) 생성하는 srand함수
		seed = 1;
			srand(seed);
			printf("난수 생성 %d회 : %d \n", 1, rand());
			printf("난수 생성 %d회 : %d \n", 2, rand());
			printf("난수 생성 %d회 : %d \n", 3, rand());
			printf("난수 생성 %d회 : %d \n", 4, rand());

		//time함수를 통한 Seed값 변화
			srand(time(NULL));
			printf("난수 생성 %d회 : %d \n", 1, rand());
			printf("난수 생성 %d회 : %d \n", 2, rand());
			printf("난수 생성 %d회 : %d \n", 3, rand());
			printf("난수 생성 %d회 : %d \n", 4, rand());

		// 나머지를 구하는 방법을 통한 난수 범위 제한
			srand(time(NULL));
			printf("난수 생성 %d회 : %d \n", 1, rand()%9+1);//+1은 0을 제외하기 위한 수
			printf("난수 생성 %d회 : %d \n", 2, rand()%20);
			printf("난수 생성 %d회 : %d \n", 3, rand()%45);
			printf("난수 생성 %d회 : %d \n", 4, rand()%5+1);

	}*/

	//로또 번호생성 Sample_Code
	void rand_num(int n);
	void sort(int* snum, int size);

	//메인함수
	int main(void)
	{
		int n = 1;

		printf("몇장의 로또를 구입하시겠습니까? : ");
		scanf_s("%d", &n);
		rand_num(n); //번호생성 출력 함수호출

		return 0;
	}

	//번호 생성/출력
	void rand_num(int n)
	{

		int num[6];//랜덤 생성 로또번호
		int loto[6] = { 0 };//비교될 로또번호


		srand((unsigned)time(NULL));

		for (int j = 0; j < n; j++) {

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
			printf("%2d>> ", j + 1);
			for (int i = 0; i < 6; i++)
				printf("%2d ", loto[i]);
			printf("\n");
		}
		for (int i = 0; i < 6; i++) {
			loto[i] = 0;
			//@1.때문에 추가된 for문
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


	// 문자열 3번 입력받아서 저장하기
	/*
		int main()
		{
			char arr[3][100];
			int i;
			for (i = 0; i < 3; i++)
			{
				printf("문자열을 입력하세요 : ");
				scanf("%s", arr[i]);
				printf("%s \n", arr[i]);
				printf("%p \n ", arr[i]);
			}
			printf("%s %s %s \n ", arr[0], arr[1], arr[2]);
			return 0;
		}*/
