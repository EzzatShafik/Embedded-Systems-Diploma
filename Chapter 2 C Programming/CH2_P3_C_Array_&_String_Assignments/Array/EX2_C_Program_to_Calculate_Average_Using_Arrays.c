#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX2_C_Program_to_Calculate_Average_Using_Arrays
    //This program takes n number Of element from user(where, n is by user), stores
    //data in an array and calculates the average Of those numbers
    int i,n;
    while(1)
    {
        int sum=0,average;
        printf("enter no of elements : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d",&n);

        int arr[n];
        printf("enter the data of array : ");

        for(i=0; i<n; i++)
        {
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&arr[i]);
            sum = sum + arr[i];
        }

        average = sum / n;

        printf("average = %d\n",average);


        printf("================================\n");
    }

    return 0;
}


