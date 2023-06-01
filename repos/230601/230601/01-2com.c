#include <stdio.h>

//참으로 진행하게끔, 함수로 빼내기, pw넣기
// 분기를 거짓으로 진행하면 검증해야 할 부분이 너무 많아져서 안좋다.

int main(void)
{
	char str[] = { "hi" };
	char str1[20];
	int i, idx = 0, count = 1, strLen, match = 0;

	scanf("%s", str1);

	for (i = 0; str1[i] != '\0'; i++) count++;
	// 문자열 넣은 나머지에는 무엇이 있는가? 어떻게 갈무리가 되는가?
	// 입력받은 index외에는 0으로 처리됨..
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
		}*/

	//

	if (match == 0)
		printf("%s님 반갑습니다.", str1);
	else
		printf("잘못 입력하셨습니다.");

}