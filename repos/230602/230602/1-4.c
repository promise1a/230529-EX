# include <stdio.h>
# include <stdlib.h>
# include <time.h>

//�ζ� ��ȣ���� Sample_Code
void rand_num(int n);
void sort(int* snum, int size);

//�����Լ�
int main(void)
{
	int n = 1;

	printf("�󸶸� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &n);

	rand_num(n); //����ȸ�� + �� ��ȣ���� ��� �Լ�ȣ��


	return 0;
}


//��ȣ ����/���
void rand_num(int n)
{
	// ���� ȸ�� �ζ� ��ȣ

	int n2 = n / 1000;
	int num2[6];//���� ���� �ζǹ�ȣ
	int loto2[6] = { 0 };//�񱳵� �ζǹ�ȣ

	srand((unsigned)time(NULL));

	for (int j = 0; j < n2 + 1; j++) {

		for (int i = 0; i <= 5; i++) {
			num2[i] = 1 + (rand() % 45);//1~45 ������ȣ ����
			if (num2[i] != loto2[0] && num2[i] != loto2[1] && num2[i] != loto2[2] && num2[i] != loto2[3] && num2[i] != loto2[4] && num2[i] != loto2[5])
				//@1.���� �� �ζǹ�ȣ�� �������ڰ� �ִ��� ��
			{
				loto2[i] = num2[i];//�������ڰ� ������ ����
			}
			else
				i--;//���� ���� ������ �ٽ�����
		}
		sort(loto2, 6);//�����Լ� ȣ��


	}
	printf("���� ȸ�� >> ");
	// ���� �ݾ� �������� ���� ��ȣ�� ���� ȸ���� ��������
	for (int i = 0; i < 6; i++)
	{
	printf("%2d ", loto2[i]);
	}
	printf("\n");




	// ���� ȸ�� �ζ� ��ȣ


	int n1 = n / 1000;

	int num[6];//���� ���� �ζǹ�ȣ
	int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ

	int cnt1[100] = { 0 }; // �ش� ��ȣ �� ���� ����


	srand((unsigned)time(NULL));

	for (int j = 0; j < n1; j++) {

		for (int i = 0; i <= 5; i++)
		{
			num[i] = 1 + (rand() % 45);//1~45 ������ȣ ����
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])
				//@1.���� �� �ζǹ�ȣ�� �������ڰ� �ִ��� ��
			{
				loto[i] = num[i];//�������ڰ� ������ ����
				cnt1[loto[i]]++;
			}
			else
				i--;//���� ���� ������ �ٽ�����
			}
		

		sort(loto, 6);//�����Լ� ȣ��
		printf("%2d>> ", j + 1);
		for (int i = 0; i < 6; i++)
			printf("%2d ", loto[i]);
		printf("\n");

		int cnt2 = 0;
		for (int i = 0; i < 6; i++)
			// �����ֶ� ��ȣ ��, �´� ���� Ȯ��
		{
			for (int j = 0; j < 6; j++)
			{
				if (loto[i] == loto2[j])
				{
					printf("�Ѥ� ���� ��ȣ : %d\n", loto[i]);
					cnt2+=1;
					printf("�Ѥ� %d�� ���߼̽��ϴ�.\n", cnt2);
					//printf("�Ѥ�%d�� ���߼̽��ϴ�.\n", cnt2);
					// n�� ����� �������� �� �� ���°�?
				}
			/*	if(j==5 && cnt2!=0)
					printf("�Ѥ�%d�� ���߼̽��ϴ�.\n", cnt2);*/
			}

			// 1���� ����
		}


	}
	for (int i = 0; i < 6; i++) {
		loto[i] = 0;
		//@1.������ �߰��� for��
	}

	for (int i = 0; i < 45; i++) {
		if (cnt1[i] != 0)
		{
			printf("%d(��)�� %d�� �ֽ��ϴ�.\n", i, cnt1[i]);
		}
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
