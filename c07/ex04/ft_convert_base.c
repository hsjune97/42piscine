#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		invalid_base(char *base);
int		ft_match(char c, char *base);
void	*ft_putnbr_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int 	sign;
	int		tmp;
	int		n;

	if (invalid_base(base_from) == 1 || invalid_base(base_to) == 1)
		return ((char*)0);
	while (*nbr == ' ' || *nbr == '\t' || *nbr == '\n' || *nbr == '\v' || *nbr == '\f' || *nbr == '\r')
		nbr++;
	sign = 1;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	n = 0;
	while ((tmp = ft_match(*nbr, base_from)) != - 1)
	{
		n *= ft_strlen(base_from);
		n += tmp;
		nbr++;
	}
	if (n == 0)
		return ("0");
	else
		return (ft_putnbr_base(n * sign, base_to));
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int		invalid_base(char *base)
{
	int i;
	int j;

	i = - 1;
	if (*base == 0 || ft_strlen(base) == 1)
		return (1);
	while (base[++i] != 0)
	{
		j = i;
		while (++j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (1);
		}
	}
	i = - 1;
	while (base[++i] != 0)
	{
		if (base[i] == ' ' || base[i] == '+' ||
			base[i] == '-' || base[i] == '\t' ||
			base[i] == '\n' || base[i] == '\v' ||
			base[i] == '\r' || base[i] == '\f')
			return (1);
	}
	return (0);
}

int		ft_match(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

void	*ft_putnbr_base(int nbr, char *base)
{
	char	*rtn;
	int		tmp;
	int 	size;
	int		i;

	size = 0;
	tmp = nbr;
	if (tmp < 0 && ++size)
		tmp = -tmp;
	while (tmp >= 1 && ++size)
		tmp /= ft_strlen(base);
	rtn = (char*)malloc(sizeof(char) * size + 1);
	if (nbr < 0)
	{
		rtn[0] = '-';
		nbr = -nbr;
	}
	i = 0;
	while (nbr >= 1)
	{
		rtn[size - 1 - i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i++;
	}
	rtn[size] = '\0';
	return (rtn);
}


int		main(void)
{
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
}
