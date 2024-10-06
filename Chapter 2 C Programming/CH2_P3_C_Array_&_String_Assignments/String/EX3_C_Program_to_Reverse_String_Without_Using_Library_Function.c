#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX3_C_Program_to_Reverse_String_Without_Using_Library_Function


    char str[50]= "hello_ezzat!";
    char R_str[50];
    int i,j,k;

    printf("the original string : %s\n",str);
    for(i=0;str[i];i++)
    {

    }
    k=i;
    for(j=0;j<k;j++)
    {
        R_str[j] = str[i-1];
        i--;
    }
    R_str[j]=0;
    printf("the Reverse string : %s",R_str);
    return 0;
}


