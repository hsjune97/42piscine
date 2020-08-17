/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 17:24:01 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/17 19:40:24 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		invalid_base(char *base);
int		ft_len(char *str);
int		ft_space(char c);
int		ft_sign(char c);
int		ft_num(char c);
int		ft_putnbr_base(int n, char *base);
int		ft_putnber_base_rec(int n, char *base, int r);

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int sign;
	int r;

	sign = 1;
	n = 0;
	r = ft_len(base);
	if (invalid_base(base) == 1)
		return (0);
	while (ft_space(*str) == 1)
		str++;
	while (ft_sign(*str) == 1)
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	ft_putnbr_base();
}

int		invalid_base(char *base)
{
	int i;
	int j;

	if (*base == 0 || ft_len(base) == 1)
		return (1);
	i = 0;
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == ' ' || base[i] == '+' ||
			base[i] == '-' || base[i] == '\t' ||
			base[i] == '\n' || base[i] == '\v' ||
			base[i] == '\r' || base[i] == '\f')
			return (1);
	}
	return (0);
}

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int		ft_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
