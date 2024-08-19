#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX3_C_Program_to_Add_Two_Integers

    int x,y,sum;
    printf("Enter two integers: ");
    fflush(stdout);
    scanf("%d%d",&x,&y);
    sum = x+y;
    printf("Sum: %d",sum);


    return 0;
}
