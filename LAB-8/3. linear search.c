#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int array[N];
    for(int i=1; i<= N; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter element to Search: ");
    int value, check=0;
    scanf("%d", &value);
    for(int i=1; i<= N; i++){
        if(array[i] == value){
            check=1;
        }
    }
    if(check == 1){
        printf("Value found\n");
    }
    else{
        printf("Value Not found\n");
    }
}
