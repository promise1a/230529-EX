#include <stdio.h>

int main(void)
{
	int arr[] = { 10, 20 , 30 };
	int sum = 0, i;

	/*arr[0] = 10, arr[1] = 20;*/
	
	//arr[2] = 30;

		for (i = 0; i < 2; i++)
			sum += arr[i];

		printf("�迭��ҿ� ����� ���� ��: %d \n", sum);
		return 0;
}