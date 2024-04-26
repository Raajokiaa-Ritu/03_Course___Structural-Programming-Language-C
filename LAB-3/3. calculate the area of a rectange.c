#include<stdio.h>

int main()
{

/*
area = height * weight
*/
    float height, weight, area;

    printf("Enter height of a rectangle : ");
    scanf("%f", &height);

    printf("Enter weight of a rectangle : ");
    scanf("%f", &weight);

    area = height * weight ;

    printf("\nArea : %.4f\n\n\n", area);
    //printf("Area : %d", (height * weight));



}
