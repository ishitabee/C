#include <stdio.h>

int main()
 {
   int factorial = 1;
   int i;

  printf("Enter a number to calculate its factorial: ");
  printf("Did you know that the factorial of a number is the product of all positive integers up to that number and is represented by '!' ?\n");
  scanf("%d", &factorial);

  for (i = 1; i <= 5; i++) 
  {
    factorial = factorial * i;
  }

  printf("factorial is %d", factorial);
  
  return 0;
}