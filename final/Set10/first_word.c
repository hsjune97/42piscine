#include <unistd.h>

void	ft_putchar(char c);
void	first_word(char *str);
int		is_space(char c);

int		main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	first_word(char *str)
{
	int i = 0;
	while (is_space(str[i]))
		i++;
	while (!is_space(str[i]) && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\v' || c == '\n' || c == '\r' || c == '\t')
		return (1);
	return (0);
}
