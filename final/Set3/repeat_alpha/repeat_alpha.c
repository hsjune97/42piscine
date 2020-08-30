/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 19:29:44 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/30 19:29:45 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int 	to_num(char c);

int		main(int ac, char **av)
{
	int num;
	int i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*av[1])
	{
		i = 0;
		num = to_num(*av[1]);
		while (i < num)
		{
			ft_putchar(*av[1]);
			i++;
		}
		av[1]++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		to_num(char c)
{
	int num;

	if ('A' <= c && c <= 'X')
		num = (int)(c - 'A' + 1);
	else if ('a' <= c && c <= 'x')
		num = (int)(c - 'a' + 1);
	else
		num = 1;
	return (num);
}
