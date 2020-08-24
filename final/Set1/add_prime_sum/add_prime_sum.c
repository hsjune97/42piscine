#include <unistd.h>


int		is_positive(char *str);
int		is_prime(unsigned int num);
unsigned int	to_int(char *str);
void	ft_putnbr(unsigned int n);

int		main(int argc, char **argv)
{
	unsigned int x;
	unsigned int n;
	unsigned int sum;

	if (argc != 2 || is_positive(argv[1] == 0))
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = to_int(argv[1]);
	sum = 0;
	x = 0;
	while (++x <= n)
	{
		if (is_prime(x) == 1)
			sum += x;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}

int		is_positive(char *str)
{
	int i;

	i = 0;
	while (/* condition */)
	{
		/* code */
	}

	return (1);
}

unsigned int	to_int(char *str)
{
	unsigned int sum;

	sum = 0;
	while (/* condition */)
	{
		/* code */
	}

}
int		is_prime(unsigned int num);
void	ft_putnbr(unsigned int n);
