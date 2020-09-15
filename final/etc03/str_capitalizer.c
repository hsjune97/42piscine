#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strlen(char *str)
{
	int i = 0;
	while (*str++)
		i++;
	return (i);
}
int		is_space(char c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
void	str_cap(char *str)
{
	int i = 0;
	int len;
	int flag = 1;

	len = ft_strlen(str);

	while (i < len)
	{
		if (is_space(str[i]))
		{
			while(is_space(str[i]))
			{
				ft_putchar(' ');
				i++;
			}
			flag = 1;
		}
		if (flag)
		{
			if('a' <= str[i] && str[i] <= 'z')
				str[i] -= 32;
			flag = 0;
		}
		else
		{
			if('A' <= str[i] && str[i] <= 'Z')
				str[i] += 32;
		}
		if (str[i])
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i = 1;
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (i < ac)
		{
			str_cap(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
