#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int  h;
    do
     
    {
        h = get_int("height :");
    }
    while (h < 1 || h > 8);
    for (int i = 0; i < h; i++)
    {
        for (int j = h - i - 1 ; j > 0; j--)
        {
            printf(" ");   
        }
        for (int k = -1; k < i; k++)
        {
            //k
            printf("#");
        }//k
        {
            printf("  ");
        }
      
        for (int k = -1; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
              
    
    }
     
}//i
