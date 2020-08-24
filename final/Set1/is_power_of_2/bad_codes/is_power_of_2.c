
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int x;

	x = 2;
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n % 2 != 0)
		return (0);
	while (x <= n)
	{
		if (x == n)
			return (1);
		x *= 2;
	}
	return (0);
}

int	main(void)
{
	unsigned int t = 1;

	printf("%d\n", is_power_of_2(t));
}
