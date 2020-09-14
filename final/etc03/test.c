#include <unistd.h>

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


int	main()
{
	int num = 6;
	char str[] = "123";
	ft_putnbr(num);
	ft_putchar('\n');
	ft_putnbr(to_int(str));
	return (0);
}
