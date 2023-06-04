#include <stdio.h>
int main()
{
int date, month, year;
printf("Enter date in DD/MM/YYYY format: ");
scanf("%d/%d/%d", &date, &month, &year);
if (year % 4 == 0)
{
printf("%d/%d/%d is a leap year.", date, month, year);
}
else
{
printf("%d/%d/%d is not a leap year.", date, month, year);
}
return 0;
}
