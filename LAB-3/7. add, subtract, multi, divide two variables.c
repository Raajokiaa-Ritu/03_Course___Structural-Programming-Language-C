#include<stdio.h>

///addition, subtraction, multiplication and division of two variable
int main()
{
    int num1,num2;
    int add, sub, mult, div;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("\n(%d + %d) = %d\n", num1, num2, add);
    printf("(%d - %d) = %d\n", num1, num2, sub);
    printf("(%d * %d) = %d\n", num1, num2, mult);
    printf("(%d / %d) = %d\n", num1, num2, div);









}
