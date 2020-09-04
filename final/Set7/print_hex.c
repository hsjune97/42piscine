/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:43:56 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/04 14:43:57 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_int_hex(int n);

int		main(int ac, char  **av)
{
	int num = 0;
	int i = 0;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while(av[1][i])
	{
		num *= 10;
		num += av[1][i] - '0';
		i++;
	}
	printf("%d\n",num);
	ft_int_hex(num);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_hex(int n)
{
	char  hex[16] = "0123456789abcdef";

	if (n < 16)
	{
		ft_putchar(hex[n]);
	}
	if (n >= 16)
	{
		ft_int_hex(n / 16);
		ft_int_hex(n % 16);
	}
}
