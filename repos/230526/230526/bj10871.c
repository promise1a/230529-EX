#include <stdio.h>

int main() {
	int N, X;
	scanf("%d %d", &N, &X);
	// 정수 N, X 입력받음

	int i;
	int a; // 
	for (i = 0; i < N; i++) // i은 배열 안의 정수
	{
		scanf("%d", &a);// 수열 A를 이루는 정수 N개가 입력됨.

		if (X > a) // 입력받은 a가 X보다 작으면,
		{
			printf("%d ", a); // 출력해라
		}
	}