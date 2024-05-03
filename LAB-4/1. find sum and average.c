#include<stdio.h>
///Find summation and average of 3 number
/*
sum = a+b+c
avg = (a+b+c) / 3
*/
int main(){
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    printf("Enter 3rd number : ");
    scanf("%d", &c);

    int sum = a+b+c;
    int average = sum / 3 ;

    printf("sum : %d \navg :%d", sum, average);
}
