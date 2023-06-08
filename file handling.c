#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp;//declaring file pointer
char str[50];
 fp=fopen("First.txt","r");//file name,mode(read[r],write[w],append[a])
 if(fp==NULL)
 {
     printf("Does not exist.");

 }
else
{
    printf("file created\n");
}
while(fscanf(fp,"%s",str)!=EOF)
{

    printf("%s ",str);
}

fclose(fp);
getch();


    return 0;
}
