#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX6_C_Program_to_Swap_Two_Numbers

    float a,b,temp;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f",&b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %.2f\n",a);
    printf("After swapping, value of b = %.2f",b);

    return 0;
}
