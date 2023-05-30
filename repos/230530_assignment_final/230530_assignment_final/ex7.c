#include <stdio.h>
int main(void)
{

	for (int num = 1; num < 10; num++)
	{
		for (int dan = 2; dan < 10; dan++)
		{
			int res = dan * num;
			printf("%d X %d = %d  ", dan, num, res);
		}
		printf("\n");
	}

}