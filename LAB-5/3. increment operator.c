#include<stdio.h>

int main()
{
    ///1. pre-increment: ++x
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n1.main value: %d\n", number);
    printf("2.after pre-increment: %d\n",++number);
    ++number;
    printf("\n3.again incremented value: %d\n", number);


    ///2. post-increment: x++
    printf("\n\nEnter a number: ");
    scanf("%d", &number); /// let, number = 7

    printf("\n1.main value: %d\n", number);///number = 7
    printf("2.after post-increment: %d\n",number++);///number = 7
    ///Now, number = number + 1 = 7 + 1 = 8
    number++; ///number = number + 1 = 8 + 1 = 9
    printf("\n3.again incremented value: %d\n", number); ///number = 9
}
/*
sample i/o:

Enter a number: 12

1.main value: 12
2.after pre-increment: 13

3.again incremented value: 14


Enter a number: 7

1.main value: 7
2.after post-increment: 7

3.again incremented value: 9
*/
