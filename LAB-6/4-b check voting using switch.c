#include<stdio.h>
int main()
{
    ///
    int age;
    scanf("%d", &age);


    switch(age >= 18)
    {
        case 0:
            printf("You can't vote\n");
            break;
        case 1:
            printf("You can vote\n");
            break;
    }
}
