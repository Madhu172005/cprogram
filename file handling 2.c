#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp;//declaring file pointer
char str[50];
int age;
char name[50];

printf("Enter the name:");
scanf("%s",name);
printf("Enter the age:");
scanf("%d",&age);
 fp=fopen("demo.txt","w");//file name,mode(read[r],write[w],append[a])

{
    fprintf(fp,"name:%s\nage:%d",name,age);

}

fclose(fp);
getch();


    return 0;
}
