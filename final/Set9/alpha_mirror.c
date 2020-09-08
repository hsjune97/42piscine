/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 14:25:27 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/08 14:26:30 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_mirror(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
		print_mirror(av[1]);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_mirror(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = 'z' - (str[i] - 'a');
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		ft_putchar(str[i]);
		i++;
	}
}
