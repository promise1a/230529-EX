#include <stdio.h>

int main() {

	// 백준 10872번 문제 :: 입력값에 대한 팩토리얼 결과 출력
	// 1*2*3*....*n 출력값 내기

	// 1. 값 입력받기
	int n;
	scanf("%d", &n);

	// 2. 결과값 저장할 변수 선언
	int result = 1;


	// 3. 순차적으로 곱하기 -> 반복문 사용
	while (n>0) {
		// n을 곱하면서 n에 1씩 빼는 연산
		result *= n;
		n--;
	}

	// 4. 결과값 출력하기
	printf("%d", result);







}