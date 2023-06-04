#include <stdio.h>
#include<conio.h>

int main()
{
char str1[20];
char str2[10];
int values;
printf("enter string1:");
scanf("%s",&str1);
printf("enter the string2:");
scanf("%s",&str2);
values=strcmp(str1,str2);
if (values==0)
    printf("the string 1 and 2 are same");
else
    printf("the strings are not same");



  return 0;
}
