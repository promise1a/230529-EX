#include <stdio.h>
int main(void)
{
	int num = 10;
	int* pnum = &num;
	// pnum이 num을 가리킨다.
	printf("%d\n", *pnum);
	// pnum이 가리키는 곳에 저장된 값을 출력한다.
	*pnum = 20;
	// pnum이 가리키는 곳에 20을 대입한다.
	printf("%d\n", *pnum);
	// pnum이 가리키는 곳에 저장된 값을 출력한다.


}