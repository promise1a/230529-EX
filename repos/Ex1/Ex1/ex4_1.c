//4.[함수 구현]
//매개변수를 이용해서 a부터 b까지 사칙연산 수행하고
// 그 결과를 출력만 해주는 함수 만들기
//(매개변수는 + 와 * 혹은 x, X이렇게 4개만 허용함)
//ex) calc(1, 10, '+')  -> 1부터 10까지 더함
//ex) calc(1, 10, '*')  -> 1부터 10까지 곱함
//ex) calc(1, 10, 'x')  -> 1부터 10까지 곱함
//ex) calc(1, 10, '-')->예외메시지

#include <stdio.h>

int calc(a, b, c)
{
	switch(c)
		case 1: // 합연산일때 c 무슨기호?
			a+b
			break;
		case 2: // 차일때 c 무슨기호?
			a-b
			braek;
		case 3: // 곱연산일때 c 무슨기호?
			a*b
			break;
		case 4: // 나눗셈일때 c 무슨기호?
			(double)a/b
			break;
		default:
			break;
}

int main()
{
	int a, b, c;
	scanf("%d %d %c", &a, &b, &c);
	// a,b,c(특수문자?) 입력받음

	printf("%d %d 연산 결과는 %d입니다.\n", a, b, c);

}