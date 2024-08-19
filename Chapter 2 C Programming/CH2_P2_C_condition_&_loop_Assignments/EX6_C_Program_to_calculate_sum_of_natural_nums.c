#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX6_C_Program_to_calculate_sum_of_natural_nums

    int n,i;

    while(1)
    {
        int sum=0;
        printf("Enter an integer : ");
        fflush(stdin); fflush(stdout);
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            sum += i;
        }

        printf("sum = %d\n",sum);
        printf("================================\n");
    }

    return 0;
}


