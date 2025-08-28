#include <stdio.h>
int main() 
{
    //powers of 2
    printf("This program will give powers of 2.\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("2^%d = %d\n", i, 1 << i);
    }

}    
