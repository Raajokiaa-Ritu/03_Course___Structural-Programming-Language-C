#include<stdio.h>
int main()
{
    ///
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    switch(x)
    {
        case 6:
            printf("number = 6\n");
            break;
        case 5:
            printf("number = 5\n");
            break;
        case 4:
            printf("number = 4\n");
            break;
        case 3:
            printf("number = 3\n");
            break;
        case 2:
            printf("number = 2\n");
            break;
        default:
            printf("number <= 1\n");
            break;
    }
}
