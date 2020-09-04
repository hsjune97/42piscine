#include <unistd.h>

void	ft_putchar(char c);
int		is_space(char c);

int		main(int ac, char **av)
{
	int i = 0;
	int flag = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{

		if (is_space(av[1][i]) && flag)
			break;
		if (!is_space(av[1][i]))
		{
			ft_putchar(av[1][i]);
			flag = 1;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		is_space(char c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

