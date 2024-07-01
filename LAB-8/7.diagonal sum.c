#include<stdio.h>
int main()
{
    int row = 3, col = 3;
    int matrix[row][col];

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum=0;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==j){
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("%d", sum);

}
