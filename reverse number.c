#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp, rem,reverse=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }
    printf("%d is the reverse number",reverse);
    return 0;
}
