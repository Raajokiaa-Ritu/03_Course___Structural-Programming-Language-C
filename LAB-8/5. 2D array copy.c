#include<stdio.h>
int main()
{
    int row = 3;
    int col = 3;
    int matrix[row][col];
    int patrix[row][col];

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n Output\n");
    for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
            patrix[i][j] = matrix[i][j];
        }
        printf("\n");
    }
    printf("\n copy to another matrix\n");
    for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
            printf("%d ", patrix[i][j]);
        }
        printf("\n");
    }
}
