#include<stdio.h>
#include<conio.h>
void main()
{
    int i,t1=0,t2=1,n,t3;
    t3=t1+t2;
    printf("fibonacci series term:");
    scanf("%d",&n);
    printf("the fibonaci  series of %d is:\t%d\t%d",n,t1,t2);
    for (i=3;i<=n;++i)
    {
        t1=t2;
        t2=t3;
        t3=t1+t2;
        printf("\t%d\t",t3);
    }
    return 0;
}
