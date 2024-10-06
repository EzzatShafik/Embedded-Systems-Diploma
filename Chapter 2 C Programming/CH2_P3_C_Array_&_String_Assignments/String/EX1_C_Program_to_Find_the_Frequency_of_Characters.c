#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX1_C_Program_to_Find_the_Frequency_of_Characters

    while(1)
    {
        char str[100];
        char character;
        int i,count=0,flag=0;


        printf("enter the string : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%s",&str);

        printf("enter the char : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%c",&character);


        for(i=0; str[i]; i++)
        {
            if(str[i] == character)
            {
                count++;
                flag++;
            }
        }

        if(flag==0)
        {
            printf("%c is not found in the string\n",character);
        }
        else
        {
            printf("%c is found in the string %d times\n",character,count);
        }



        printf("================================\n");
    }

    return 0;
}


