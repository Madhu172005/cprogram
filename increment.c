#include <stdio.h>
#include <stdlib.h>

int main()
{
    //preincrement    //a=10,b=0 then a is incremented to 11 and substituted in b
    int a=10,b=2,c;
    c=++b + ++a;
    printf("%d +%d=%d\n",a,b,c);

      //post increment     //h=25,i=0 then in post increment first h is substituted to i then h is incremented
    int h=25,i=0;
    i=h++;
    printf("%d %d",h,i);
    return 0;
}
