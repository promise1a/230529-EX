//6.[main에서만 작성]
//데이터의 개수(n)를 입력받고, n개만큼 정수형 데이터를 입력받는다.
//이 데이터들의 최대값, 최소값, 합계, 평균을 출력하여라(배열 이용X)

#include <stdio.h>

int main()
{

	int number, n; // n은 입력받을 데이터의 갯수
	scanf("%d", &n); // n에 정수 하나를 입력받음

	int max, min, sum, avg;

	int num;
	scanf("%d", &num); // n에 정수 하나를 입력받는다(n=1)

	max = num;
	min = num;
	sum = num;
	avg = num;

	for (int i=2;i<=n;i++)
		// i은 2이고, 반복문구 실행 후 i++; i가 n보다 크면 탈출
		// i가 n이 될 때 까지 i에 정수 입력값 하나를 받는다.
	{
		scanf("%d", &i); // i에 정수 하나를 입력받는다.
		if (num <i)
		{
			max = i;
		}
		else if (num >= i)
		{
			min = num;
		}
		// 최대값, 최소값 끝

		sum = num + i;
		// 합계 끝

		avg = (double)(sum) / n;
		// 평균 끝
	}
	// for 반복문 끝
	printf("최대값은 %d입니다.\n", max);
	printf("최소값은 %d입니다.\n", min);
	printf("합계는 %d입니다.\n", sum);
	printf("평균은 %d입니다.\n", avg);

}

/*

[콘솔창]

8
*
**
***
****
*****
******
*******
********


*/