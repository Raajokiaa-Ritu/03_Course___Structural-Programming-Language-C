#include<stdio.h>
int main()
{
    int N; scanf("%d", &N);
    int array[N];
    for(int i=0; i<N; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<N; i++){
        printf("%d ", array[i]);
    }

}
/*
5
1 2 3 4 5
1 2 3 4 5
*/
