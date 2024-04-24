#include<stdio.h>

///what is variable?
/*
It is a container for storing data values
like numbers and character.
*/

///How to declare a variable?
/*
syntax:

data_type variable_name = value

data_type : int, float, char, double etc
variable_name: there are rules for varibales
value : value can be anything depend on the data type

if you want to store integer number
    then--> int value = 11;
if you want to store decimal number
    then--> float value = 11;
                    or
            double value = 11;
if you want to store characters or alphabets
    then--> char value = 'a';

*/


///How to print a variable?

/*

we have to know that how to print a variable

--> It must be depend on the data type
if you declared an integer variable
    then use %d format specifier while printing the value

if you declared an decimal variable
    then use %f or %lf format specifier while printing the value

if you declared an character
    then use %c format specifier while printing the value

*/

int main()
{
    int value;
    value = 10;

    //int value = 10; this is more easy

    printf("%d", value);//print value
    printf("\n"); /// use newline!!!

    printf("your value is : %d\n", value);
    //another way to print value

    //int value; //it is wrong!!!
    ///variable can't be duplicated!
    //if you declared once, you cannot re-declare it

    int id=101, age=22 , salary=1200;
    float height=5.2, weight=45.5;

    ///how to print all the variables together??
    /*
    observation:
    there are 3 int variable
        so there will be three %d %d %d

    there are 2 float variable
        so there will be two %f %f

    */

    ///NOW LET'S PRINT ALL OF THEM
    printf("\n%d %d %d %f %f\n",id, age, salary, height, weight);


    ///all the escape sequence will be used between double quotation!!

    char ch = 'd';
    printf("\ncharacter: %c\n\n\n", ch);






}
