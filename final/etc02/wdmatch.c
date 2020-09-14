#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	wdmatch(char *str1, char *str2);

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
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
		write(1, &str[i], 1);
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
void	wdmatch(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int len1;
	int len2;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);

	while (i < len1)
	{
		while (j < len2)
		{
			if (str1[i] == str2[j])
			{
				j++;
				break ;
			}
			j++;
			if (!str2[j])
				return;
		}
		i++;
	}
	ft_putstr(str1);
}
