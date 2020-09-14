#include "do_op.h"

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_opt(char c)
{
	if (c == '+' || c == '-' || c == '%' || c == '/' || c == '*')
		return (1);
	return (0);
}

void	do_op(char *num_str1, char *opt, char *num_str2)
{
	int num1;
	int num2;
	int ans;

	if (ft_strlen(num_str1) == 1 && num_str1[0] == '0')//don't need to handle exceptions
		num1 = 0;
	else
	{
		num1 = atoi(num_str1);
		if (num1 == 0)
			return;
	}
	if (ft_strlen(num_str2) == 1 && num_str2[0] == '0')
		num2 = 0;
	else
	{
		num2 = atoi(num_str2);
		if (num2 == 0)
			return;
	}

	// num1 = atoi(num_str1); <<-- just use atoi(read question)
	// num2 = atoi(num_str2);

	if (ft_strlen(opt) != 1 || !is_opt(opt[0]))
		return;

	if (opt[0] == '+')
		ans = num1 + num2;
	if (opt[0] == '-')
		ans = num1 - num2;
	if (opt[0] == '*')
		ans = num1 * num2;
	if (opt[0] == '/')
	{
		if (num2 == 0)
			return;
		ans = num1 / num2;
	}
	if (opt[0] == '%')
	{
		if (num2 == 0)
			return;
		ans = num1 % num2;
	}
	printf("%d", ans);
}
