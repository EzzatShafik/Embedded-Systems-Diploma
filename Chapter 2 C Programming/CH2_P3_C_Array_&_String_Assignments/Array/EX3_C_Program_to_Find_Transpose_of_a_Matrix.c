#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX3_C_Program_to_Find Transpose of a Matrix
    //This program asks user to enter a matrix (sire of matrix is specified by user)and
    //this program finds the transpose of that matrix and displit

    while(1)
    {
        int mat[50][50];
        int trans_mat[50][50];

        int row,col,i,j;


        printf("enter r & c of the matrix : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d%d",&row,&col);


        printf("enter the matrix : ");

        for(i=0; i<row; i++)
        {
            for(j=0; j<col;j++)
            {
                fflush(stdin);
                fflush(stdout);
                scanf("%d",&mat[i][j]);
            }
        }


        printf("the matrix :\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col;j++)
            {

                printf(" %d ",mat[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<row; i++)
        {
            for(j=0; j<col;j++)
            {
                trans_mat[j][i] = mat[i][j];
            }
        }

        printf("the transpose matrix :\n");
        for(i=0; i<col; i++)
        {
            for(j=0; j<row;j++)
            {

                printf(" %d ",trans_mat[i][j]);
            }
            printf("\n");
        }

        printf("================================\n");
    }

    return 0;
}


