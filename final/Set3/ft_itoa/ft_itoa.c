#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		ft_nbrlen(int nbr);

char	*ft_itoa(int nbr)
{
	char *str;
	int size;
	int sign;
	int i = 0;

	size = ft_nbrlen(nbr);
	str = (char*)malloc(sizeof(char) * size + 1);
	if (nbr == -2147483648)
	{
		str = "-2147483648\0";
		return (str);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		sign = -1;
	}
	while (i < size)
	{
		str[size - 1 - i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	if (sign == -1)
		str[0] = '-';
	str[size] = '\0';
	return (str);
}

int		ft_nbrlen(int nbr)
{
	int count = 0;

	if (nbr == 0)
		return (1);
	if (nbr == -2147483648)
		return (11);
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr >= 1)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}


int		main()
{
	int nbrs[] = {INT_MIN, -42, -1, 0, 1, 42, INT_MAX};
	char *str;
	int i = 0;
	int size = sizeof(nbrs)/sizeof(int);

	char *test;
	test = (char*)malloc(sizeof(char) * 3 + 1);
	test[0] = 1 + '0';
	test[1] = 2 + '0';
	test[2] = 'c';
	test[3] = '\0';

	while (i < size)
	{
		printf("int: %d ", nbrs[i]);
		printf("num_len: %d ", ft_nbrlen(nbrs[i]));
		str = ft_itoa(nbrs[i]);
		printf("string: %s\n", str);
		i++;
	}

	printf("Test: %s\n", test);
	return (0);
}
