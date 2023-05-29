
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
	printf("원하시는 버튼을 입력해주세요.\n");


	// 버튼 9 를 누르면 돈 투입문구로 넘어감,
	// 버튼 0 을 누르면 종료 멘트와 함께 종료.
	// 그 이외의 버튼을 누르면 계속 응답 기다림.(아무일도X)

	int button;
	scanf("%d", &button);
	//printf("%d번을 선택하셨습니다.\n", button);

	int rest = 0;

	int money = 0;

	/*int m =+ money*/

	while (1)
	{
		switch (button)
		{
		case 9: // 넣을 돈 추가 버튼 눌렀을 때, 금액 입력 대기
			/*button = 9;*/
			printf("돈을 넣어주세요.\n");
			scanf("%d", &money); // 투입 금액수 입력받음
			printf("현재 투입된 금액은 %d원입니다.\n\n", money);

			printf("1) 생수 800원\n");
			printf("2) 사이다 1,200원\n");
			printf("3) 콜라	1,300원\n");
			printf("4) 아이스티 1,500원\n");
			printf("5) 카페라떼 1,600원\n\n");

			printf("9) 넣을 돈 추가\n");
			printf("0) 프로그램 종료\n");
			printf("원하시는 버튼을 입력해주세요.\n");
			scanf("%d", &button);

			switch (button)
			{
			case 1: // button =1
				rest = money - 800; // 거스름돈
				if (rest >= 0)
				{
					printf("생수를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					printf("현재 금액은 %d원입니다.\n", rest);
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
					printf("사이다를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					printf("현재 금액은 %d원입니다.\n", rest);
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
					printf("콜라를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					printf("현재 금액은 %d원입니다.\n", rest);
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
					printf("아이스티를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					printf("현재 금액은 %d원입니다.\n", rest);
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
					printf("카페라떼를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					printf("현재 금액은 %d원입니다.\n", rest);
				}
				else
				{
					printf("요금이 부족합니다.\n");
					printf("금액을 더 충전해주세요.\n");
				}
				break;
			}
			printf("\n1) 생수 800원\n");
			printf("2) 사이다 1,200원\n");
			printf("3) 콜라	1,300원\n");
			printf("4) 아이스티 1,500원\n");
			printf("5) 카페라떼 1,600원\n\n");

			printf("9) 넣을 돈 추가\n");
			printf("0) 프로그램 종료\n");
			printf("원하시는 버튼을 입력해주세요.\n");
			scanf("%d", &button);
			{continue; }
			// 여기까지 정상출력됨
			// 이후에는 메뉴 선택
			
			
			return; 0;
		case 0: // 프로그램 종료 버튼 눌렀을 때, 종료 멘트 출력
			printf("감사합니다. 거스름돈은 %d원입니다.\n", rest);
			return; 0;
		default: // 그 외,
			scanf("%d", &button);
			{continue; }
		}
	}


	

}
//switch (button)
//{
//case 1: // button =1
//	rest = money - 800; // 거스름돈
//	if (rest >= 0)
//	{
//		printf("생수를 구매하셨습니다.\n");
//		printf("거스름돈은 %d원입니다.\n", rest);
//	}
//
//	else {
//		printf("요금이 부족합니다.\n");
//		printf("금액을 더 충전해주세요.\n");
//	}
//	break;
//case 2: // button =2
//	rest = money - 1200; // 거스름돈
//	if (rest >= 0)
//	{
//		printf("사이다를 구매하셨습니다.\n");
//		printf("거스름돈은 %d원입니다.\n", rest);
//	}
//	else {
//		printf("요금이 부족합니다.\n");
//		printf("금액을 더 충전해주세요.\n");
//	}
//	break;
//case 3: // button =3
//	rest = money - 1300; // 거스름돈
//	if (rest >= 0)
//	{
//		printf("콜라를 구매하셨습니다.\n");
//		printf("거스름돈은 %d원입니다.\n", rest);
//	}
//	else {
//		printf("요금이 부족합니다.\n");
//		printf("금액을 더 충전해주세요.\n");
//	}
//	break;
//case 4:
//	rest = money - 1500; // 거스름돈
//	if (rest >= 0)
//	{
//		printf("아이스티를 구매하셨습니다.\n");
//		printf("거스름돈은 %d원입니다.\n", rest);
//	}
//	else
//	{
//		printf("요금이 부족합니다.\n");
//		printf("금액을 더 충전해주세요.\n");
//		break;
//	}
//case 5:
//	rest = money - 1600; // 거스름돈
//	if (rest >= 0)
//	{
//		printf("카페라떼를 구매하셨습니다.\n");
//		printf("거스름돈은 %d원입니다.\n", rest);
//	}
//	else
//	{
//		printf("요금이 부족합니다.\n");
//		printf("금액을 더 충전해주세요.\n");
//	}
//	break;
//}