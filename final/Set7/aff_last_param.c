#include <unistd.h>

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i = 0;

	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[ac - 1][i])
	{
		ft_putchar(av[ac - 1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
