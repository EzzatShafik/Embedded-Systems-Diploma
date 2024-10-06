#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX5_C_Program_to_Search_an_element_in_Array

    while(1)
    {
        int arr[10]= {4,6,9,8,55,3,6,2};
        int element,i,flag=0;


        printf("enter the element you search for : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d",&element);

        for(i=0; i<10; i++)
        {
            if(arr[i] == element)
            {
                printf("%d is found in index %d in the array\n",element,i);
                flag++;
            }
        }

        if(flag==0)
        {
            printf("%d is not found in the array\n",element);
        }



        printf("================================\n");
    }

    return 0;
}


