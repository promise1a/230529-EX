#include <stdio.h>
int main(void)
{
	int num = 10;
	int* pnum = &num;
	// pnum�� num�� ����Ų��.
	printf("%d\n", *pnum);
	// pnum�� ����Ű�� ���� ����� ���� ����Ѵ�.
	*pnum = 20;
	// pnum�� ����Ű�� ���� 20�� �����Ѵ�.
	printf("%d\n", *pnum);
	// pnum�� ����Ű�� ���� ����� ���� ����Ѵ�.


}