///Print all even/odd numbers for 1 to n
#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(i = 0; i <= number; i++){
        if( i % 2 == 0){
            printf("%d : Even\n", i);
        }
        else{
            printf("%d : Odd\n", i);
        }
    }
}
