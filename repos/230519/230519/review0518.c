#include <stdio.h>
// <stdio.h> 라이브러리를 코드에 포함한다.
// printf(), scanf()는 <stdio.h>에 들어있는 명령문

int main()
{
	// 서식지정자 :: %d(int), %lld(long long int), 
	//				%f(float), %lf(double), %c(char)
	// => printf(), scanf() 에서 사용

	// scanf("서식지정자1 서식지정자2 ...", &변수1, &변수2, ...);
	//		=> scanf()에서 "" 부분에선 서식지정자와 공백만 사용
	// & :: 주소연산자	-> "포인터"<개인의 학습에 맡김>
	int n = 1;
	printf("%d\n", n);
	printf("%d\n", &n);

	// * 연산자
	// 산술연산자(5) :: +, -, *, /(몫), %(나머지)
	// 대입연산자(1) :: = ("대입한다")

	// 강제 형변형 :: 특정 정보의 자료형을 "임시로" 강제 변환
	int a = 3;
	double result = 10 / (double)a;
	printf("%.3f\n", result);
	result = 10 / a; // int로 선언된 상태를 따름
	printf("%.3f\n", result);














	// 수업 외

	// %.3f :: 소수점 아래의 자릿수 = %f 점의 오른쪽에 있는 값.
	// 그 자릿수를 맞추기 위해 자동으로 값을 반올림하여 출력.

	const double dNum = 1234.56789;

	printf("%.0f\n", dNum);
	printf("%.1f\n", dNum);
	printf("%.2f\n", dNum);
	printf("%.3f\n", dNum);
	printf("%.4f\n", dNum);

	// %f 점의 왼쪽에 있는 값은 전체 자릿수를 조절

	const double eNum = 1234.56789;

	printf("%9.0f\n", eNum);
	printf("%9.1f\n", eNum);
	printf("%9.2f\n", eNum);
	printf("%9.3f\n", eNum);
	printf("%9.4f\n", eNum);

}
