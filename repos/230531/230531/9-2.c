// 임의의 3개 정수를 배열에 저장해주세요.
// 사용자가 3개의 정수를 입력 받아서
// 몇개가 맞았는지 알려주십시오.
// (3개 숫자를 모두 입력받은 후)
// 중요사항> 사용자가 정수를
//           몇개 입력하였는지 알려주셔야 합니다.
#include <stdio.h>
int main(void)
{
	int arr1[3] = { -3,7,9 };

	int arr2[3]; // 사용자에게 입력받을 정수 배열
	printf("3개의 정수를 입력해주세요.\n");


	scanf("%d %d %d", &arr2[0], &arr2[1], &arr2[2]);
	printf("%d %d %d를 입력받았습니다.\n", arr2[0], arr2[1], arr2[2]);
	// for 문으로 바꿔서 


// 사용자가 입력한 정수의 개수 알려주기.

int count = 0; // 맞춘 개수
for (int i = 0; i < 3; i++)
{
	if (arr1[i] == &arr2[0]) // 배열 안의 값이 A와 일치?
	{
		//printf("배열 %d번째가 %d와 값이 같습니다.\n", arr1[i], A);
		count++;
	}
}
for (int i = 0; i < 3; i++)
{
	if (arr1[i] == &arr2[1])
	{
		//printf("배열 %d번째가 %d와 값이 같습니다.\n", arr1[i], B);
		count++;
	}
}
for (int i = 0; i < 3; i++)
{
	if (arr1[i] == &arr2[2])
	{
		//printf("배열 %d번째가 %d와 값이 같습니다.\n", arr1[i], C);
		count++;
	}
}
// for 로 j 선언해서 더 줄일 수

printf("%d개의 정수를 맞히셨습니다.\n", count);

}

// 다른 사람들이 쓴 2개 txt파일과 비교