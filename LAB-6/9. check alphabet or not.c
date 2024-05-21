#include<stdio.h>
int main(){
    ///a-z , A-Z
    char input;
    scanf("%c", &input);
    ///method -1
    if( input>='a' && input<='z'){
        printf("alphabet[smaller]\n");
    }
    else if(input>='A' && input<='Z'){
        printf("alphabet[upper]\n");
    }
    else{
        printf("Not an alphabet\n");
    }

    ///method-2
    if (isalpha(input) == 0)
         printf("not an alphabet.");
    else
         printf("alphabet");
}
