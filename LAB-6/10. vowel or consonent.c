#include <stdio.h>
int main() {
    char vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &vowel);

    if(vowel == 'a' || vowel == 'A'){
        printf("Vowel\n");
    }
    else if(vowel == 'e' || vowel == 'E'){
        printf("Vowel\n");
    }
    else if(vowel == 'i' || vowel == 'I'){
        printf("Vowel\n");
    }
    else if(vowel == 'o' || vowel == 'O'){
        printf("Vowel\n");
    }
    else if(vowel == 'u' || vowel == 'U'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
}
