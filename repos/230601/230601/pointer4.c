#include <stdio.h>
// ��Ģ���� ���� �����



int main()
{ 
	// �� 2�� �Է¹ޱ�
	int a, b;
	scanf("%d %d\n", &a ,&b);

	// ��Ģ���� �����ϱ�
	int Add;
	Add = a + b;
	printf("%d + %d �� %d �Դϴ�.\n", &a, &b, &Add);

	int Sub;
	Add = a - b;
	printf("%d - %d �� %d �Դϴ�.\n", &a, &b, &Sub);

	int Mul;
	Add = a * b;
	printf("%d x %d �� %d �Դϴ�.\n", &a, &b, &Mul);

	double Div;
	Add = (double)a / b;
	printf("%d + %d �� %lf �Դϴ�.\n", &a, &b, &Div);

	return 0;

}