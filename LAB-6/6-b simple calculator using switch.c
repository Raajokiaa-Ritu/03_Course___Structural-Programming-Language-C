#include<stdio.h>
int main()
{
    ///simple calculator
    int a,b;
    char sign;
    scanf("%d %c %d", &a, &sign, &b);
    switch(sign)
    {
    case '+':
        printf("%d %c %d = %d\n", a, sign, b, a+b);
        break;
    case '-':
        printf("%d %c %d = %d\n", a, sign, b, a-b);
        break;
    case '*':
        printf("%d %c %d = %d\n", a, sign, b, a*b);
        break;
    case '/':
        printf("%d %c %d = %0.2f\n", a, sign, b, (float)a/b);
        break;
    case '%':
        printf("%d %c %d = %d\n", a, sign, b, a%b);
        break;
    default:
        printf("Invalid Sign");
    }

}
