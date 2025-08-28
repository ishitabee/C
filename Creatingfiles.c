#include <stdio.h>

int main() 
{
  FILE *fptr;

  
  fptr = fopen("filename.txt", "w");

  
  fprintf(fptr, "Muma solved it before you did!\n");

  return 0;
}