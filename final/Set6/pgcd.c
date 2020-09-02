#include <stdio.h>
#include <stdlib.h>


int		main(int ac, char **av)
{
	int a;
	int b;
	int num = 1;
	int deno = 1;

	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);

	while (num <= a && num <= b)
	{
		if (a % num == 0 && b % num == 0)
			deno = num;
		num++;
	}
	printf("%d\n", deno);
	return (0);
}
