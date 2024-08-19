#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    
    /*0 1 2 3 4 5 6 7 8 9
      1 2 3 4 5 6 7 8 9
      2 3 4 5 6 7 8 9
      3 4 5 6 7 8 9
      4 5 6 7 8 9
      5 6 7 8 9
      6 7 8 9
      7 8 9
      8 9
      9                   */
      
    int i,j;

    for (i=0;i<10;i++)
    {
        printf("%d ",i);
        for(j=i+1;j<10;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }


    return 0;
}


