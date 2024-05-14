#include<stdio.h>

int main()
{
    int a, b, res;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    // printing a and b
    printf("a = %d \nb = %d\n\n", a, b);

    res = a + b; // addition
    printf("a + b = %d\n", res);
    res = a - b; // subtraction
    printf("a - b = %d\n", res);
    res = a * b; // multiplication
    printf("a * b = %d\n", res);
    float result = (float)a / b; // division
    printf("a / b = %.2f\n", result);
    res = a % b; // modulus
    printf("a %% b = %d\n", res);
}

/*
sample i/o:
Enter two number: 23 31
a = 23
b = 31

a + b = 54
a - b = -8
a * b = 713
a / b = 0.74
a % b = 23

*/
