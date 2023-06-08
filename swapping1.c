#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("enter the values of n1,n2,n2");
	scanf("%d%d%d",&n1,&n2,&n3);
	n1=n3;
	n2=n3;
	n3=n2;
	printf("after swapping,%d\n",n1);
	printf("after swapping%d\n",n2);
	printf("after swapping%d\n",n3);
}
