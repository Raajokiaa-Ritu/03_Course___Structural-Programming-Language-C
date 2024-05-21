#include<stdio.h>
int main()
{
    ///how to check a number is EVEN or ODD
    int number;
    scanf("%d", &number);
    number = abs(number);
    int result = number % 2 ;

    if(result == 0)
    {
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
