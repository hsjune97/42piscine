/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 17:24:01 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/18 14:05:50 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_len(char *str)
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

	i = -1;
	if (*base == 0 || ft_len(base) == 1)
		return (1);
	while (base[++i] != 0)
	{
		j = i;
		while (++j < ft_len(base))
		{
			if (base[i] == base[j])
				return (1);
		}
	}
	i = -1;
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

int		ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
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

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int sign;
	int r;
	int tmp;

	sign = 1;
	n = 0;
	r = ft_len(base);
	if (invalid_base(base) == 1)
		return (0);
	while (ft_space(*str) == 1)
		str++;
	while ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((tmp = ft_match(*str, base)) != -1)
	{
		n *= r;
		n += tmp;
		str++;
	}
	return (n * sign);
}
