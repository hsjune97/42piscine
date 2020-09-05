#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i = 0;
	char c = 'z';
	while (i < 26)
	{
		if (i % 2 == 0)
			ft_putchar(c - i);
		else
			ft_putchar(c - i - 32);

		i++;
	}
	ft_putchar('\n');
	return (0);
}
