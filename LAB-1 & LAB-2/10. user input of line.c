#include<stdio.h>

int main()
{

    ///how to take user input a complete line??
    char name1[100];
    printf(" Enter a line : ");
    scanf("%[^\n]s", &name1); ///Look at the scanf()!!
    printf(" Text : %s", name1);

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


}
