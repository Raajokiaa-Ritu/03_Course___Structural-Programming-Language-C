#include<stdio.h>

int main()
{
    int a, b, res;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    // printing a and b
    printf("a = %d \nb = %d\n\n", a, b);

    res = a + b; // addition
    printf("%d + %d = %d\n",a,b, res);
    res = a - b; // subtraction
    printf("%d - %d = %d\n",a,b, res);
    res = a * b; // multiplication
    printf("%d * %d = %d\n",a,b, res);
    float result = (float)a / b; // division
    printf("%d / %d = %.2f\n",a,b, result);
    res = a % b; // modulus
    printf("%d %% %d = %d\n",a,b, res);
    ///why did I used %% ?
}
/*
sample i/o:

Enter two number: 23 11
a = 23
b = 11

23 + 11 = 34
23 - 11 = 12
23 * 11 = 253
23 / 11 = 2.09
23 % 11 = 1
*/
