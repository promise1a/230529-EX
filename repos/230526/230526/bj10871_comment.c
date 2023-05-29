#include <stdio.h>

int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	// n:수열의길이 x:기준점

	// 입력 따로, 연산 따로
	int arr[10000];
	// 최대의 값으로 산정하면,
	// 이 문제에 대해서는 정답을 도출할 수 있다.
	for (int i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			printf("%d", arr[i]);
		}
	}

}