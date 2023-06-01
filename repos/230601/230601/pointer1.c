#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int *pnum1, *pnum2;
	pnum1 = &num1;	// 포인터 pnum이 num1(주소)을 가리킴
	(*pnum1) += 30;	// num1+=30; 과 동일
	printf("%x\n", *pnum1);

	pnum2 = &num2;	// 포인터 pnum이 num2(주소)를 가리킴
	(*pnum2) -= 30;	// num2-=30; 과 동일
	printf("%x\n", *pnum2);

	printf("num1:%d, num2:%d \n0", num1, num2);
	// num1 = *pnum1, num2 = *pnum2;
	return 0;



}