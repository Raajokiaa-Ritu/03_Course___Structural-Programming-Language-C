#include<stdio.h>

int main()
{
    /// user input of an alphabet---
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    printf("you have typed: %c \n\n", ch);



    ///user input of a word---
    char word[50];
    printf("Enter a word : ");
    getchar();
    scanf("%s", &word);
    printf("the word you typed : %s \n\n", word);


    getchar();
    ///how to take user input a complete line??
    char name1[100];
    printf(" Enter a line : ");
    scanf("%[^\n]s", &name1); ///Look at the scanf()!!
    printf(" Text : %s\n\n", name1);

    /// what is '%[^n]s' ??
    /*
scanf("%[^\n]s", name1);
reads characters from the standard input and
stores them in the name1 array until
it encounters a newline character (\n).
The %[^\n]s format specifier tells
scanf to read all characters except newline.
The &name1 passes the address of the name1
array to scanf for storing the input.
    */

getch();
}

