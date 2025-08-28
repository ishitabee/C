#include <stdio.h>

int findStringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main() 
{ 
    
    // This program will reverse a given word
    printf("This program will reverse a given word.\n");
   
  char anyWord [] = ("Gayathri");
  char reversedWord [20] = "";
  int length = findStringLength(anyWord);
  int i, j;
  
  for (i = length-1, j = 0; i >= 0; --i, j++)
  {
      reversedWord[j] = anyWord[i];
  }

  printf ("The reversed word is: %s\n", reversedWord);
  return 0;
}