/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:29:17 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 14:41:07 by sehwang          ###   ########.fr       */
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
