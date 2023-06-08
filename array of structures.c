#include <stdio.h>
#include <stdlib.h>

int main()
{
struct student
{
    int num;
    char name[20
    ];
};
struct student s[5];
int i;
for(i=0;i<3;i++)
{

    printf("Enter the Roll no.:");
    scanf("%d",&s[i].num);
    printf("Enter the name:");
    scanf("%s",s[i].name);
}



return 0;
}
