#include "print_options.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int option[32] = {0, };
	int i = 1;
	int j;

	if (ac <= 1)
	{
		show_options();
		return (0);
	}

	while (i < ac)
	{
		if (av[i][0] != '-')
		{
			print_invalid();
			return (0);
		}
		j = 1;
		while (av[i][j])
		{
			if ('a' > av[i][j] || 'z' < av[i][j])
			{
				print_invalid();
				return (0);
			}
			option[(int)(128 - av[i][j])] = 1;
			j++;
		}
		i++;
	}
	print_opt(option);

	return (0);
}
