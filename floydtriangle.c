#include <stdio.h>
//nihal is with me on a call
int main()
{
    int rows = 0, i = 0, j = 0, num = 1,k=0;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
         
        for(k=1;k<=rows-i;k++)  
        {
            printf(" ");     
        }
        for(j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;

}
