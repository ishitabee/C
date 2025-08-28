#include <stdio.h>

int main() 
{ 
    
    // This program will reverse a given word
    printf("This program will reverse a given word.\n");
   
  char anyWord [] = ("Gayathri");
  int length = sizeof(anyWord) / sizeof(anyWord[0]);
  int i;
  
  for (i = length; i >= 0; --i)
 {
    printf("%c", anyWord[i]);
 }

  return 0;
}