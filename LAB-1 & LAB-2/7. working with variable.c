#include<stdio.h>

int main()
{
    ///variable is a changeable entity, How?

    int num = 5; // now num variable storing 5
    num = 6 ; // num is replaced by 6
    num = 11; // num is replace by 11

    // at last num = 11 is final
    printf("the value : %d", num);
    printf("\n"); ///Don't forget \n


    ///how to copy variable?

    int num1 = 1022, num2;

    // we can copy the value of num1 in num2

    num2 = num1; // so num2 is also holding similar value, num2=1022

    printf("copying variable: num1 = %d \nnum2 = %d", num1, num2);

}
