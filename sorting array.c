#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[100],i,j,n,temp;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the values:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {
     for(j=i+1;j<n;j++)
     {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
 }
 printf("sorted array values:");
 for(i=0;i<n;i++)
 {
     printf("%d\t",a[i]);
 }
    return 0;
}
