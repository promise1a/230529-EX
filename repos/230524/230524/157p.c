#include <stdio.h>

// c교재 157p 07-2 문제1

int main() {

	// 1. 5개 정수 입력받기
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	// 2. 그 수의 합을 출력하는 프로그램, 단 정수는 반드시 1 이상
	//	만약 1미만의 수가 입력도는 경우, 인정 않고 재 입력 요구

	while (a>=1) { // a가 1 이상일때까지 반복
		scanf("%d", &a);
		printf("%d", a);

	}
}