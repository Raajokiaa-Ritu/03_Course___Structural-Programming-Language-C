#include <stdio.h>
int main() {

  int n1, n2, n3;
  ///type-1
  printf("Enter three different numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 <= n2 && n1 <= n3)
    printf("%d is the Smallest Number\n", n1);
  if (n2 <= n1 && n2 <= n3)
    printf("%d is the Smallest Number\n", n2);
  if (n3 <= n1 && n3 <= n2)
    printf("%d is the Smallest Number\n", n3);

  ///type-2
  if (n1 <= n2 && n1 <= n3)
    printf("%d is the Smallest number\n", n1);
  else if (n2 <= n1 && n2 <= n3)
    printf("%d is the Smallest number\n", n2);
  else
    printf("%d is the Smallest number\n", n3);
}
