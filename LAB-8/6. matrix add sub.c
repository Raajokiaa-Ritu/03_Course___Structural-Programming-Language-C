#include<stdio.h>
int main()
{
    int row = 3, col = 3;
    int matrix[row][col], patrix[row][col], sum[row][col];
    printf("\n 1st Matrix\n");
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n 2nd Matrix\n");
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            scanf("%d", &patrix[i][j]);
        }
    }
    printf("\n Output\n");
    for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
            sum[i][j] =  matrix[i][j] + patrix[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
