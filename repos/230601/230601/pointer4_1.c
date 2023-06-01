
# include <stdio.h>
# include <stdlib.h>

int AddNum(int* num, int* num1)
{
	int res = 0;
	res = *num + *num1;
	return res;
}
int main()
{
	int* num = malloc(sizeof(int));
	int* num1 = malloc(sizeof(int));
	int res = 0;

	scanf("%d", num);
	scanf("%d", num1);

	printf("%d 와 %d를 더한 값은 %d입니다\n", *num, *num1, AddNum(num, num1));
/*
int AddNum(int* num, int* num1)
printf("%d 와 %d를 더한 값은 %d입니다\n", *num, *num1, AddNum(num, num1));
call by reference


int AddNum(int num, int num1)
printf("%d 와 %d를 더한 값은 %d입니다\n", *num, *num1, AddNum(*num, *num1));
call by value

두 가지의 차이를 잘 이해해야 한다.

*/





	free(num);
	free(num1);
}
/*int main()
{
	//int num1 , num2 = 100;
	int * pnum =NULL;
	int * pnum1;
	//int res=0, result=0, a, b;


	scanf("%d", pnum);
	//pnum = &num1;
	printf("%d", *pnum);

	/*
	pnum = &num1;
	(*pnum) += 30;
	printf("주소는 0x%x이고 값은 %d입니다.\n", pnum, *pnum);

	pnum1 = &num2;
	(*pnum1) -= 30;
	printf("주소는 0x%x이고 값은 %d입니다.\n", pnum1, *pnum1);

	res = pnum1 - pnum;
	result = *pnum - *pnum1;
	printf("주소값 차이는 %d byte이고 값은 %d입니다.\n", res, result);

	pnum = &num2;
	pnum1 = &num1;
	printf("주소는 0x%x이고 값은 %d입니다.\n", pnum, *pnum);
	printf("주소는 0x%x이고 값은 %d입니다.\n", pnum1, *pnum1);

	a = *pnum;
	b = *pnum1;

	a = b;
	b = a;
	printf("a의 주소는 0x%x이고 값은 %d입니다.\n", &a, a);
	printf("b의 주소는 0x%x이고 값은 %d입니다.\n", &b, b);

	}*/

	/*int main(void)
	{
		char str[] = { "hi" };
		char str1[20];
		int i, idx = 0, count = 1, strLen, match = 0;

			scanf("%s", str1);

			for (i = 0; str1[i] != '\0'; i++) count++;
			strLen = sizeof(str) / sizeof(char);
			//printf("%d", strLen);
			if (count == strLen) {
				while (str1[idx] != '\0')
				{
					if (str1[idx] != str[idx]) {
						match = 1;
						break;
					}
					else
						match = 0;

					idx++;
				}
			}
			else
				match = 1;

			if (match == 0)
				printf("%s님 반갑습니다.", str1);
			else
				printf("잘못 입력하셨습니다.");

	}*/
