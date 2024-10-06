#include <stdio.h>
#include <stdlib.h>

int main()
{
    //EX4_C_Program_to_Insert_an_element_in_an_Array
	//this code can insert an element in any location in an array

    while(1)
    {
        int arr[50];
        int max_size,new_n,location,i;




        printf("enter the max size of array : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d",&max_size);


        printf("enter the elements of array : ");
        for(i=0; i<max_size; i++)
        {
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&arr[i]);
        }


        printf("enter the new element : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d",&new_n);

        printf("enter the location you want to insert : ");
        fflush(stdin);
        fflush(stdout);
        scanf("%d",&location);

        if (location > max_size)
        {
            for(i= max_size ; i>=0 ; i-- )
            {
                arr[i+1] = arr[i];
                if (i == (location-1))
                {
                    arr[i] = new_n;
                    break;
                }
            }
        }
        else
        {
            for(i= max_size-1 ; i>=0 ; i-- )
            {
                arr[i+1] = arr[i];
                if (i == (location-1))
                {
                    arr[i] = new_n;
                    break;
                }
            }
        }



        printf("the new array : \n");
        for(i=0; i<max_size+1; i++)
        {
            printf("%d  ",arr[i]);
        }
        printf("\n");

        printf("================================\n");
    }

    return 0;
}


