///traverse a do while() loop
#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("-----print 0 to n----\n");
    /// print 0 to n
    i = 0;
    do{
        printf("%d\n", i);
        i++;
    }while(i <= n);

    /// print n to 0
    printf("-----print n to 0-----\n");

    i = n;
    do{
        printf("%d\n", i);
        i--;
    }while(i>=0);
}
