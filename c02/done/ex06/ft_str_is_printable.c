/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:45:30 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/13 09:48:47 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int cur;

	cur = 0;
	if (str[cur] == 0)
		return (1);
	while (str[cur] != 0)
	{
		if (32 <= str[cur] && str[cur] <= 126)
		{
			cur++;
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
