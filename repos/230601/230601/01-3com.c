#include <stdio.h>

//������ �����ϰԲ�, �Լ��� ������, pw�ֱ�
// �б⸦ �������� �����ϸ� �����ؾ� �� �κ��� �ʹ� �������� ������.

int sub1(void) // ���� ��ġ ����
{
	int i,count ;
	int str1[20];
	int strLen;
	for (i = 0; str1[i] != '\0'; i++) count++;
	// ���ڿ� ���� ���������� ������ �ִ°�? ��� �������� �Ǵ°�?
	// �Է¹��� index�ܿ��� 0���� ó����..
	strLen = sizeof(str) / sizeof(char);
	if (count == strLen) {
	}
	else
	{
		match = 1;
	}

}

int sub2(void) // ���� ��ġ ����
{
	while (str1[idx] != '\0')
	if (str1[idx] == str[idx]) {
		match = 0;
		idx++;
	}
	else
	{
		match = 1;
		break;
	}

}



int main(void)
{
	char str[] = { "hi" };
	char str1[20];
	int i, idx = 0, count = 1, strLen, match = 0;

	while (match == 2)
	{
		scanf("%s", str1);
		if (match == 0)
		{
			printf("%s�� �ݰ����ϴ�.", str1);
		match = 2; // �α��� ����
		}
		else // match == 1
			printf("�߸� �Է��ϼ̽��ϴ�.");
	}
}