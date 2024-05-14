#include<stdio.h>
int main()
{
    ///What do mean by assignment operator?
    ///assignment operator (=)
     int a = 10; ///use a = anything not 10
     printf("Value of a : %d\n", a);
     a += 10;
     printf("Value of a+=10 : %d\n", a);
     a -= 3;
     printf("Value of a-=3 : %d\n", a);
     a *= 5;
     printf("Value of a*=5 : %d\n", a);
     a /= 10;
     printf("Value of a/=10 : %d\n", a);
}
/*
sample i/o:

Value of a : 10
Value of a+=10 : 20
Value of a-=3 : 17
Value of a*=5 : 85
Value of a/=10 : 8
*/
