#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX5_C_Program_to_check_whether_a_Char_is_Alphabet_or_not

    char c;

    while(1)
    {

        printf("Enter a char : ");
        fflush(stdin); fflush(stdout);
        scanf("%c",&c);
        if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            printf("%c is an alphabet\n",c);
        }
        else
        {
            printf("%c is not an alphabet\n",c);
        }
        printf("================================\n");
    }

    return 0;
}


