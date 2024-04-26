#include<stdio.h>

///addition, subtraction, multiplication and division of two variable
int main()
{
    int num1,num2, num3;
    int add, sub, mult, div;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    printf("Enter 3rd number : ");
    scanf("%d", &num3);

    add = num1 + num2 + num3;
    sub = (num1 - num2) - num3;
    mult = (num1 * num2) * num3;
    div = (num1 / num2) / num3;
    printf("\n----simple calculator----\n\n");
    printf("(%d + %d + %d) = %d\n", num1, num2, num3, add);
    printf("(%d - %d) - %d = %d\n", num1, num2, num3, sub);
    printf("(%d * %d) * %d = %d\n", num1, num2, num3, mult);
    printf("(%d / %d) / %d = %d\n", num1, num2, num3, div);
}
