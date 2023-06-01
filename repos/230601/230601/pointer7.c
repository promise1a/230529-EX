#include <stdio.h>
int main(void)
{
	char* strArr[3] = { "Simple","String","Array" };
	char str[100];
	
	scanf("%s", &str);
	strArr[0] = str;
	printf("%s \n", strArr[0]);
	// strArr[0] :: аж╪р


	scanf("%s", &str);
	strArr[1] = str;
	printf("%s \n", strArr[1]);


	scanf("%s", &str);
	strArr[2] = str;
	printf("%s \n", strArr[2]);

	printf("%s %s %s\n", strArr[0], strArr[1], strArr[2]);
	return 0;


}