#include<stdio.h>

int main()
{
    ///how to take user input?
    ///attention! It is a very important topic in C

    /*
    syntax:
    scanf("%x", variable_name);
    %x = refers to format specifier

    if variable is integer type
        then scanf("%d", &variable_name);
             printf("%d", variable_name);

    if variable is float type
        then scanf("%f", &variable_name);
             printf("%f", variable_name);

    if variable is double type
        then scanf("%lf", &variable_name);
             printf("%lf", variable_name);

    if variable is character type
        then scanf("%c", &variable_name);
             printf("%c", variable_name);

    */

    ///what is the difference between scanf() & printf()??

    /// see we use &varibale_name while scanning in scanf()
    /// but we don't use '&' sign while printing

    //first declare the variable
    int id;
    float weight;
    double height;

    printf("enter id, weight & height = ");
    scanf("%d %f %lf", &id, &weight, & height);
    printf("%d %f %lf\n\n\n", id, weight, height);

    ///how to take user input of a single word?
    char name[100];
    printf("enter a single word: ");
    scanf("%s", &name); ///N.B.: it will not take value after space!!!
    printf("%s \n", name);


    ///how to take user input of a complete line??
    char name1[100];
    printf("enter a line : ");
    getchar();
    scanf("%[^\n]s", &name1); ///this take value including space
    printf("%s", name1);
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
