///Print Characters from  a to z and A to Z

#include<stdio.h>
int main()
{
    char i;
    printf("---Print small letters [a to z] ---\n");
    for(i = 'a'; i <= 'z'; i++)
    {
        printf("%c ", i);
    }

    printf("\n---Print capital letters [A to Z]---\n");
    for(i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }

    printf("\n");
}
