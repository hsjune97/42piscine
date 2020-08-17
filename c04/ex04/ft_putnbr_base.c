/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 08:52:50 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/17 17:22:23 by seougjun         ###   ########.fr       */
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
		ft_putnbr_base_recursive(n/r, base, r);
		write(1, &(base[-(n%r)]), 1);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n > r -1)
			ft_putnbr_base_recursive(n/r, base, r);
		write(1, &(base[n%r]), 1);
	}
}

int		is_invalid_base(char *base)
{
	int i;
	int j;
	char *curr;

	i = 0;
	curr = base;
	if (base == 0 || ft_strlen(base) == 1)
		return (1);
	while (base[i] != 0)
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	while (*curr != 0)
	{
		if (*curr == '\t' || *curr == '\n' || *curr == '\v' || *curr == '\f'
			|| *curr == '\r' || *curr == ' ' || *curr == '+' || *curr == '-')
			return (1);
		curr++;
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
