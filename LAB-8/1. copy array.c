#include<stdio.h>
int main(){
    int N=5;
    int array1[N];
    int array2[N];
    ///value nilam
    for(int i=1; i<= N; i++){
        scanf("%d", &array1[i]);
    }
    ///print array-1
    printf("\n array-1 \n");
    for(int i=1; i<= N; i++){
        printf("%d ", array1[i]);
    }
    printf("\n\n");
    ///copy to array-2
    for(int i=1; i<= N; i++){
        array2[i] = array1[i];
    }
    ///print array-1
    printf("\n array-1 \n");
    for(int i=1; i<= N; i++){
        printf("%d ", array2[i]);
    }
    printf("\n\n");
}
