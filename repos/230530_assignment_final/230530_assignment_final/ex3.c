#include <stdio.h>

int sub(int num)
{
	int total = 0;
	for (num = 1; num < 101; num++)
	{
		if (num < 100)
		{
			total += num;
			printf("%d+", num);
		}
		if (num == 100)
		{
			total += num;
			printf("%d", num);
		}

	}
	return total;
}


int main()
{
	printf("\ntotal=%d", sub(100));
}