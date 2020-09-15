/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:37:33 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/15 14:37:34 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		base_match(char c, int str_base)
{
	int i;
	char base_str[] = "0123456789abcdef";

	while (i < str_base)
	{
		if (c == base_str[i] || c == base_str[i] - 32)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int rtn = 0;
	int i = 0;

	if (str[i] == '-')
	{
		i++;
		sign *= -1;
	}
	while (str[i])
	{
		rtn *= str_base;
		if (base_match(str[i], str_base) != -1)
			rtn += base_match(str[i], str_base);
		i++;
	}
	return (sign * rtn);
}

int		main()
{
	const char str[] = "7Ff";
	int base = 16;
	int n;
	int b;

	b = base_match(str[1], base);
	printf("base match: %d\n", b);

	n = ft_atoi_base(str, base);
	printf("atoi_base: %d\n", n);


	printf("%c\n", str[1] + 32);
	return (0);
}
