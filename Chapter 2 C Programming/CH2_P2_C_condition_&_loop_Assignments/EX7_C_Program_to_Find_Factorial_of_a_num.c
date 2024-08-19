#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX7_C_Program_to_Find_Factorial_of_a_num

    int num,i;

    while(1)
    {
        int fact=1;
        printf("Enter an integer : ");
        fflush(stdin); fflush(stdout);
        scanf("%d",&num);

        if(num<=0)
        {
            printf("Error!!! factorial of this num doesn't exist\n");
        }
        else
        {
            for(i=num;i>0;i--)
            {
                fact = fact*i;
            }

            printf("factorial of %d = %d\n",num,fact);
        }



        printf("================================\n");
    }

    return 0;
}


