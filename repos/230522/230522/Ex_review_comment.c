#include <stdio.h>

int main()
{
	// 자판기 프로그램 만들기
	// 입력값 :: 돈(money), 사먹을 음료수(botton)
	// 출력값 :: 어떤 음료수를 구매했는지 / 거스름돈

	// * 음료수 종류
	// 1번) 콜라 (1300원)
	// 2번) 생수 (800원)
	// 3번) 사이다 (1200원)
	// 4번) 카페라떼 (1600원)
	// 5번) 아이스티 (1300원)

	// 1. 사용자가 넣은 돈과 요청하는 음료수 입력받기
	int money;
	printf("돈을 투입해주세요.");
	scanf("%d", &money);
	
	printf("1번 음료수) 콜라 (1,300원)\n");
	printf("2번 음료수) 생수 (800원)\n");
	printf("3번 음료수) 사이다 (1,200원)\n");
	printf("4번 음료수) 카페라떼 (1,600원)\n");
	printf("5번 음료수) 아이스티 (1,300원)\n");
	int button;
	scanf("%d", &button);

	// 2. 음료수 구매에 대한 연산
	//int rest = 0;		// 거스름돈 저장할 변수
	//switch (button) {
	//case 1:			// 콜라를 구입 (1300원)
	//	rest = money - 1300;	// 콜라 구입한 뒤의 거스름돈
	//	if (rest >= 0) {
	//		printf("콜라를 구매하셨습니다.\n");
	//		printf("거스름돈은 %d원입니다.\n", rest);
	//	}
	//	else {
	//		printf("돈이 모자랍니다. 다시 실행해주세요.");
	//	}
	//	break;
	//case 2:			// 생수를 구입 (800원)
	//	rest = money - 800;
	//	if (rest >= 0) {
	//		printf("생수를 구매하셨습니다.\n");
	//		printf("거스름돈은 %d원입니다.\n", rest);
	//	}
	//	else
	//	{
	//		printf("돈이 모자랍니다. 다시 실행해주세요.");
	//	}
	//	break;
	//case 3:			// 사이다를 구입 (1200원)
	//	rest = money - 800;
	//	if (rest >= 0) {
	//		printf("사이다를 구매하셨습니다.\n");
	//		printf("거스름돈은 %d원입니다.\n", rest);
	//	}
	//	else
	//	{
	//		printf("돈이 모자랍니다. 다시 실행해주세요.");
	//	}
	//	break;
	//case 4:			// 카페라떼를 구입 (1600원)
	//	rest = money - 800;
	//	if (rest >= 0) {
	//		printf("카페라떼를 구매하셨습니다.\n");
	//		printf("거스름돈은 %d원입니다.\n", rest);
	//	}
	//	else
	//	{
	//		printf("돈이 모자랍니다. 다시 실행해주세요.");
	//	}
	//	break;
	//case 5:			// 아이스티를 구입 (1300원)
	//	rest = money - 800;
	//	if (rest >= 0) {
	//		printf("아이스티를 구매하셨습니다.\n");
	//		printf("거스름돈은 %d원입니다.\n", rest);
	//	}
	//	else
	//	{
	//		printf("돈이 모자랍니다. 다시 실행해주세요.");
	//	}
	//	break;


	//}


// 2. 음료수 구매에 대한 연산
int rest = 0;		// 거스름돈 저장할 변수
switch (button) {
case 1:		// 콜라를 구입 (1300원)
	rest = money - 1300;	// 콜라 구입한 뒤의 거스름돈
	if (rest >= 0) {
		printf("콜라를 구매하셨습니다.\n");
	}
	break;
case 2:		// 생수를 구입 (800원)
	rest = money - 800;
	if (rest >= 0) {
		printf("생수를 구매하셨습니다.\n");
	}
	break;
case 3:		// 사이다를 구입 (1200원)
	rest = money - 1200;
	if (rest >= 0) {
		printf("사이다를 구매하셨습니다.\n");
	}
	break;
case 4:		// 카페라떼 구매 (1,600원)
	rest = money - 1600;
	if (rest >= 0) {
		printf("카페라떼를 구매하셨습니다.\n");
	}
	break;
case 5:		// 아이스티를 구매 (1300원)
	rest = money - 1300;
	if (rest >= 0) {
		printf("아이스티를 구매하셨습니다.\n");
	}
	break;
}

if (rest >= 0) {
	printf("거스름돈은 %d원입니다.\n", rest);
}
else {
	printf("돈이 모자랍니다. 다시 실행해주세요.\n");
}














}