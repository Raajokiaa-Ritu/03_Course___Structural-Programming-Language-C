#include<stdio.h>
int main()
{
    ///how to check a number is EVEN or ODD
    int number;
    scanf("%d", &number);
    number = abs(number);

    int result = number % 2 ;

    switch(result)
    {
        case 0:
            printf("Even");
            break;
        case 1:
            printf("Odd");
            break;
        default:
            printf("Invalid statements");
    }
}
