#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX8_C_Program_to_make_simple_calculator

    float op1,op2,result;
    char Operator;

    while(1)
    {

        printf("Enter operator + - * / : ");
        fflush(stdin);fflush(stdout);
        scanf("%c",&Operator);

        switch(Operator)
        {
        case '+':

            printf("Enter two operands : ");
            fflush(stdin);fflush(stdout);
            scanf("%f%f",&op1,&op2);
            result = op1 + op2;
            printf("%.1f + %.1f = %.1f\n",op1,op2,result);
            break;
        case '-':
            printf("Enter two operands : ");
            fflush(stdin);fflush(stdout);
            scanf("%f%f",&op1,&op2);
            result = op1 - op2;
            printf("%.1f - %.1f = %.1f\n",op1,op2,result);
            break;
        case '*':
            printf("Enter two operands : ");
            fflush(stdin);fflush(stdout);
            scanf("%f%f",&op1,&op2);
            result = op1 * op2;
            printf("%.1f * %.1f = %.1f\n",op1,op2,result);
            break;
        case '/':
            printf("Enter two operands : ");
            fflush(stdin);fflush(stdout);
            scanf("%f%f",&op1,&op2);
            result = op1 / op2;
            printf("%.1f / %.1f = %.1f\n",op1,op2,result);
            break;
        }

        printf("================================\n");
    }

    return 0;
}


