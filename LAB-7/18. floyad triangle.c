#include<stdio.h>
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
int main(){
    int n, row, col;
    printf("Enter n : ");
    scanf("%d", &n);

    int count = 1;
    for(row = 1; row<= n; row++)
    {
        for(col = 1; col<= row; col++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}
