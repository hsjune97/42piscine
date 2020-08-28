#include <stdio.h>
#include <stdlib.h>

int		is_space(char c);

int		ft_atoi(const char *str)
{
	int sign;
	int	sum;

	sign = 1;
	sum = 0;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		sum *= 10;
		sum += *str - '0';
		str++;
	}
	return (sign * sum);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f' || c == '\v')
		return (1);
	return (0);
}

int main(void)
{
	const char str1[] = "   		---+--+1234ab567";
	const char str2[] = "   		0&&25";
	const char str3[] = "   		--+0265&&25";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", atoi(str1));

	printf("%d\n", ft_atoi(str2));
	printf("%d\n", atoi(str2));

	printf("%d\n", ft_atoi(str3));
	printf("%d\n", atoi(str3));
}
