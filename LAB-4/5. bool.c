#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file
int main()
{
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d\n", isFishTasty);
         // Returns 0 (false)
  int x = 10;
  int y = 9;
  printf("%d\n", x > y);
  // Returns 1 (true) because 10 is greater than 9

  printf("%d\n", 10 > 9);
  // Returns 1 (true) because 10 is greater than 9

  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
  printf("%d\n", 5 == 55); // Returns 0 (false) because 5 is not equal to 55

  bool isHamburgerTasty = true;
  bool isPizzaTasty = true;
  printf("%d", isHamburgerTasty == isPizzaTasty);


}
