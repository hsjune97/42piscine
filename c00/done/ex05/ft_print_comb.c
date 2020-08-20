/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:12:41 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 11:21:07 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_write(char n1, char n2, char n3);

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7')
	{
		while (n2 <= '8')
		{
			while (n3 <= '9')
			{
				ft_write(n1, n2, n3);
				n3++;
			}
			n2++;
			n3 = n2 + 1;
		}
		n1++;
		n2 = n1 + 1;
		n3 = n2 + 1;
	}
}

void	ft_write(char n1, char n2, char n3)
{
	if (n1 == '7' && n2 == '8' && n3 == '9')
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
	}
	else
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
