#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX4_C_Program_to_Multiply_two_Floating_Point_Numbers

    float x,y,mul;
    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%f%f",&x,&y);
    mul = x*y;
    printf("Product: %f",mul);


    return 0;
}
