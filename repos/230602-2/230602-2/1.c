#include <stdio.h>  

void local(int);



int main(void)

{

    int var = 10;

    printf("변수 var의 초깃값은 %d입니다.\n", var);



    local(var);

    printf("local() 함수 호출 후 변수 var의 값은 %d입니다.\n", var);
    printf("local() 함수 호출 후 변수 local(var)의 값은 %d입니다.\n", local(var));

    return 0;

}



void local(int num)

{

    num += 10;

}