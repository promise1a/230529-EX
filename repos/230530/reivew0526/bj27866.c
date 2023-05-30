#include <stdio.h>

int main()
{
	char S[1000]; // 단어S 1000 제한
	int i; // 정수 i


	scanf("%s", &S); // S[1000] ==> S 수정
	scanf("%d", &i);

	printf("%c", S[i-1]);


}