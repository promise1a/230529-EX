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


// 1. 사용자가 넣은 돈 입력받기
	int money;
	printf("돈을 넣어주세요. ");
	scanf("%d", &money);
	if (money < 800) {
		printf("돈이 모자랍니다. 다시 실행해주세요.\n");
		return 0;  // 즉시 종료
	}

	if (money >= 1300) {
		printf("1번 음료수) 콜라 (1,300원)\n");
	}
	if (money >= 800) {
		printf("2번 음료수) 생수 (800원)\n");
	}
	if (money >= 1200) {
		printf("3번 음료수) 사이다 (1,200원)\n");
	}
	if (money >= 1600) {
		printf("4번 음료수) 카페라떼 (1,600원)\n");
	}
	if (money >= 1200) {
		printf("5번 음료수) 아이스티 (1,300원)\n");
	}
	int button;
	scanf("%d", &button);

	int rest = 0;
	switch (button) {
	case 1:		
		rest = money - 1300;	
		printf("콜라를 구매하셨습니다.\n");
		
		break;
	case 2:		
		rest = money - 800;
		printf("생수를 구매하셨습니다.\n");
		
		break;
	case 3:	
		rest = money - 1200;
		printf("사이다를 구매하셨습니다.\n");
	
		break;
	case 4:
		rest = money - 1600;
		printf("카페라떼를 구매하셨습니다.\n");
		
		break;
	case 5:
		rest = money - 1300;
		printf("아이스티를 구매하셨습니다.\n");
	}

	printf("거스름돈은 %d원입니다.\n", rest);
	

	// 1500원 넣었을때, 1600원 카페라떼가 안나오는 이유
	// 메뉴 안내때 money가 메뉴가격 이상이어야 출력하도록
	// 설정했기 때문에.





}
