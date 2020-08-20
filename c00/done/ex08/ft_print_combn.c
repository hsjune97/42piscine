/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:16:26 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 14:16:29 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_combn(int n, int *boxs, int now, int start);
void	ft_nbr(int n, int *boxs);

void	ft_print_combn(int n)
{
	int i;
	int boxs[10];

	i = 0;
	while (i < n)
	{
		boxs[i] = 0;
		i++;
	}
	ft_combn(n, boxs, 0, -1);
}

void	ft_combn(int n, int *boxs, int now, int start)
{
	int i;
	int max;

	if (now == n)
		ft_nbr(n, boxs);
	else
	{
		max = 10 - (n - now);
		i = start + 1;
		while (i <= max)
		{
			boxs[now] = i;
			ft_combn(n, boxs, now + 1, i);
			i++;
		}
	}
}

void	ft_nbr(int n, int *boxs)
{
	int i;
	int end;

	i = 0;
	while (i < n)
	{
		ft_putchar(boxs[i] + '0');
		i++;
	}
	i = n - 1;
	end = 1;
	while (i >= 0)
	{
		if (boxs[i] != 9 - (n - 1 - i))
		{
			end = 0;
			break ;
		}
		i--;
	}
	if (end == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
