#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//* 이름의 성과 국영수를 입력받아, 이들의 평균을 출력하세요.
//아래 양식을 참고하시길 바랍니다.
//
//반갑습니다.[Y]님
//이번 시험의 평균은[평균]입니다.
//
//- 입력받을 변수::name(char), kor(int), math(int), eng(int)
//- 평균은 소수점이 포함된 실수 값으로 출력
//
//* 고민해볼 점
//
//
// 정수형 정보들을 이용하여 어떻게 실수형 결과를 출력할까 ?

int main() 
{
	printf("이름을 입력해주세요.\n");
	char name;
	scanf("%c", &name);
	printf("반갑습니다. %c님\n\n", name);
	
	printf("국어 점수를 입력해주세요.\n");
	int kor;
	scanf("%d", &kor);
	
	printf("수학 점수를 입력해주세요.\n");
	int math;
	scanf("%d", &math);
	
	printf("영어 점수를 입력해주세요.\n");
	int eng;
	scanf("%d", &eng);
	
	
	double avg = (kor + math + eng) / 3.0;	
	// 고민해볼점 :: /3 기입하면 정수, /3.0 기입하면 실수
	printf("이번 시험의 평균은 %f입니다.\n", avg);

}