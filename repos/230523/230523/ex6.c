
#include <stdio.h>
int main() {

	int money = 0; // money :: 투입금액
	int m = 0; // m :: 잔액
	int button; // button :: 자판기 버튼

	while (1)
	{
		// 1. 메뉴 안내
		printf("1) 생수 800원\n");
		printf("2) 사이다 1,200원\n");
		printf("3) 콜라	1,300원\n");
		printf("4) 아이스티 1,500원\n");
		printf("5) 카페라떼 1,600원\n\n");

		printf("9) 넣을 돈 추가\n");
		printf("0) 프로그램 종료\n");
		printf("원하시는 버튼을 입력해주세요.\n\n");


		// 버튼 1 ~ 5 를 누르면,
		// 잔액이 부족할 때는 돈을 넣어달라는 문구
		// 잔액이 충분할 때는 해당 음료를 구매했고, 얼마 남았다 안내하는 문구
		// 버튼 6 ~ 8 누르면, 없는 버튼이다, 다시 눌러달라 안내
		// 버튼 9 를 누르면 돈 투입문구로 넘어감,
		// 버튼 0 을 누르면 종료 멘트와 함께 종료.

		scanf("%d", &button);	// 버튼을 입력받음
		//printf("%d번 버튼을 누르셨습니다.\n", button); // 받으면 몇 번 눌렀는지 안내

		switch (button)
		{
		case 1: // button =1
			if (m >= 800)
				{
					printf("생수를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					m -= 800;
					printf("잔액은 %d원입니다.\n\n", m);
				}

			else {
					printf("잔액이 %d원입니다.\n", m);
					printf("금액을 더 충전해주세요.\n\n");
				}
			break;
		case 2: // button =2
			if (m >= 1200)
				{
					printf("사이다를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					m -= 1200;
					printf("잔액은 %d원입니다.\n\n", m);
				}
			else {
					printf("잔액이 %d원입니다.\n", m);
					printf("금액을 더 충전해주세요.\n\n");
				}
			break;
		case 3: // button =3
			if (m >= 1300)
				{
					printf("콜라를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					m -= 1300;
					printf("잔액은 %d원입니다.\n\n", m);
				}
			else {
					printf("잔액이 %d원입니다.\n", m);
					printf("금액을 더 충전해주세요.\n\n");
				}
			break;
		case 4:
			if (m >= 1500)
				{
					printf("아이스티를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					m -= 1500;
					printf("잔액은 %d원입니다.\n\n", m);
				}
			else
				{
					printf("잔액이 %d원입니다.\n", m);
					printf("금액을 더 충전해주세요.\n\n");
				}
			break;
		case 5:
			if (m >= 1600)
				{
					printf("카페라떼를 선택하셨습니다!\n");
					printf("구매가 완료되었습니다.\n");
					m -= 1600;
					printf("잔액은 %d원입니다.\n\n", m);
				}
			else
				{
					printf("잔액이 %d원입니다.\n", m);
					printf("금액을 더 충전해주세요.\n\n");
				}
			break;

		case 9: // 넣을 돈 추가 버튼 눌렀을 때, 금액 입력 대기
			printf("얼마를 넣으시겠습니까?\n");
			scanf("%d", &money); // 투입 금액수 입력받음
			m += money;
			printf("현재 투입된 금액은 %d원이며, 잔고는 %d원입니다.\n\n", money, m);
			break;

		case 0: // 프로그램 종료 버튼 눌렀을 때, 종료 멘트 출력
			printf("감사합니다. 거스름돈은 %d원입니다.\n", m);
			return; 0;
		default: // 그 외 :: 6 ~ 8 입력받음.
			printf("해당 버튼은 없는 버튼입니다.\n다른 버튼을 눌러주세요.\n\n");

		}
	}

}