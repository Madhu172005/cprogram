#include <stdio.h>

int main(void) {
  int i,N;
	printf("Enter N : ");
	scanf("%d",&N);

	for(i=1;i<=N;i++)
	{
		printf("%d ",i*i*i);
	}

	return 0;
}
