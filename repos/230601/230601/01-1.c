#include <stdio.h>
int main(void)
{

	char str0[9] = { "thisisid" };
	char str1[9]; //�Է¹��� ���̵� �迭 ũ��
	int str0Len, str1Len;
	//char str2[12]; //�н�����
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str1); // ���ڿ��� �Է� �޾Ƽ� �迭 str�� ����!
	printf("�Է� ���� ���ڿ� : %s \n", str1);

	str0Len= sizeof(str0) / sizeof(char); // �迭str0�� ���� ���
	str1Len = sizeof(str1) / sizeof(char); // �迭str1�� ���� ���

	if(str1Len==str0Len) // �迭 ũ�Ⱑ ���ٸ�
	{
		printf("�迭 ũ�Ⱑ ��ġ�մϴ�.\n");
		while (str1[idx] != '\0')	// str0[i]=str1[i]���� ����
		{
			if (str0[idx] == str1[idx])
			{
				printf("%d��° index %c�� ��ġ���� Ȯ��\n",idx ,str1[idx]);
				idx++;
			}
			else // �ٸ��ٸ�
			{
				printf("%d��° index %c�� ����ġ���� Ȯ��\n",idx, str1[idx]);
				break; // ����ġ�� �ϳ��� ������ ���� ���̵� �ٸ����� Ż��
			}
		
		}
		if(str1[idx]!='\0')
		printf("ID�� ����ġ�մϴ�.\n");
		else
		printf("ID�� ��ġ�մϴ�.\n");
	}
	else // �迭 ũ�Ⱑ �ٸ��ٸ�
	{
		printf("�迭�� ũ��, %d�� ����ġ���� Ȯ��\n", str1Len);
		printf("ID�� Ʋ�Ƚ��ϴ�.\n");
	}

	printf("\n");
	return 0;



}