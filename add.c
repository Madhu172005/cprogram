

#include <stdio.h>


int sum(int x, int y)
{
	int c;
	c = x + y;
	return c;
}
int main()
{
	int i = 3, j = 2;

	int c = sum(i, j);
	printf("Sum of %d and %d : %d", i, j, c);

	return 0;
}


