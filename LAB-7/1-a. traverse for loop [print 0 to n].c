///traverse a for() loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("-----print 0 to n----\n");
    /// print 0 to n
    for(i = 0 ; i<=n; i++)
    {
        printf("hello %d\n", i);
    }

    /// print n to 0
    printf("-----print n to 0-----\n");
    for(i = n ; i>= 0 ; i--)
    {
        printf("hello %d\n", i);
    }

}
