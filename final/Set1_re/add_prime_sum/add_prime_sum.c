#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
int		is_positive(char *str);
int		is_prime(unsigned int n);
void	ft_putnbr(unsigned int n);
unsigned int to_int(char *str);

int main(int ac, char *av[])
{
	unsigned int x;
	unsigned int n;
	unsigned int sum;

	if (ac != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		exit(0);
	}
	if (is_positive(av[1]) == 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		exit(0);
	}
	n = to_int(av[1]);
	x = 0;
	sum = 0;
	while (x <= n)
	{
		if (is_prime(x) == 1)
			sum += x;
		x++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	exit(0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_positive(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	if (str[i] == '0')
		return (0);
	while (str[i] != 0)
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

int		is_prime(unsigned int n)
{
	unsigned int x;

	if (n == 0 || n == 1)
		return (0);
	if (n == 2)
		return (1);
	x = 2;
	while (n % x != 0)
		x++;
	return (n == x ? 1 : 0);
}

void	ft_putnbr(unsigned int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

unsigned int to_int(char *str)
{
	unsigned int sum;
	int i  = 0;

	sum = 0;
	while (str[i] != 0)
	{
		sum += str[i] - '0';
		i++;
	}
	return (sum);
}
