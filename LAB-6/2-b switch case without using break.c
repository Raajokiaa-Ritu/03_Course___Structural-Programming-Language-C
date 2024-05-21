#include<stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    switch(x){
        case 6:
            printf("number = 6\n");
        case 5:
            printf("number = 5\n");
        case 4:
            printf("number = 4\n");
        case 3:
            printf("number = 3\n");
        case 2:
            printf("number = 2\n");
        default:
            printf("value not matched\n");
    }
}
