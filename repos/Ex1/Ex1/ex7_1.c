
//7.[main에서만 작성]
//구구단을 출력하여라
//(ex)
//2X1 = 2  3X1 = 3  4X1 = 4  5X1 = 5  6X1 = 6  7X1 = 7  8X1 = 8  9X1 = 9
//2X2 = 4  3X2 = 6  4X2 = 8  5X2 = 10 6X2 = 12 7X2 = 14 8X2 = 16 9X2 = 18
// .	.	.	.	.	.	.		.	.	.		.
//2X9=18 3X9=27 4X9=36 5X9=45 6X9=54 7X9=63 8X9=72 9X9=81
#include <stdio.h>

int main(void)
{
	for (int dan=1;dan<10;dan++)
	{
		
		for (int num=1;num<10;num++)
		{
			int res = dan * num;
			printf("%d X %d = %d  ", dan, num, res);
		}
		printf("\n");
	}

}