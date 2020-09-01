#include <unistd.h>
#include <stdio.h>

int		hidenp(char *str1, char *str2);
int		is_in_str(char c, char *str);

int main(int ac, char **av)
{
	char rtn;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	rtn = hidenp(av[1], av[2]) + '0';
	write(1, &rtn, 1);
	write(1, "\n", 1);
	return (0);
}

int		hidenp(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	while (str2[i])
	{
		if (str1[j] == str2[i])
		{
			j++;
			if(!str1[j])
				return (1);
		}
		i++;
	}
	return (0);
}
