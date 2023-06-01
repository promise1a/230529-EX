# include <stdio.h>

int main(void)
{
	char str[] = { "hi" };
	char str1[20];
	int i, idx = 0, count = 1, strLen, match = 0;

	scanf("%s", str1);

	for (i = 0; str1[i] != '\0'; i++) count++;
	strLen = sizeof(str) / sizeof(char);
	printf("%d", strLen);
	if (count != strLen) {
		printf("잘못 입력하셨습니다.");
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
		}
	if (match == 0)
		printf("%s님 반갑습니다.", str1);
	else
		printf("잘못 입력하셨습니다.");

}