#include<stdio.h>
int main()
{
    printf("Enter array size: \n");
    int N; scanf("%d", &N);
    int array1[N];
    printf("\nEnter array-1: \n");
    for(int i=0; i<N; i++){
        scanf("%d", &array1[i]);
    }

    int array2[N];
    printf("\nEnter array-2: \n");
    for(int i=0; i<N; i++){
        scanf("%d", &array2[i]);
    }
    printf("\nsubtraction of two array: \n");
    for(int i=0; i<N; i++){
        printf("%d ", array1[i]-array2[i]);
    }
}
/*
Enter array size:
3

Enter array-1:
5 6 7

Enter array-2:
8 9 10

subtraction of two array:
-3 -3 -3
*/
