#include <stdio.h>

int main()
{
	// * 자판기 프로그램 만들기 (무한반복문 응용)
	int money = 0;	// 사용자가 자판기에 넣은 총 액수
	while (1) {
		// 버튼 소개하는 출력문
		printf("1번) 생수 구매 (800원)\n");
		printf("2번) 사이다 구매 (1,200원)\n");
		printf("3번) 콜라 구매 (1,300원)\n");
		printf("4번) 아이스티 구매 (1,500원)\n");
		printf("5번) 카페라떼 구매 (1,600원)\n");
		printf("9번) 넣을 돈 추가\n");
		printf("0번) 프로그램 종료\n");

		// 사용자가 누르는 버튼 입력받기
		printf("버튼을 눌러주세요 ");
		int button;
		scanf("%d", &button);

		// 입력한 버튼 번호에 따른 명령문 작성하기
		int plus;	// 사용자가 추가할 돈
		int want;
		switch (button) {
		case 1:		// 생수 구입 (800원)
			want = 800;
			if (money >= want) {	// 생수를 구매할 수 있을 경우
				printf("생수를 선택하였습니다!\n");
			}
			break;
		case 2:		// 사이다 구입 (1200원) 
			want = 1200;
			if (money >= want) {	// 사이다를 구매할 수 있는 경우
				printf("사이다를 선택하였습니다!\n");
			}
			break;
		case 3:		// 콜라 구입 (1300원)
			want = 1300;
			if (money >= want) {	// 콜라를 구매할 수 있는 경우
				printf("콜라를 선택하였습니다!\n");
			}
			break;
		case 4:		// 아이스티 구입 (1500원)
			want = 1500;
			if (money >= want) {
				printf("아이스티를 선택하였습니다!\n");
			}
			break;
		case 5:		// 카페라떼 구입 (1600원)
			want = 1600;
			if (money >= want) {
				printf("카페라떼를 선택하였습니다!\n");
			}
			break;
		case 9:
			// 돈을 추가하는 기능
			printf("돈을 추가해주세요 ");
			scanf("%d", &plus);
			money += plus;
			printf("현재까지 남은 금액은 %d원입니다.\n\n", money);
			continue;	// 얘를 만나면, 무한반복문의 첫 구간으로 감
		case 0:
			// 프로그램 종료 (거스름돈 출력하고 종료)
			// 여기에서 거스름돈은, 여기에 다다랐을 때의 money값
			printf("이용해주셔서 감사합니다. 거스름돈은 %d원입니다.\n\n", money);
			return 0;	// 즉시 종료
		default:	// 사용자가 버튼을 잘못 눌렀을 경우
			printf("잘못 누르셨습니다. 다시 입력해주세요.\n\n");
			continue;	// 얘를 만나면, 무한반복문의 첫 구간으로 감
		}

		// 1-5번 기능에 대한 추가 명령문을 작성할 예정
		if (money >= want) {
			money -= want;
			printf("구매가 완료되었습니다. 남은 금액은 %d원입니다.\n\n", money);
		}
		else {
			printf("돈이 모자랍니다. 9번을 눌러 돈을 더 넣어주세요.\n\n");
		}
	}
}