#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX4_C_Program_to_check_whether_num_positive_or_negative_or_zero

    float num;

    while(1)
    {

        printf("Enter a number : ");
        fflush(stdout);
        scanf("%f",&num);
        if (num>0)
        {
            printf("%.1f is positive\n",num);
        }
        else if(num<0)
        {
            printf("%.1f is negative\n",num);
        }
        else
        {
            printf("%.1f is zero\n",num);
        }
        printf("================================\n");
    }

    return 0;
}


