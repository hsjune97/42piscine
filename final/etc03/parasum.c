#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (!av)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(ac - 1 + '0');
		ft_putchar('\n');
	}
	return (0);
}
