#include <unistd.h>

void	last_word(char *str);
int		is_space(char c);

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(av[1]);
	return (0);
}

void	last_word(char *str)
{
	char *curr;
	int flag;

	flag = 1;
	curr = str;
	while (*str)
	{
		if (!is_space(*str) && flag)
		{
			curr = str;
			flag = 0;
		}
		if(is_space(*str))
			flag = 1;
		str++;
	}
	while (*curr)
	{
		write(1, curr, 1);
		curr++;
	}
	write(1, "\n", 1);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
