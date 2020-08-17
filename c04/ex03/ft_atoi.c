/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 07:22:27 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/17 16:36:41 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_space(char c);
int		ft_sign(char c);
int		ft_num(char c);

int		ft_atoi(char *str)
{
	int n;
	int sign;

	sign = 1;
	n = 0;
	while (ft_space(*str) == 1)
	{
		str++;
	}
	while (ft_sign(*str) == 1)
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (ft_num(*str) == 1)
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (sign * n);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_sign(char c)
{
	if (c == '+' || c == '-')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
