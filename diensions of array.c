#include <stdio.h>
#include <stdlib.h>

int main()
{
    { //compile time initialization
    int arr[5]={1,2,3,4,5};
    printf("the values are:\n");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    }

    {
        //run time initialisation
        int mm[5];
        int i;
        printf("enter the values:");
        for(i=0;i<5;i++)
        {
            scanf("%d",&mm[i]);
        }
/*so from rti we got the array
values so now we will convert it as
cti*/

int j;
{
    printf("the values are:\t");
    for(j=0;j<5;j++)
    {
        printf("%d\t",mm[j]);
    }
}
    }


    return 0;
}
