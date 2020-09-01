/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:53:09 by seongjun          #+#    #+#             */
/*   Updated: 2020/09/01 16:53:11 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str);

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ulstr(av[1]);
	return (0);
}

void	ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
