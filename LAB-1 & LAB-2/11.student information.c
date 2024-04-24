#include<stdio.h>

///output format should be following:-

/*
Enter your name : Khandaker ritu
Hello Khandaker ritu ?

Enter your department : computer engineering
your are studying in : computer engineering

Enter your ID: 11121
Your ID : 11121

What is your blood group?
 = B+
Blood Group : B+

How old are you?
 = 24
Your are 24 years old.
*/


int main()
{
    ///-------YOUR NAME--------///
    char name[100];
    printf("Enter your name : ");
    scanf("%[^\n]s", name);
    printf("Hello %s \?\n\n", name);

    ///--------YOUR DEPARTMENT-------//
    char department[50];
    printf("Enter your department : ");
    getchar();
    scanf("%[^\n]s", department);
    printf("your are studying in : %s\n\n", department);

    ///---- YOUR ID--------///
    int id;
    printf("Enter your ID: ");
    scanf("%d", &id);
    printf("Your ID : %d\n\n", id);

    ///----BLOOD GROUP-----///
    char blood_group[5];
    printf("What is your blood group?\n = ");
    getchar();
    scanf("%[^\n]s", &blood_group);
    printf("Blood Group : %s\n\n", blood_group);

    ///------AGE-----///
    int age;
    printf("How old are you?\n = ");
    scanf("%d", &age);
    printf("Your are %d years old.\n\n", age);



}
