/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 18:09:49 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/31 18:09:50 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		is_in_str(char *str, char c);

int		main(int ac, char **av)
{
	char from;
	char to;
	int i = 0;

	if (ac != 4)
	{
		ft_putchar('\n');
		exit (0);
	}

	if (ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
	{
		ft_putchar('\n');
		exit (0);
	}

	from = *av[2];
	to  = *av[3];

	if (!is_in_str(av[1], from))
	{
		ft_putstr(av[1]);
		ft_putchar('\n');
		return (0);
	}

	while (i < ft_strlen(av[1]))
	{
		if (av[1][i] == from)
			av[1][i] = to;
		i++;
	}
	ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_in_str(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
