#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// 2개의 문자로 이루어진 학점을 평점으로 변경하여 출력하라.
	
	// 1. 첫번째 값 입력받기
	// c1 변수 예상값 :: A, B, C, D, F

	/*
	
	char c1;
	scanf("%c", &c1);

	// c1의 값이 F라면 결과 즉시 출력,
	// 아니라면 입력 및 연산을 이어서 수행

	if (c1 == 'F') {printf("0.0\n");}
	else {
		char c2;
		scanf("%c", &c2);

		double score = 0;
		if (c1 == 'A') {score = 4;}
		else if (c1 == 'B') {score = 3;}
		else if (c1 == 'C') {score = 2;}
		else {score = 1;}

		if (c2 == '+') {score += 0.3;}
		else if (c2 == '-') {score -= 0.3;}

		printf("%.1f", score);
	}

	*/

	/// 위의 if문을 switch문으로 변경

	char c1;
	scanf("%c", &c1);

	// case1 - F - 0.0
	// case2 D,C,B,A
	// 
	// case3 +,-,0
	// 
	// 


	switch(c1)
		case 1: // F

}