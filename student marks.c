#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,total,agg;
    printf("Mark in A=");
    scanf("%d",&a);
    printf("\nMark in B=");
    scanf("%d",&b);
    printf("\nMark in C=");
    scanf("%d",&c);
    printf("\nMark in D=");
    scanf("%d",&d);

    total=a+b+c+d;
    printf("TOTAL=%d",total);

    agg=total/4;
    printf("\nAGGREGATE=%d",agg);
    if (agg>75)
    {
        printf("\nDISTINCTION");
    }
    if (agg>=60 && agg<75)
    {
        printf("\nFIRST DIVISION");
    }
    if (agg>=50 && agg<60)
    {
        printf("\nSECOND DIVISION");

    }
    if (agg>=40&&agg<50)
    {
        printf("\nTHIRD DIVISION");
    }
    else
    {
        printf("\nFAIL");
    }
    return 0;
}
