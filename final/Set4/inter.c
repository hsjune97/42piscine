/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:50:02 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/01 13:50:03 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter_dis(char *str1, char *str2);

int		main(int ac, char **av)
{

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	inter_dis(av[1], av[2]);

	write(1, "\n", 1);
	return (0);
}

void	inter_dis(char *str1, char *str2)
{
	int asc[258] = {};
	int i;

	i = 0;
	while (str2[i])
	{
		asc[(int)str2[i]] = 1;
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (asc[(int)str1[i]] == 1)
		{
			write(1, &str1[i], 1);
			asc[(int)str1[i]] = 2;
		}
		i++;
	}
}
