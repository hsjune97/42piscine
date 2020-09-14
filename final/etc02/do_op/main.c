#include "do_op.h"

int		main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	printf("\n");
	return (0);
}
