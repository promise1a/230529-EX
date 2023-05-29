#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//* 이름의 성과 국영수를 입력받아, 이들의 평균을 출력하세요.

	// 1. 변수 선언 :: name(char), kor, math, eng(int)

	char name;
	int kor, math, eng;

	// 2. 변수의 값 입력받기 :: scanf()
	// scanf()의 ""안에는, 서식지정자와 공백만 쓸 수 있다.
	scanf("%c", &name);
	scanf("%d %d %d", &kor, &math, &eng);

	// 3. 결과값 산출 + 변수에 저장
	// 강제 형변환 :: 특정 정보의 자료형을 강제로 변형

	double result = (kor + math + eng) / (double)3;
	// or 
	// double result = (double)(kor + math + eng) / 3;

	// 3 을 실수로 바꾸는 방법
	// - (double)3
	// - 3.0

	// 4. 양식대로 출력(평균은 소수점이 포함된 실수 값으로 출력)
	/*반갑습니다.[Y]님
	  이번 시험의 평균은[평균]입니다.*/

	printf("반갑습니다. %c님\n", name);
	printf("이번 시험의 평균은 %f점입니다.", result);

	// 10/3 = 3 (정수/정수 = 몫)
	// 10/3.0 = 3.3333 (정수/실수, 실수/정수 = 모두 출력)
	// 10%3 = 1 (정수/정수 = 나머지)

}