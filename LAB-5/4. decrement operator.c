#include<stdio.h>
int main()
{
    ///1. pre-decrement: --x
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n1.main value: %d\n", number);
    printf("2.after pre-decrement: %d\n",--number);
    --number;
    printf("\n3.again decrement value: %d\n", number);


    ///2. post-decrement: x--
    printf("\n\nEnter a number: ");
    scanf("%d", &number); /// let, number = 7

    printf("\n1.main value: %d\n", number);///number = 7
    printf("2.after post-decrement: %d\n",number--);///number = 7
    ///Now, number = number + 1 = 7 + 1 = 8
    number--; ///number = number + 1 = 8 + 1 = 9
    printf("\n3.again decrement value: %d\n", number); ///number = 9
}
/*
sample i/o:

Enter a number: 12

1.main value: 12
2.after pre-decrement: 11

3.again decrement value: 10


Enter a number: 9

1.main value: 9
2.after post-decrement: 9

3.again decrement value: 7
*/
