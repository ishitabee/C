#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) 
    {
        exit(0);
        //printf("It is not a power of 2\n");
        //return 0;
    }

    while (num > 1) 
    {
        if (num % 2 != 0) 
        {
            printf("It is not a power of 2\n");
            //return 0;
        }
        
        num = num / 2;
    }

    printf("It is a power of 2\n");
    return 0;
}
