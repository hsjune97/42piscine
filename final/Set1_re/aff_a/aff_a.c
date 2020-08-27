/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 13:54:42 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/27 13:54:43 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i = -1;

	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][++i])
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			}
		}
		ft_putchar('\n');
		return (0);
	}
}

