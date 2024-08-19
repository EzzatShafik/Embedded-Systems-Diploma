#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX2_C_Program_to_check_Vowel_or_Consonant_letter

char letter;

    while(1)
    {

        printf("Enter an alphabet : ");
        fflush(stdin); fflush(stdout);
        scanf("%c",&letter);

        switch (letter)
        {
        case 'a':
        case 'A':
            printf("%c is vowel\n",letter);
            break;
        case 'e':
        case 'E':
            printf("%c is a vowel\n",letter);
            break;
        case 'i':
        case 'I':
            printf("%c is a vowel\n",letter);
            break;
        case 'o':
        case 'O':
            printf("%c is a vowel\n",letter);
            break;
        case 'u':
        case 'U':
            printf("%c is a vowel\n",letter);
            break;
        default:
            printf("%c is a Consonant\n",letter);
            break;
        }

        printf("================================\n");
    }

    return 0;
}


