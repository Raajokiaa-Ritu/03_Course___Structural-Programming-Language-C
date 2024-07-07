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
    for(int i=0; i<N; i++){
        printf("%d ", array1[i]);
    }
    int array2[N];
    printf("\nEnter array-2: \n");
    for(int i=0; i<N; i++){
        scanf("%d", &array2[i]);
    }
    for(int i=0; i<N; i++){
        printf("%d ", array2[i]);
    }
}
/*
Enter array size:
5

Enter array-1:
1 2 3 4 5
1 2 3 4 5
Enter array-2:
10 20 30 40 50
10 20 30 40 50
*/
