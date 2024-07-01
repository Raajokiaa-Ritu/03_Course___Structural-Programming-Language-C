#include<stdio.h>
int main(){
    int N;
    printf("Value koyta? = ");
    scanf("%d", &N);
    int array[N];
    for(int i=1; i<= N; i++){
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for(int i=1; i<= N; i++){
        sum = sum + array[i];
    }
    printf("sum = %d\n", sum);
    printf("average = %d", sum/N);
}
