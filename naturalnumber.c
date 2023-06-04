#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    while(1)
        printf("enter natural number:");
    scanf("%d",&n);
    sum=(n*(n+1)/2);
    printf("sum of natural nmbers=%d",sum);

    return 0;
}
