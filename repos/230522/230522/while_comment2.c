#include <stdio.h>

int main()
{

	// 2.소문자를 입력받은 경우엔, a부터 입력값까지 출력
	//	 대문자를 입력받은 경우엔, A부터 입력값까지 출력
	// A=65
	// a=97
	// 입력값은 하나였고, 이 입력값이 소문자/대문자인지 판별

	// * 문자 입력받기
	char alpha;
	scanf("%c", &alpha);

	// * 입력값이 대문자일때
	if (alpha >= 'A' && alpha <= 'Z') {
		// = alpha의 값이 'A' ~ 'Z' 사이일 때,
		char c = 'A';	// 시작점 변수('A') 선언
		while (c <= alpha) {	// 종료점은 입력값까지
			printf("%c ", c);
			c++;
		}
		// c의 값이 alpha의 값보다 더 큰 값에 다다르면, 반복문 탈출
	}

	// 입력값이 소문자일 때
	else if (alpha >= 'a' && alpha <= 'z') {
		// alpha의 값이 'a' ~ 'z' 사이일 때,
		char c = 'a';	// 시작점 변수('a') 선언
		while (c <= alpha) {
			printf("%c ", c);
			c++;
		}
		// c의 값이 alpha의 값보다 더 큰 값에 다다르면, 반복문 탈출
	}

	else {
		printf("잘못 입력하셨습니다. 다시 실행해주세요.\n");
	}




}