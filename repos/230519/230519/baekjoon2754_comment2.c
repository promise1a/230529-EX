#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 2개의 문자로 이루어진 학점을
	// 평점으로 변경하여 출력하라. (switch문)

	// 첫번째 문자 입력
	char c1;
	scanf("%c", &c1);

	if (c1 == 'F') {
		printf("0.0\n");
	}
	else {	// c1 :: A, B, C, D 중 하나
		char c2;
		scanf("%c", &c2);

		double score = 0;
		switch (c1) {
		case 'A':
			score = 4;
			break;
		case 'B':
			score = 3;
			break;
		case 'C':
			score = 2;
			break;
		default: score = 1; // c1이 D인 경우,
		}

		switch (c2) {
		case '+': score += 0.3; break;
		case '-': score -= 0.3; break;
		}

		printf("%.1f", score);
	}

}