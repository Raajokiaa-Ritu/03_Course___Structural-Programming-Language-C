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
    int array3[N];
    printf("\nEnter array-3: \n");
    for(int i=0; i<N; i++){
        scanf("%d", &array3[i]);
    }
    printf("\nsum of three array: \n");
    for(int i=0; i<N; i++){
        printf("%d ", array1[i]+array2[i]+array3[i]);
    }
}
/*
Enter array size:
7

Enter array-1:
10 20 30 40 50 60 70

Enter array-2:
-1 -1 -1 -2 -2 -4 -5

Enter array-3:
0 0 0 0 0 0 0

sum of three array:
9 19 29 38 48 56 65
*/
