#include<stdio.h>
#include<conio.h>
void main()
{
	int E,N,P,CC;
	printf("\nprogram to find cyclomatic complexity:");
	printf("\n enter the number of edges in the flow graph");
	scanf("%d",&E);
	printf("\n enter the no of nodes");
	scanf("%d",&N);
	printf("\n enter the predicate nodes");
	scanf("%d",&P);
	CC=E-N+(2*P);
	printf("\n cyclomatic complexity %d",CC);
	getch();
	
}
