#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int *pnum1, *pnum2;
	pnum1 = &num1;	// ������ pnum�� num1(�ּ�)�� ����Ŵ
	(*pnum1) += 30;	// num1+=30; �� ����
	printf("%x\n", *pnum1);

	pnum2 = &num2;	// ������ pnum�� num2(�ּ�)�� ����Ŵ
	(*pnum2) -= 30;	// num2-=30; �� ����
	printf("%x\n", *pnum2);

	printf("num1:%d, num2:%d \n0", num1, num2);
	// num1 = *pnum1, num2 = *pnum2;
	return 0;



}