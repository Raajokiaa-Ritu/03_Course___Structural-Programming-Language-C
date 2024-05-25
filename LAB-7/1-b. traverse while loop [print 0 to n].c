///traverse a while() loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("-----print 0 to n----\n");
    /// print 0 to n
    i=0;
    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    /// print n to 0
    printf("-----print n to 0-----\n");
    i = n;
    while( i >= 0)
    {
        printf("%d\n", i);
        i--;
    }
}
