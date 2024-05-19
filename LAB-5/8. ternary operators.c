#include<stdio.h>
///conditional or ternary operator
int main()
{
 printf("\n=======Example-1=======\n\n");
 int age;
 printf("Enter your age: ");
 scanf("%d", &age);
 ///method-1
 (age >= 18) ? printf("You can vote\n") : printf("You cannot vote\n");


 printf("\n=======Example-2=======\n\n");
 ///method-2
 char optr;
 int num1=8;
 int num2=7;

 printf("Enter two numbers: ");
 scanf("%d %d", &num1, &num2);

 getchar();
 printf("Enter operator[+,-] : ");
 scanf("%c", &optr);

 int result = (optr == '+') ? (num1 + num2) : (num1 - num2);
 printf("%d %c %d = %d\n",num1,optr, num2, result);


}
/*
sample i/o:
=======Example-1=======

Enter your age: 12
You cannot vote

=======Example-2=======

Enter two numbers: 90 100
Enter operator[+,-] : -
90 - 100 = -10
*/
