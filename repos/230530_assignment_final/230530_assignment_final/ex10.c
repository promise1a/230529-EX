#include <stdio.h>

double sub1(int a, int b, int c)
{
	double avg;
	int sum;
	sum = a + b + c;
	avg = (double)sum / 3;
	return avg;
}



int main()
{
	//국영수 점수 연속해서 입력받기
	int A = 1;
	int B = 1;
	int C = 1;
	double best = 0;

	for (;;)
	{
		scanf("%d %d %d", &A, &B, &C);
		// 0 0 0 입력받았을 때 반복문 깨고 나감
		if (A == 0, B == 0, C == 0)
			break;
		printf("평균은 %lf입니다.\n", sub1(A, B, C));

		if (sub1(A, B, C) > best)
			best = sub1(A, B, C);
		printf("현재까지 best는 %lf입니다.\n", best);
		// best가 갱신이 안된다..
	}
	printf("연산을 종료합니다.\n");
	printf("평균 최대값은 %lf입니다.\n", best);
}