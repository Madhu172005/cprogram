#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,hcf;
    printf("enter 2 integers: ");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1||i<=num2;++i)
    {
        if(num1%i==0&&num2%i==0)
            hcf=i;
    }
       printf("HCF of %d,%d is %d",num1,num2,hcf);
       return 0;
}
