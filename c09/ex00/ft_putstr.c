/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:34:16 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 12:34:18 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int cur;

	cur = 0;
	while (str[cur] != 0)
	{
		ft_putchar(str[cur]);
		cur++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
