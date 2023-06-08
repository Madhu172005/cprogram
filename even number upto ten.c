#include<stdio.h>
 
int main()
{
  	int i;
  	int  number = 10;
 
  	printf("\n The even number from 1 to 10 : ");
  
  	for(i = 1; i <= number; i++)
  	{
    	if ( i % 2 == 0 ) 
    	{
  			printf(" %d\t", i);
    	}
  	}
 
  	return 0;
}

