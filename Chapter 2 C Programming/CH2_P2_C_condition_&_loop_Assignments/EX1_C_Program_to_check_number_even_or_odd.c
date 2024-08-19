#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX1_C_Program_to_check_number_even_or_odd

    int num;

    while(1)
    {
        printf("Enter a num you want to check : ");
        fflush(stdout);
        scanf("%d",&num);

        if (num%2 == 0)
        {
            printf("%d is even\n",num);
        }
        else
        {
            printf("%d is odd\n",num);
        }
        printf("=====================================\n");
    }

    return 0;
}


