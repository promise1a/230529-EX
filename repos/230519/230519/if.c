#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// if문 :: "만약에"
	//		=> 특정 조건에 따라 실행할 명령문을 달리할 때 사용
	/*	if (조건문) {
		위 조건문 만족할 때, 실행할 명령문
		}	*/

	// 예제 :: 평점(점수)에 따른 학점 출력
	// 1. 평점 입력
	int score;
	scanf("%d", &score);

	// 2. 학점 출력
	// 2-1) A학점 출력 (score의 값이 90 ~ 100 사이일 때)
	//if ((score >= 90) && (score <= 100)) // 소괄호 구분 빼도 됨
	//{
	//	printf("A학점입니다.\n");
	//}
	//// 2-2) B학점 출력 (score의 값이 80 ~ 89 사이일 때)
	//if ((score >= 80) && (score <= 89))
	//{
	//	printf("B학점입니다.\n");
	//}
	//// 2-3) C학점 출력 (score의 값이 70 ~ 79 사이일 때)
	//if ((score >= 70) && (score <= 79))
	//{
	//	printf("C학점입니다.\n");
	//}
	//// 2-4) D학점 출력 (score의 값이 60 ~ 69 사이일 때)
	//if ((score >= 60) && (score <= 69))
	//{
	//	printf("D학점입니다.\n");
	//}
	//// 2-5) F학점 출력 (score의 값이 0 ~ 59 사이일 때)
	//if ((score >= 0) && (score <= 59))
	//{
	//	printf("F학점입니다.\n");
	//}

	// if - else if - else
	// if - else - else if (X) 순서

	if (score >= 90) {	// "만약에 ~하면, 아래를 실행하라."
		printf("A학점입니다.\n");
	}
	else if (score >= 80) {
		// "위 조건을 만족하지 않고 해당 조건을 만족한다면,
		// 아래를 실행하라.""
		printf("B학점입니다.\n");
	}
	else if (score >= 70) {
		printf("C학점입니다.\n");
	}
	else if (score >= 60) {
		printf("D학점입니다.\n");
	}
	else {		// "위 조건을 모두 만족하지 않는다면,
				//	이거라도 실행해라."
		printf("F학점입니다.\n");
	}

}