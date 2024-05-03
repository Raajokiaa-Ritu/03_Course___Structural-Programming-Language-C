///Fahrenheit to Celsius : C = (F - 32) × 5/9
///Celsius to Fahrenheit : F = ((9×C)/ 5) + 32


#include<stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter Temperature in F : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius : %f\n\n", celsius);

    printf("Enter Temperature in C : ");
    scanf("%f", &celsius);

    fahrenheit = ((9* celsius)/5) + 32;
    printf("Temperature in Celsius : %f\n\n", fahrenheit);



}

