#include <stdio.h>

// do while문으로 구성
int main(void)
{
	int total = 0, num = 0;
	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);	// 0이 입력안되면 무한루프, break와 같은 기능 중
	printf("합계: %d \n", total);
	return 0;
}

	// for문으로 변경하기
int main()
	{
	int number, sum = 0;
	for (number = -1; number != 0;) {
		printf("정수 입력 (0 : 합 계산) : ");
		scanf("%d", &number);
		sum += number;
	}
	printf("%d %d", sum, number);
}
// 순차적으로 돌때





// 최소한 1회 이상 실행되어야 하는 반복문은
// do-while문으로 작성하는게 좋다.