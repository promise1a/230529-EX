#include <stdio.h>

//������ �����ϰԲ�, �Լ��� ������, pw�ֱ�
// �б⸦ �������� �����ϸ� �����ؾ� �� �κ��� �ʹ� �������� ������.

int main(void)
{
	char str[] = { "hi" };
	char str1[20];
	int i, idx = 0, count = 1, strLen, match = 0;

	scanf("%s", str1);

	for (i = 0; str1[i] != '\0'; i++) count++;
	// ���ڿ� ���� ���������� ������ �ִ°�? ��� �������� �Ǵ°�?
	// �Է¹��� index�ܿ��� 0���� ó����..
	strLen = sizeof(str) / sizeof(char);
	//printf("%d", strLen);

	//

	if (count == strLen) {
		while (str1[idx] != '\0')
		{
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
	}
	else
	{
		match = 1;
	}



	/*if (count != strLen) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
		match = 1;
	}
	else
		while (str1[idx] != '\0')
		{
			if (str1[idx] != str[idx]) {
				match = 1;
				break;
			}
			else
				match = 0;

			idx++;
		}*/

	//

	if (match == 0)
		printf("%s�� �ݰ����ϴ�.", str1);
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");

}