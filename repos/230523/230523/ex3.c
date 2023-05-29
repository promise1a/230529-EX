/*
자판기 프로그램 만들기 - 무한반복문 응용

- 1번) 생수 800원	- 2번) 사이다 1,200원
- 3번) 콜라 1,300원	- 4번) 아이스티 1,500원
- 5번) 카페라떼 1,600원

=> 무한반복문을 사용하여, 사용자가 종료할 때까지는
실행하는 프로그램을 작성하세요.

=> 사용자가 이용할 수 있는 버튼(*7)
1) 생수 구입	2) 사이다 구입
3) 콜라 구입	4) 아이스티 구입
5) 카페라떼 구입

9) 넣을 돈 추가
0) 프로그램 종료

9번을 실행하지 않으면 아무것도 입력이 안되게 설정
9-1~5
*/

#include <stdio.h>
int main() {

	// 1. 메뉴 안내
	printf("1) 생수 800원\n");
	printf("2) 사이다 1,200원\n");
	printf("3) 콜라	1,300원\n");
	printf("4) 아이스티 1,500원\n");
	printf("5) 카페라떼 1,600원\n\n");

	printf("9) 넣을 돈 추가\n");
	printf("0) 프로그램 종료\n");


	// 버튼 9 를 누르면 돈 투입문구로 넘어감,
	// 버튼 0 을 누르면 종료 멘트와 함께 종료.
	// 그 이외의 버튼을 누르면 계속 응답 기다림.(아무일도X)

	int button;
	scanf("%d", &button);
	//printf("%d번을 선택하셨습니다.\n", button);

	int rest = 0;

	int money = 0;

	while (1)
	{
		switch (button)
		{
		case 9: // 넣을 돈 추가 버튼 눌렀을 때, 금액 입력 대기
			button = 9;
			printf("돈을 넣어주세요.\n");
			scanf("%d", &money); // 투입 금액수 입력받음
			printf("현재까지의 금액은 %d원입니다.\n", money);
			return; 0;
		case 0: // 프로그램 종료 버튼 눌렀을 때, 종료 멘트 출력
			printf("감사합니다. 거스름돈은 %d원입니다.\n", rest);
			return; 0;
		default: // 그 외,
			scanf("%d", &button);
			{continue; }
		}
	}
	//int money;
	//scanf("%d", &money); // 투입 금액수 입력받음
	//printf("현재까지의 금액은 %d원입니다.\n", money);




	//int rest;

	switch (button)
	{
	case 1: // button =1
		rest = money - 800; // 거스름돈
		if (rest >= 0)
		{
			printf("생수를 구매하셨습니다.\n");
			printf("거스름돈은 %d원입니다.\n", rest);
		}

		else {
			printf("요금이 부족합니다.\n");
			printf("금액을 더 충전해주세요.\n");
		}
		break;
	case 2: // button =2
		rest = money - 1200; // 거스름돈
		if (rest >= 0)
		{
			printf("사이다를 구매하셨습니다.\n");
			printf("거스름돈은 %d원입니다.\n", rest);
		}
		else {
			printf("요금이 부족합니다.\n");
			printf("금액을 더 충전해주세요.\n");
		}
		break;
	case 3: // button =3
		rest = money - 1300; // 거스름돈
		if (rest >= 0)
		{
			printf("콜라를 구매하셨습니다.\n");
			printf("거스름돈은 %d원입니다.\n", rest);
		}
		else {
			printf("요금이 부족합니다.\n");
			printf("금액을 더 충전해주세요.\n");
		}
		break;
	case 4:
		rest = money - 1500; // 거스름돈
		if (rest >= 0)
		{
			printf("아이스티를 구매하셨습니다.\n");
			printf("거스름돈은 %d원입니다.\n", rest);
		}
		else
		{
			printf("요금이 부족합니다.\n");
			printf("금액을 더 충전해주세요.\n");
			break;
		}
	case 5:
		rest = money - 1600; // 거스름돈
		if (rest >= 0)
		{
			printf("카페라떼를 구매하셨습니다.\n");
			printf("거스름돈은 %d원입니다.\n", rest);
		}
		else
		{
			printf("요금이 부족합니다.\n");
			printf("금액을 더 충전해주세요.\n");
		}
		break;
	}

}
// 3. 추가 구매 여부(무한반복문)

// 4. 거스름돈 계산

// 5. 프로그램 종료

// 어제 작성한거 1회 보고 ex2로 재작성
