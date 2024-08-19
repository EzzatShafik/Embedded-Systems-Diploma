#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX5_C_Program_to_Find_ASCII_Value_of_a_Character

    char c;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c",&c);
    printf("ASCII value of %c = %d",c,c);


    return 0;
}
