#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	// 입력문 :: scanf()
	// scanf("서식지정자1 서식지정자2 ...", &변수1, &변수2, ...);
	// & :: 주소연산자
	// &num :: "변수 num이 위치한 주소" 반환

	int num;	// int형 변수 num 선언
	scanf("%d", &num);	// num 값 입력받기
		// %d에서 입력받은 값을
		// 사용자가 Enter를 쳤을 때 num으로 전달
		// < printf 와 달리 반대 방향>
	printf("%d", num); // 입력받은 num값 출력하기



}