/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 23:36:56 by seongjun          #+#    #+#             */
/*   Updated: 2020/09/01 23:37:00 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

int		ft_size_base(int value, int base);

char	*ft_itoa_base(int value, int base)
{
	int size;
	int i = 0;
	int sign = 1;
	char *rtn;
	int n;

	size = ft_size_base(value, base);
	rtn = (char*)malloc(sizeof(char) * (size + 1));

	if (value == INT_MIN)
	{
		n = (value % base) * -1;
		if (n < 10)
			rtn[size - 1] = n + '0';
		else
			rtn[size - 1] = n - 10 + 'A';
		value /= base;
		value *= -1;
		while (i < size - 1)
		{
			n = (value % base);
			if (n < 10)
				rtn[size - i - 2] = n + '0';
			else
				rtn[size - i - 2] = n - 10 + 'A';
			value /= base;
			i++;
		}
		rtn[0] = '-';
		rtn[size] = '\0';
	}
	else
	{
		if (value < 0)
		{
			value *= -1;
			sign = -1;
		}
		while (i < size)
		{
			n = (value % base);
			if (n < 10)
				rtn[size - i - 1] = n + '0';
			else
				rtn[size - i - 1] = n - 10 + 'A';
			value /= base;
			i++;
		}
		rtn[size] = '\0';
		if (sign == -1)
			rtn[0] = '-';
	}
	return (rtn);
}

int		ft_size_base(int value, int base)
{
	int rtn = 0;
	if (value == 0)
		return (1);
	if (value < 0)
	{
		rtn++;
		value *= -1;
	}
	while (value != 0)
	{
		value /= base;
		rtn++;
	}
	return (rtn);
}
