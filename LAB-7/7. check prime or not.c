#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("\n");

    if(n<=1){ //n =  0,1
        printf("Not prime");
    }
    else if(n == 2){
        printf("Prime!!");
    }
    else if(n!=2 && n % 2 == 0){ //all even numbers
        printf("Not prime");
    }
    else{
        bool check = true;
        for(int i = 2 ; i<= n - 1 ; i++){
            if(n % i == 0){
                printf("Not prime");
                check = false;
                break;
            }
        }
        if(check == true){
            printf("Prime!!");
        }
    }
    printf("\n\n\n");
}
