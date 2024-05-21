#include<stdio.h>
int main(){
    ///num1 > num2
    ///num1 < num2
    ///num1 == num2
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        printf("%d > %d\n", num1, num2);
    }
    else if(num1 < num2){
        printf("%d < %d\n", num1, num2);
    }
    else{
        printf("%d == %d\n", num1, num2);
    }
}
