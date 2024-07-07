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
    printf("\nsum of two array: \n");
    for(int i=0; i<N; i++){
        printf("%d ", array1[i]+array2[i]);
    }
}
/*
Enter array size:
4

Enter array-1:
1 1 1 1

Enter array-2:
6 6 6 6

sum of two array:
7 7 7 7
*/
