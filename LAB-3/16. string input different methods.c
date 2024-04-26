#include <stdio.h>
int main()
{
    ///method -1

    char str1[20];
    gets(str1);
    printf("%s\n\n", str1);


    ///method -2

    ///how to take user input a complete line??
    char name1[100];
    printf(" Enter a line : ");
   // getchar();
    scanf("%[^\n]s", &name1); ///Look at the scanf()!!
    printf(" Text : %s\n\n", name1);



}
