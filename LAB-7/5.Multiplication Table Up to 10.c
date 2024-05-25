///namata code korte paro?

/// 1 * 5 = 5
/// 2 * 5 = 10
/// 3 * 5 = 15
/// 4 * 5 = 20
/// i * n = (i*n)
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter a number : ");
   scanf("%d", &n);

   for(i = 1 ; i <= 10 ; i++)
   {
       printf("%d * %d = %d\n",i, n, (i*n));
   }
}
/*
Enter a number : 10
1 * 10 = 10
2 * 10 = 20
3 * 10 = 30
4 * 10 = 40
5 * 10 = 50
6 * 10 = 60
7 * 10 = 70
8 * 10 = 80
9 * 10 = 90
10 * 10 = 100
*/
