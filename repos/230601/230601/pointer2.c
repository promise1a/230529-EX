#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;
	int* pnum1;
	int res = 0, result = 0, a, b;

	pnum = &num1;
	(*pnum) += 30;
	printf("�ּҴ� 0x%x�̰� ���� %d�Դϴ�.\n", pnum, *pnum);

	pnum1 = &num2;
	(*pnum1) -= 30;
	printf("�ּҴ� 0x%x�̰� ���� %d�Դϴ�.\n", pnum1, *pnum1);

	res = pnum1 - pnum;
	result = *pnum - *pnum1;
	printf("�ּҰ� ���̴� %d byte�̰� ���� %d�Դϴ�.\n", res, result);

	pnum = &num2;
	pnum1 = &num1;
	printf("�ּҴ� 0x%x�̰� ���� %d�Դϴ�.\n", pnum, *pnum);
	printf("�ּҴ� 0x%x�̰� ���� %d�Դϴ�.\n", pnum1, *pnum1);

	a = *pnum;
	b = *pnum1;
	int tmp = a;
	a = b;
	b = tmp;
	printf("a�� �ּҴ� 0x%x�̰� ���� %d�Դϴ�.\n", &a, a);
	printf("b�� �ּҴ� 0x%x�̰� ���� %d�Դϴ�.\n", &b, b);
}
/*int main(void)
{
	char str[] = { "hi" };
	char str1[20];
	int i, idx = 0, count = 1, strLen, match = 0;

		scanf("%s", str1);

		for (i = 0; str1[i] != '\0'; i++) count++;
		strLen = sizeof(str) / sizeof(char);
		//printf("%d", strLen);
		if (count == strLen) {
			while (str1[idx] != '\0')
			{
				if (str1[idx] != str[idx]) {
					match = 1;
					break;
				}
				else
					match = 0;

				idx++;
			}
		}
		else
			match = 1;

		if (match == 0)
			printf("%s�� �ݰ����ϴ�.", str1);
		else
			printf("�߸� �Է��ϼ̽��ϴ�.");

}*/
