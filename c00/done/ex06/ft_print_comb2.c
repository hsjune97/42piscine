/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 23:54:37 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/06 12:29:20 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_write(int n);

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = n1 + 1;
	while (n1 < 99)
	{
		while (n2 <= 99)
		{
			ft_write(n1);
			ft_putchar(' ');
			ft_write(n2);
			if (n1 != 98 || n2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}

void	ft_write(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
