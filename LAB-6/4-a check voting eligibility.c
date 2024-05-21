#include<stdio.h>
int main()
{
    ///
    int age;
    scanf("%d", &age);

    if(age >= 18){
        printf("You can vote\n");
    }
    else{
        printf("You can't vote\n");
    }
}
