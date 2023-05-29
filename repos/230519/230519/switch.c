#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	//int score;
	//scanf("%d", &score);


	/*switch (판별할 기준점이 되는 변수 v) {
		case 값1:
			[v와 값1이 서로 같을 때, 실행할 명령문]

		case 값2:
			[v와 값2이 서로 같을 때, 실행할 명령문]
		...
	}*/

	// if문으로 작성한 부분을, switch문으로 변경하여 작성
	// 90 ~ 100 ===(10으로 나눔)===> 9, 10 => A학점인 경우
	// 80 ~ 89 => 8 => B학점인 경우
	// 70 ~ 79 => 7 => C학점인 경우
	// 60 ~ 69 => 6 => D학점인 경우
	// 이 외의 나머지 => F학점인 경우

	int score;
	scanf("%d", &score);

	score /= 10;		// switch문 사용 수월하게 하기 위해
						// 0 ~ 100으로 이루어져있는 숫자가
						// 0 ~ 10으로 구성되어짐
	switch (score) {
		case 10:	// 실제 평점은 100인 경우
		case 9:		// 실제 평점은 90~99인 경우
			// score의 값이 10이거나 9일 때, 아래 명령문 실행
				// 10 or 9, 하나라도 만족할 때
			printf("A학점입니다.\n");	
			break;
		case 8:		// 실제 평점은 80~89인 경우
			printf("B학점입니다.\n");	
			break;
		case 7:
			printf("C학점입니다.\n");	
			break;
		case 6:
			printf("D학점입니다.\n");	
			break;
		default:
			printf("F학점입니다.\n");

	}
	// break 를 만나게 되면, 이쪽으로 빠져나옴






	//if문으로 작성


	/*
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
	*/
}