#include <stdio.h>
#include <stdlib.h>



int max_xor(int n1,int n2)
{
    int i,j,r,max=0,c=0,max_i,max_j;

    for(i=n1; i<=n2; i++)
    {
        for(j=i; j<=n2; j++)
        {
            r = i ^ j;
            printf("%d  %d  %d\n",i,j,r);
            if(r>=max)
            {
                max = r;
                max_i = i;
                max_j = j;
            }

            c++;
        }
        printf("=========================\n");
    }
    printf("counter = %d\n",c);
    printf("%d ^ %d = %d\n",max_i,max_j,max);

    return max;
}


int main()
{
    int n,i,j;
    while(1)
    {
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if((i==j)||(i+j==n+1))
                {
                    printf("*");
                }
                else if((i-1==n/2)||(j-1==n/2))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }


            }
            printf("\n");

        }
    }


    return 0;
}
