#include <unistd.h>

void	ft_putchar(char c);
void	rev_print(char *str);
int		ft_strlen(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	ft_putchar('\n');
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rev_print(char *str)
{
	int i = 0;
	int len;
	len = ft_strlen(str);
	while (i < len)
	{
		ft_putchar(str[len - 1 - i]);
		i++;
	}
}
int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
