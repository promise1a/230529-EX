#include <stdio.h>

int main() {

	// 1. 입력 받기
	long long int A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);

	// 2. (A+B)%C 값 구하고 출력하기
	printf("%lld\n", (A + B) % C);

	// 3. ((A%C) + (B%C))%C
	printf("%lld\n", ((A % C) + (B % C)) % C);

	// 4. (A×B)%C
	printf("%lld\n", (A*B) % C);


	// 5. ((A%C) × (B%C))%C
	printf("%lld\n", ((A % C)*(B % C)) % C);

}