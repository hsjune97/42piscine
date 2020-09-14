/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:16:42 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/14 16:17:01 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_bits(unsigned char octet) // do easy way!
{
	int n = 128;
	while (1)
	{
		if (n < 1)
			break ;
		if (octet / n >= 1)
		{
			ft_putchar('1');
			octet %= n;
		}
		else
			ft_putchar('0');
		n /= 2;
	}
}
