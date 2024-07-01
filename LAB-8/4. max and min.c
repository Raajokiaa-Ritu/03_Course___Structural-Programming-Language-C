#include<stdio.h>
int main(){
    int N;
    printf("Value koyta? = ");
    scanf("%d", &N);
    int array[N];
    for(int i=1; i<= N; i++){
        scanf("%d", &array[i]);
    }

    int ans1 = -1;
    for(int i=1; i<=N; i++){
        if(array[i] >= ans1){
            ans1 = array[i];
        }
    }
    printf("max = %d\n", ans1);

    int ans2 = 99999999999;
    for(int i=1; i<=N; i++){
        if(array[i] <= ans1){
            ans1 = array[i];
        }
    }
    printf("min = %d\n", ans1);


}
