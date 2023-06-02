# include <stdio.h>
# include <stdlib.h>
# include <time.h>

//�ζ� ��ȣ���� Sample_Code
void rand_num2(int n1);
void rand_num(int n);
void sort(int* snum, int size);
void compare(int bef, int aft);

//�����Լ�
int main(void)
{
	int n = 1;

	printf("�󸶸� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &n);

	rand_num2(n); //����ȸ�� ��ȣ 1ȸ ����/���

	rand_num(n); //��ȣ���� ��� �Լ�ȣ��

	compare(rand_num2(n),rand_num(n) ); // ����ȸ��/����ȸ����

	return 0;
}
//���� �� ��ȣ 1ȸ�� ����/��� :: rand_num(n)�� n+1
void rand_num2(int n1)
{
	int n2 = n1 / 1000;
	int num[6];//���� ���� �ζǹ�ȣ
	int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ

	srand((unsigned)time(NULL));

	for (int j = 0; j < n2 + 1; j++) {

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


	}
	printf("���� ȸ�� >> ");
	// ���� �ݾ� �������� ���� ��ȣ�� ���� ȸ���� ��������
	for (int i = 0; i < 6; i++)
		printf("%2d ", loto[i]);
	printf("\n");

	for (int i = 0; i < 6; i++) {
		loto[i] = 0;
		//@1.������ �߰��� for��
	}

	return;
}


//��ȣ ����/���
void rand_num(int n)
{
	int n1 = n / 1000;

	int num[6];//���� ���� �ζǹ�ȣ
	int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ

	int cnt1[100] = { 0 }; // �ش� ��ȣ �� ���� ����

	srand((unsigned)time(NULL));

	for (int j = 0; j < n1; j++) {

		for (int i = 0; i <= 5; i++) {
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
	}
	for (int i = 0; i < 6; i++) {
		loto[i] = 0;
		//@1.������ �߰��� for��
	}

	for (int i = 0; i < 45; i++) {
		if (cnt1[i] != 0)
		{
			printf("%d�� %d�� �ֽ��ϴ�.\n", i, cnt1[i]);
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

void compare(int bef[6], int aft[6]) {

	int cnt = 0;
	
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<6;j++)
		{
			if (bef[i] == bef[j])
				cnt++;
			// �ߺ����� �̹� ��ȣ �̴� �������� �ɷ���
		}

	}
	


}