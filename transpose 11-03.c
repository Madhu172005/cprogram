#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],i,j,c,r;
	printf("enter the rows");
	scanf("%d",&r);
	printf("enter the column");
	scanf("%d",&c);
	printf("enter the first matrix");
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("first matrix a%d%d",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the matrix");
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%d",a[i][j]);
			if(j==c-1)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<r;++i)
	{
		for (i=0;i<c;i++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("\n transpose of the matrix;\n");
	for(i=0;i<c;++i)
	{
		for(j=0;j<r;++j)
		{
			printf("%d",transpose[i][j]);
			if(j==r-1)
			{
				printf("\n");
			}
		}
		}	
	}
	

