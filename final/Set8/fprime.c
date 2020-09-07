#include <stdio.h>
#include <stdlib.h>

void	fprime(unsigned int nb);

int		main(int ac, char **av)
{
	//int num;

	//if (ac != 2)
	//{
	//	printf("\n");
	//	return (0);
	//}

	//num = atoi(av[1]);
	//if (num < 0)
	//{
	//	printf("\n");
	//	return (0);
	//}
	//if (num == 1)
	//{
	//	printf("1\n");
	//	return (0);
	//}

	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}

void	fprime(unsigned int nb)
{
	unsigned int	prime;

	if (nb == 1)
		printf("1");
	else
	{
		prime = 2;
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb /= prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}
