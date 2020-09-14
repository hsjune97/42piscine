#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		to_int(char *str);
void	ft_putnbr(int num);
void	tab_mult(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(av[1]);
	ft_putchar('\n');
	return (0);
}

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
int		to_int(char *str)
{
	int rtn = 0;
	int i = 0;
	while (str[i])
	{
		rtn *= 10;
		rtn += str[i] - '0';
		i++;
	}
	return (rtn);
}
void	ft_putnbr(int num)
{
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
		ft_putchar(num % 10 + '0');
}
void	tab_mult(char *str)
{
	int i = 1;
	int num;

	num = to_int(str);

	while (i < 10)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(num);
		ft_putstr(" = ");
		ft_putnbr(i * num);
		if (i != 9)
			ft_putchar('\n');
		i++;
	}
}
