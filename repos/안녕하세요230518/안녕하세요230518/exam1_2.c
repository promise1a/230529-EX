#include <stdio.h>

int main() {

	//아래의 양식대로 출력을 수행하기
	
	//안녕하세요.[각자 이름]이라고 합니다.
	//	제 나이는 <age>살입니다.
	//	제 키는 <height>cm입니다.
	//	제 혈액형은 <blood>형입니다.
	//	잘 부탁드립니다.

	//	[]부분은 임의로 출력문에 넣어서 적용
	//	<>부분은 변수를 초기화하여 값을 불러들이는 식으로 출력

	// 변수 :: age(int), height(double), blood(char)

	int age = 25;
	double height = 171.1;
	char blood = 'A';

	printf("안녕하세요. 이유나라고 합니다.\n");
	printf("제 나이는 %d살입니다.\n", age);
	printf("제 키는 %.1fcm입니다.\n", height);
	printf("제 키는 %.3fcm입니다.\n", height);
	// %.1 :: 소수 첫째자리까지,  %.3 :: 소수 셋째자리까지
	printf("제 혈액형은 %c형입니다.\n", blood);
	printf("잘 부탁드립니다.\n");




}