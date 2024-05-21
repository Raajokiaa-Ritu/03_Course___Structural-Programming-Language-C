///only use if ladder for multiple statements
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if(x >= 6){
        printf("Number >= 6\n");
    }
    if(x >= 5){
        printf("Number = 5\n");
    }
    if(x >= 4){
        printf("Number = 4\n");
    }
    if(x >= 3){
        printf("Number = 3\n");
    }
    if(x >= 2){
        printf("Number = 2\n");
    }
    else {
        printf("Number <= 1\n");
    }
}
