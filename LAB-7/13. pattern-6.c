#include<stdio.h>
/*
printf("%d", row % 2);
printf("%d", col % 2);
printf("%d", row);
printf("%d", col);
printf("*");
printf("%c", 96+row);
printf("%c", 96+col);
printf("%c", 64+row);
printf("%c", 64+col);
printf("#");
*/
int main(){
    int n, row, col;
    printf("Enter n : ");
    scanf("%d", &n);

    for(row = 1; row<= n; row++){
        for(col = 1; col <= n-row; col++){
            printf(" ");
        }
        for(col = 1; col<= row; col++){
            printf("%d", row % 2);
        }
        printf("\n");
    }
    for(row = n-1; row >= 1; row--){
        for(col = 1; col <= n-row; col++){
            printf(" ");
        }
        for(col = 1; col<= row; col++){
            printf("%d", row % 2);
        }
        printf("\n");
    }

}
