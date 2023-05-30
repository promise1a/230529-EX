#include <stdio.h>

int main()
{
	// 문자열 :: 여러 개의 문자
	// C언어에서는, char 배열 이용해야함. (따로 지원하지 않음)

	// h[5]에는 자동으로 '\0'(' ')이 배치되는데 //스페이스바 공백
	// ㅇ기에서 '\0'는 "문자열의 끝"을 의미한다.
	/*char h[15] = "Hello World!!!";
	printf("%s\n", h);
	printf("%c", h[7]);*/

	// 입력받은 단어에 대해,
	// 각 알파벳 개수(26가지) 출력

	char ch[101]; // ch수열
	scanf("%s", &ch);
	// ch 수열에 helloworld 입력


	int alpha[26] = { 0 }; // alpha수열, 모두 0값으로 초기화
	for (int i = 0; ch[i] != '\0'; i++)
	{
		alpha[ch[i] - 'a']++;
	}

