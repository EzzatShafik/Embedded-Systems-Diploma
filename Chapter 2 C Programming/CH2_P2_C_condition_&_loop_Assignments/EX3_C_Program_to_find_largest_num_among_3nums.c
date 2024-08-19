#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX3_C_Program_to_find_largest_num_among_3nums

    int num1,num2,num3;

    while(1)
    {

        printf("Enter three numbers : ");
        fflush(stdout);
        scanf("%d%d%d",&num1,&num2,&num3);
        if (num1>num2)
        {
            if(num1>num3)
            {
                printf("largest number is = %d\n",num1);
            }
            else
            {
                printf("largest number is = %d\n",num3);
            }
        }
        else if(num2>num3)
        {
            if(num2>num1)
            {
                printf("largest number is = %d\n",num2);
            }
            else
            {
                printf("largest number is = %d\n",num1);
            }
        }
        else
        {
            printf("largest number is = %d\n",num3);
        }
        printf("================================\n");
    }

    return 0;
}


