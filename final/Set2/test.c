#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a <= b);
}


int		main(void)
{
	int a = 1;
	int b = 3;

	printf("%d ", ascending(a, b));
}
