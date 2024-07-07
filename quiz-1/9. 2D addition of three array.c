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

    int array2[N][M];
    printf("\nEnter array-2 : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &array2[i][j]);
        }
    }
    int array3[N][M];
    printf("\nEnter array-3 : \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &array3[i][j]);
        }
    }
    printf("sum of three array: \n");
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", array1[i][j]+array2[i][j]+array3[i][j]);
        }
        printf("\n");
    }
}
/*
Enter array size : 2 2
Enter array-1 :
1 1
1 1

Enter array-2 :
1 1
1 1

Enter array-3 :
1 1
1 1
sum of three array:
3 3
3 3

*/
