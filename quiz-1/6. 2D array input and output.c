#include<stdio.h>
int main()
{
    printf("Enter array size : ");
    int N,M; scanf("%d %d", &N, &M);
    int array[N][M];
    printf("Enter input : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("Output : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
/*
Enter array size : 2 2
Enter input :
1 2
3 4
Output :
1 2
3 4

*/
