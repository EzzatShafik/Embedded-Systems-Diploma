#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX2_C_Program_to_Find_the_Length_of_a_String


    char str[50]= "hello world!";
    int i;

    i=0;
    while(str[i])
    {
        i++;
    }

    printf("the length of string is %d\n",i);


    return 0;
}


