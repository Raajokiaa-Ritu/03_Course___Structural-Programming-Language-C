//Character- ASCII -Character
#include<stdio.h>
int main(){
   /// character --> ascii value
   char ch;
   printf(" Enter a ascii characters: ");
   scanf("%c", &ch);
   printf(" corresponding value : %d\n\n", ch);
   ///ascii value --> character
   int a;
   printf(" Enter a value: ");
   scanf("%d", &a);
   printf(" corresponding ascii character : %c\n", a);

}
