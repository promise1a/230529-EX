#include <stdio.h>

int main()
{
	int arr1[10001]; // 수열 크기 최대 10000 크기만큼
	int n; // n:: 수열의 숫자 개수

	scanf("%d", &n); // n 입력받음
	printf("수열의 크기 %d로 입력받음\n", n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]); // i가 n에 다다를때까지(n-1) 입력받음
		printf("%d가 입력받음\n", arr1[i]);
	}
	// 일단 입력을 다 받았음


	printf("오름차순으로 정렬합니다.\n");
	// 오름차순으로 정렬하는 명령문; 버블정렬
	// 선택정렬 삽입정렬 병합정렬 등등 많다...
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr1[i]);

	}
}