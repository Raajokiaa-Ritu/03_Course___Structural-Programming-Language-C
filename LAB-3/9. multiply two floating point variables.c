#include<stdio.h>

int main()
{
    float num1, num2;
    printf("Enter 1st number : ");
    scanf("%f", &num1);

    printf("Enter 2nd number : ");
    scanf("%f", &num2);

    float multiplication;
    multiplication = num1 * num2;

    printf("\n multiplication is : %f\n", multiplication);
    printf("\n multiplication is : %0.3f\n", multiplication);
    printf("\n (%f * %f) = %f \n",num1, num2, multiplication);

}
