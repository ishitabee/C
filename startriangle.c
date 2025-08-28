 #include <stdio.h>
int main()
{   
    // triangle
    
    int rows,a,b,c;        // current row in the triangle=a
                           // number of characters in each row=b
                           // spaces in each row=c
    
     char star='*';

    printf("Enter the number of rows: ");   
     scanf("%d", &rows);

    for(a=1; a<=rows; a++)    //loop for increment of rows given by the user
    {   
        
        for(c=1;c<=rows-a;c++)  
        {
            printf(" \t");     
        }
        for(b=1; b<=a*2-1; b++ )  /*loop for increment of characters in each row 
                                        1*2-1=1, 2*2-1=3, 3*2-1=5, and so on */
        {
            printf(" %c \t",star);     
        }
        printf("\n");        //triangle formation(next row)

       
    }
    return 0;
} 