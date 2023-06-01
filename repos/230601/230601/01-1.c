#include <stdio.h>
int main(void)
{

	char str0[9] = { "thisisid" };
	char str1[9]; //입력받을 아이디 배열 크기
	int str0Len, str1Len;
	//char str2[12]; //패스워드
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str1); // 문자열을 입력 받아서 배열 str에 저장!
	printf("입력 받은 문자열 : %s \n", str1);

	str0Len= sizeof(str0) / sizeof(char); // 배열str0의 길이 계산
	str1Len = sizeof(str1) / sizeof(char); // 배열str1의 길이 계산

	if(str1Len==str0Len) // 배열 크기가 같다면
	{
		printf("배열 크기가 일치합니다.\n");
		while (str1[idx] != '\0')	// str0[i]=str1[i]인지 검증
		{
			if (str0[idx] == str1[idx])
			{
				printf("%d번째 index %c가 일치함을 확인\n",idx ,str1[idx]);
				idx++;
			}
			else // 다르다면
			{
				printf("%d번째 index %c가 불일치함을 확인\n",idx, str1[idx]);
				break; // 불일치가 하나라도 나오는 순간 아이디가 다름으로 탈출
			}
		
		}
		if(str1[idx]!='\0')
		printf("ID가 불일치합니다.\n");
		else
		printf("ID가 일치합니다.\n");
	}
	else // 배열 크기가 다르다면
	{
		printf("배열의 크기, %d가 불일치함을 확인\n", str1Len);
		printf("ID가 틀렸습니다.\n");
	}

	printf("\n");
	return 0;



}