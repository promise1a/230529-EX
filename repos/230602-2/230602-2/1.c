#include <stdio.h>  

void local(int);



int main(void)

{

    int var = 10;

    printf("���� var�� �ʱ갪�� %d�Դϴ�.\n", var);



    local(var);

    printf("local() �Լ� ȣ�� �� ���� var�� ���� %d�Դϴ�.\n", var);
    printf("local() �Լ� ȣ�� �� ���� local(var)�� ���� %d�Դϴ�.\n", local(var));

    return 0;

}



void local(int num)

{

    num += 10;

}