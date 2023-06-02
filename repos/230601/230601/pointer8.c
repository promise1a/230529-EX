# include <stdio.h>
# include <stdlib.h>

// Call by value & Call by referenc
/*
void swapNum(int a, int b) // Swap value �Լ�
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a : %d  b : %d \n", a, b);
}
void swapRef(int* a, int* b) //Swap Address �Լ�
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

// �迭 ��ȯ�ϱ�
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

	//random�Լ� ����ϱ�
	/*int main()
	{
		int i,seed;
		//������ ������ �����ϴ� rand�Լ�
		for (i = 0; i < 4; i++)
			printf("���� ���� %dȸ : %d \n", i + 1, rand());

		//������ ������ ��ȭ�Ͽ�(��ȭ��=seed) �����ϴ� srand�Լ�
		seed = 1;
			srand(seed);
			printf("���� ���� %dȸ : %d \n", 1, rand());
			printf("���� ���� %dȸ : %d \n", 2, rand());
			printf("���� ���� %dȸ : %d \n", 3, rand());
			printf("���� ���� %dȸ : %d \n", 4, rand());

		//time�Լ��� ���� Seed�� ��ȭ
			srand(time(NULL));
			printf("���� ���� %dȸ : %d \n", 1, rand());
			printf("���� ���� %dȸ : %d \n", 2, rand());
			printf("���� ���� %dȸ : %d \n", 3, rand());
			printf("���� ���� %dȸ : %d \n", 4, rand());

		// �������� ���ϴ� ����� ���� ���� ���� ����
			srand(time(NULL));
			printf("���� ���� %dȸ : %d \n", 1, rand()%9+1);//+1�� 0�� �����ϱ� ���� ��
			printf("���� ���� %dȸ : %d \n", 2, rand()%20);
			printf("���� ���� %dȸ : %d \n", 3, rand()%45);
			printf("���� ���� %dȸ : %d \n", 4, rand()%5+1);

	}*/

	//�ζ� ��ȣ���� Sample_Code
	void rand_num(int n);
	void sort(int* snum, int size);

	//�����Լ�
	int main(void)
	{
		int n = 1;

		printf("������ �ζǸ� �����Ͻðڽ��ϱ�? : ");
		scanf_s("%d", &n);
		rand_num(n); //��ȣ���� ��� �Լ�ȣ��

		return 0;
	}

	//��ȣ ����/���
	void rand_num(int n)
	{

		int num[6];//���� ���� �ζǹ�ȣ
		int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ


		srand((unsigned)time(NULL));

		for (int j = 0; j < n; j++) {

			for (int i = 0; i <= 5; i++) {
				num[i] = 1 + (rand() % 45);//1~45 ������ȣ ����
				if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])
					//@1.���� �� �ζǹ�ȣ�� �������ڰ� �ִ��� ��
				{
					loto[i] = num[i];//�������ڰ� ������ ����
				}
				else
					i--;//���� ���� ������ �ٽ�����
			}
			sort(loto, 6);//�����Լ� ȣ��
			printf("%2d>> ", j + 1);
			for (int i = 0; i < 6; i++)
				printf("%2d ", loto[i]);
			printf("\n");
		}
		for (int i = 0; i < 6; i++) {
			loto[i] = 0;
			//@1.������ �߰��� for��
		}
		return;
	}


	//������ȣ �������� ���� �Լ�(��������)
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


	// ���ڿ� 3�� �Է¹޾Ƽ� �����ϱ�
	/*
		int main()
		{
			char arr[3][100];
			int i;
			for (i = 0; i < 3; i++)
			{
				printf("���ڿ��� �Է��ϼ��� : ");
				scanf("%s", arr[i]);
				printf("%s \n", arr[i]);
				printf("%p \n ", arr[i]);
			}
			printf("%s %s %s \n ", arr[0], arr[1], arr[2]);
			return 0;
		}*/
