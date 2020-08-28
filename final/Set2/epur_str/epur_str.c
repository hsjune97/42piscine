/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 15:10:22 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/28 15:10:24 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		is_space(char c);

int		main(int ac, char *av[])
{
	int flag;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	flag = 1;
	while (*av[1])
	{
		while (is_space(*av[1]))
		{
			av[1]++;
			if(!is_space(*av[1]) && flag == 0 && *av[1] != 0)
				ft_putchar(' ');
		}
		if (flag)
			flag = 0;
		ft_putchar(*av[1]);
		av[1]++;
	}
	ft_putchar('\n');
	return (0);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\v' ||
		c == '\r')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
