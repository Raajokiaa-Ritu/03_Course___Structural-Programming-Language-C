#include<stdio.h>
int main()
{
    ///simple calculator
    int a,b;
    char sign;

    scanf("%d %c %d", &a, &sign, &b);
    if(sign == '+')
    {
        printf("%d %c %d = %d\n", a, sign, b, a+b);
    }
    else if(sign == '-')
    {
        printf("%d %c %d = %d\n", a, sign, b, a-b);
    }
    else if(sign == '*')
    {
        printf("%d %c %d = %d\n", a, sign, b, a*b);
    }
    else if(sign == '/')
    {
        printf("%d %c %d = %0.2f\n", a, sign, b, (float)a/b);
    }
    else if(sign == '%')
    {
        printf("%d %c %d = %d\n", a, sign, b, a%b);
    }
    else
    {
        printf("Invalid Sign");
    }
}
