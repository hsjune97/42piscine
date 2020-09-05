#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int asc[256] = {0, };
	int size;
	int i = 0;
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	size = sizeof(asc) / sizeof(int);

	while (av[1][i])
	{
		asc[(int)(av[1][i])] = 1;
		i++;
	}

	i = 0;
	while (av[2][i])
	{
		asc[(int)(av[2][i])] = 1;
		i++;
	}

	i = 0;
	while (i < size)
	{
		printf("%d ", asc[i]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (asc[i])
		{
			ft_putchar((char)(i));
		}
		i++;
	}



	printf("\nsize: %d\n", size);
	printf("str1: %s\n", av[1]);
	printf("str2: %s\n", av[2]);
	return (0);
}
