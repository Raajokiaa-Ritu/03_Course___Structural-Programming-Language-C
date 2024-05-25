///sum of all numbers for 1 to n
#include<stdio.h>
int main()
{
    int number,i, sum;
    printf("Enter a number: ");
    scanf("%d", &number);

    sum = 0;
    for(i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    printf("sum [1 to n] : %d\n", sum);
}
