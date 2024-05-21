#include<stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if(marks>=80 && marks<=100){
        printf("You got \"A+\" \n");
    }
    else if(marks>=75 && marks<=79){
        printf("You got \"A\" \n");
    }
    else if(marks>=70 && marks<=74){
        printf("You got \"A-\" \n");
    }
    else if(marks>=65 && marks<=69){
        printf("You got \"B+\" \n");
    }
    else if(marks>=60 && marks<=64){
        printf("You got \"B\" \n");
    }
    else{
        printf("You failed\n");
    }
}
