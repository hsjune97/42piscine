#include <unistd.h>

void	ft_put_ok(void);
void	ft_put_error(void);
int		check_brackets(char* str);
int		ft_strlen(char *str);

int		main(int ac, char **av)
{
	char *curr;
	int i = 1;

	if (ac == 1 || ac == 0)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (i < ac)
	{
		if (check_brackets(av[i]) == 0)
			ft_put_error();
		else if (check_brackets(av[i]) == 1)
			ft_put_ok();
		i++;
	}
	return (0);
}


int		check_brackets(char* str)
{
	int size = ft_strlen(str);
	char *tmp;
	int flag;

	while (*str)
	{
		if (*str == '(')
		{
			tmp = *str;

			while (*tmp)
			{

				tmp++;
			}










			if (tmp == ')')
			{
				if (flag == 1)
				{
					return (0);
				}
			}

			tmp++;
		}
		if (tmp == 0)







		if (*str == '{')
		if (*str == '[')


			return (0);
		str++;
	}

}


int		ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_put_ok(void)
{
	write(1, "OK\n", 3);
}

void	ft_put_error(void)
{
	write(1, "Error\n", 6);
}
