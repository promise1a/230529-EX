//2.[함수 구현]
//Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력하되,
//3600이상의 값을 받으면 오류 메시지를 출력한다.

#include <stdio.h>

int sum1(n1)
{
	// 초 입력값 받음
	// h분 m초로 반환시키되, 3600 이상 입력받으면 에러 표시
	int h;
	h = n1 / 60;
	return h; // h분 m초로 반환
}

int sum2(n1)
{
	// 초 입력값 받음
	// h분 m초로 반환시키되, 3600 이상 입력받으면 에러 표시
	int m;
	m = n1 % 60;
	return m; // h분 m초로 반환
}

int main()
{
	int Sec;
	scanf("%d", &Sec);
	// 초 입력받음

	if (Sec < 3600)
	{
		printf("%d분 %d초", sum1(Sec), sum2(Sec));
	}
	else if (Sec >= 3600)
		printf("에러메세지");
}