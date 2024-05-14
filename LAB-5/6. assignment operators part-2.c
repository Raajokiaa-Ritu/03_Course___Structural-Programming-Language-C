#include<stdio.h>

int main()
{
     int x = 50; ///use x = any other values
     x %= 3; ///x = x % 3 = 50 % 3 = ?
     printf("modulus(%%) value: %d\n", x);

     x = 15;
     x &= 3; ///x = x & 3 = 15 & 3 = ?
     printf("and(&) value: %d\n", x);

     x = 3;
     x |= 3; /// x = x | 3 = 3 | 3 = ?
     printf("or(|) value: %d\n", x);

     x = 5;
     x ^= 3; /// x = x^3 = 5^3 = ?
     printf("xor(^) value: %d\n", x);
     ///N.B. a^a = 0, check this out.
}
/*
sample i/o:

modulus(%) value: 2
and(&) value: 3
or(|) value: 3
xor(^) value: 6

*/
