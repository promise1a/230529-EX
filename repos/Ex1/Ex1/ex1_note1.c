#include <stdio.h>


int main()
{
	int n1, n2;
	int num;
	int res = 0;

	scanf("%d %d", &n1, &n2);
	//n1, n2 받음

	if (n1 > n2) // 10 7
	{
		while (n1 < n2) // 10,7 10,8 10,9 10,10
			// 
		{
			num = n2;
			printf("n2는 %d입니다.\n", n2);
			res += num;
			printf("현재까지 합은 %d입니다.\n", res);
			n2++;
		}
		printf("%d부터 %d까지 총 합은 %d입니다.", &n1, &n2, &res);
	}

	/*else if (n1 < n2)
	{
		while (n1 = n2)
		{
			num = n1;
			printf("n2는 %d입니다.\n", n1);
			res += num;
			printf("현재까지 합은 %d입니다.\n", res);
			n1++;
		}
		printf("%d부터 %d까지 총 합은 %d입니다.", &n1, &n2, &res);
	}*/
	else; // n1 = n2
	return 0;
}

