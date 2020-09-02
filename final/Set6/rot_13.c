#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	char *str;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = av[1];
	while (*str)
	{
		if ('a' <= *str && *str <= 'm')
			*str += 13;
		else if ('n' <= *str && *str <= 'z')
			*str -= 13;
		if ('A' <= *str && *str <= 'M')
			*str += 13;
		else if ('N' <= *str && *str <= 'Z')
			*str -= 13;
		str++;
	}
	ft_putstr(av[1]);
	write(1, "\n", 1);
	return(0);
}
