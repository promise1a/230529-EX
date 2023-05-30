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

	/*
	i=0
	alpha[ch[0]-'a']++;
:: 'h'-'a'=8-1=7 alpha[7]++;
:: alpha[7] = 0+1 = 1

i=1
alpha[ch[1]-'a']++;
:: 'e'-'a'-= 5-1 = 4 alpha[4]++;
:: alpha[4] = 0+1 = 1
...

i=2
alpha[ch[2]-'a']++;
:: 'l'-'a' = 108 - 97 =11 alpha[11]++;
:: alpha[11] = 0+1 = 1

i=3
alpha[ch[2]-'a']++;
:: 'l'-'a' = 108 - 97 =11 alpha[11]++;
:: alpha[11] = 1+1 = 2

........

i=9
alpha[ch[9]-'a']++;
:: 'd'-'a'=4-1=3 alpha[3]++;
:: alpha[3] = 0+1 = 1

i=10
ch[10] = \0, 반복문 탈출
	
	//

alpha[4] = 1
alpha[5] = 1
alpha[8] = 1
alpha[12] = 3
alpha[15] = 2
alpha[18] = 1
alpha[23] = 1

이외의 alpha[?] = 0
	
	
	
	*/


	// 문자열의 끝인 '\0'에 다다르면 반복문 탈출

	for (int i = 0; i < 26; i++)
	{
		printf("%c : %d개 출현\n", i + 'a', alpha[i]);
	}

	/*
	
	
printf
i=0
a : (=alpha[0])개 출현
....
i=3
d : (=alpha[3)]개 출현
	
	
	
	*/
	
}