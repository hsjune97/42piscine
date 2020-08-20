/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 08:52:50 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/20 19:32:57 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_invalid_base(char *base);
int		ft_strlen(char *str);
int		ft_base_type(char *base);
void	ft_putnbr_base_recursive(int n, char *base, int r);

void	ft_putnbr_base(int nbr, char *base)
{
	int radix;

	if (is_invalid_base(base) == 1)
	{
		return ;
	}
	radix = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, radix);
}

void	ft_putnbr_base_recursive(int n, char *base, int r)
{
	if (n == -2147483648)
	{
		ft_putnbr_base_recursive(n / r, base, r);
		write(1, &(base[-(n % r)]), 1);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n > r - 1)
			ft_putnbr_base_recursive(n / r, base, r);
		write(1, &(base[n % r]), 1);
	}
}


int		invalid_base(char *base)
{
	int i;
	int j;

	i = -1;
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

int		ft_strlen(char *str)
{
	int cur;

	cur = 0;
	while (str[cur] != 0)
	{
		cur++;
	}
	return (cur);
}
