#include <stdio.h>

int main()
{
	char S[1000]; // �ܾ�S 1000 ����
	int i; // ���� i


	scanf("%s", &S); // S[1000] ==> S ����
	scanf("%d", &i);

	printf("%c", S[i-1]);


}