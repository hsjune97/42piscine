#include "flood_print.h"
#include "t_point.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(char **tab, t_point size)
{
	int i = 0;
	int j;
	while (i < size.y)
	{
		j = 0;
		while (j < size.x)
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
