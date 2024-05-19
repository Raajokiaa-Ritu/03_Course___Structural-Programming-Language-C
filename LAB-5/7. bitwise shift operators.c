#include<stdio.h>
///left shift(<<) and right shift(>>)

int main()
{

    int a,x;
    printf("Enter a value a : ");
    scanf("%d", &a);
    printf("Number of shift x : ");
    scanf("%d", &x);

    ///left shift: a << x  = a * 2^x
    /// a<<x means : shift 'a' to x moves left
    int left_shift = a << x;
    printf("\n(%d << %d) = %d\n\n", a, x, left_shift);

    ///right shift: a >> x  = a / 2^x
    /// a>>x means : shift 'a' to x moves right
    int right_shift = a >> x;
    printf("(%d >> %d) = %d\n\n", a, x, right_shift);
}
/*
sample i/o:
Enter a value a : 10
Number of shift x : 2

(10 << 2) = 40

(10 >> 2) = 2

*/
