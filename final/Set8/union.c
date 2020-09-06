/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 16:19:08 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/06 16:19:10 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int asc[256] = {0};
	int i;

	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}

	i = 0;
	while (av[1][i])
	{
		asc[(int)(av[1][i])] = 1;
		i++;
	}

	i = 0;
	while (av[2][i])
	{
		asc[(int)(av[2][i])] = 1;
		i++;
	}
	i = 0;
	while (av[1][i])
	{
		if (asc[(int)(av[1][i])] == 1)
		{
			ft_putchar(av[1][i]);
			asc[(int)(av[1][i])] = 2;
		}
		i++;
	}

	i = 0;
	while (av[2][i])
	{
		if (asc[(int)(av[2][i])] == 1)
		{
			ft_putchar(av[2][i]);
			asc[(int)(av[2][i])] = 2;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
