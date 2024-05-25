///5! = 5 x 4 x 3 x 2 x 1
///   = 1 x 2 x 3 x 4 x 5
///   = 120
/*
1 * 2 = 2
2 * 3 = 6
6 * 4 = 24
24 * 5 = 120
*/
#include<stdio.h>
int main()
{
    int factorial, result, i;
    printf("Enter a number : ");
    scanf("%d", &factorial);

    result = 1;
    for(i = 2; i<=factorial; i++)
    {
        result = result * i ;
    }
    printf("Factorial : %d\n", result);
}



