#include <stdio.h>

int main() {
	int dan, num, i = 0;
	do

	{
		printf("단을 입력하세요 : ");
		scanf_s("%d", &dan);
		if (dan == 0)
			break;
		for (i = 1; i < 10; i++)
		{
			num = dan * i;
			printf("%d X %d = %d \n", dan, i, num);
			// 한 줄일 경우 생략 가능
		}
	} while (dan != 0);
}

