//Lowercase - Uppercase - Lowercase
#include<stdio.h>
int main(){
    ///lower to upper
    char lower;
    printf("Enter a letter between (a-z): ");
    scanf("%c", &lower);
    printf("uppercase method-1 : %c\n", (lower - 32));
    printf("uppercase method-2 : %c\n\n", toupper(lower));
    getchar();
    ///lower to upper
    char upper;
    printf("Enter a letter between (A-Z): ");
    scanf("%c", &upper);
    printf("uppercase method-1 : %c\n", (upper + 32));
    printf("uppercase method-2 : %c\n\n", tolower(upper));
}
