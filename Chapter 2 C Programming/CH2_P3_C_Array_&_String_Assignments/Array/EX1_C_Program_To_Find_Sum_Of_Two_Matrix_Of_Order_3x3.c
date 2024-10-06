#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX1_C_Program_to_find_sum_of_two_matrix_of_order_using_multi_dimensional_arrays
    // where_elments_of_matrix_are_entered_by_user
    int mat1[3][3];
    int mat2[3][3];
    while(1)
    {
        int i,j;

        printf("Enter matrix 1 : \n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                fflush(stdin);
                fflush(stdout);
                scanf("%d",&mat1[i][j]);
                printf(" ");
            }
            printf("\n");
        }

        printf("Enter matrix 2 : \n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                fflush(stdin);
                fflush(stdout);
                scanf("%d",&mat2[i][j]);
                printf(" ");
            }
            printf("\n");
        }

        printf("sum : \n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf(" %d ",(mat1[i][j])+(mat2[i][j]));
            }
            printf("\n");
        }




        printf("================================\n");
    }

    return 0;
}


