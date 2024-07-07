#include<stdio.h>
int main()
{
    printf("Enter array size : ");
    int N,M; scanf("%d %d", &N, &M);
    int array1[N][M];
    printf("Enter array-1 : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Output array-1 : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    int array2[N][M];
    printf("\nEnter array-2 : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &array2[i][j]);
        }
    }
    printf("Output array-2 : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
}
/*
Enter array size : 3 4
Enter array-1 :
1 2 3 4
4 3 2 1
5 6 7 8
Output array-1 :
1 2 3 4
4 3 2 1
5 6 7 8

Enter array-2 :
0 0 0 -1
2 3 4 7
9 8 7 6
Output array-2 :
0 0 0 -1
2 3 4 7
9 8 7 6
*/
