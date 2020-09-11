#include <unistd.h>
#include "print_options.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_invalid()
{
	ft_putstr("Invalid Option\n");
}

void	show_options()
{
	ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
}

void	print_opt(int *opt)
{
	int i = 0;
	if (opt[24] == 1)
	{
		show_options();
		return;
	}
	while (i < 32)
	{
		if (i % 8 == 0 && i != 0)
			ft_putchar(' ');
		if (opt[i] == 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i++;
	}
	ft_putchar('\n');
}
