#include <stdio.h>

int main()
{

	int n; // n은 입력받을 데이터의 갯수
	scanf("%d", &n); // n에 정수 하나를 입력받음

	int max, min, sum;
	double avg;

	int num;
	scanf("%d", &num); // n에 정수 하나를 입력받는다(n=1)

	max = num; // 초기 설정
	min = num;
	sum = num;
	avg = num;

	int j = 2; // j에 입력받음

	for (int i = 2; i <= n; i++)
		// i은 2이고, 반복문구 실행 후 i++; i가 n보다 크면 탈출
		// i가 n이 될 때 까지 j에 정수 입력값 하나를 받는다.
	{
		scanf("%d", &j); // j에 정수 하나를 입력받는다.

		if (max < j)
		{
			max = j;
		}
		else if (max >= j)
		{
		}

		if (min < j)
		{
		}
		else if (min >= j)
		{
			min = j;
		}
		// 최대값, 최소값 끝

		sum += j;
		// 합계 끝

		avg = (double)(sum) / i;

		// 평균 끝
	}
	// for 반복문 끝

	printf("\n총 입력받은 데이터의 개수는 %d개 이며,\n", n);
	printf("최대값은 %d입니다.\n", max);
	printf("최소값은 %d입니다.\n", min);
	printf("합계는 %d입니다.\n", sum);
	printf("평균은 %.4f입니다.\n", avg);

}