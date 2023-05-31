#include <stdio.h>


int main(void)
{
	int num;
	scanf("%d", &num); // 수 입력받기
	printf("입력하신 수는 %d입니다.", num);

	num = num * num;
		printf("입력하신 수의 제곱값은 %d입니다.", num);

	num = num * num;//수정
		printf("입력하신 수의 세 제곱값은 %d입니다.", num);

	//printf("입력하신 수는 %d, 제곱값은 %d, 세제곲 값은 %d입니다.", num, num2, num3);
	return 0;
}

// 결과물 형태

//Ex> 2를 입력한 경우
// 1. 입력하신 수는 2 입니다.
//    입력하신 수의 제곱값은 4 입니다.
//    입력하신 수의 세제곱 값은 8 입니다.
// 2. 입력하신 수는 2 이고 제곱값은 4, 세제곱 값은 8 입니다.