/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 08:49:06 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/20 08:49:10 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(int) * (max - min));
	if (!range)
		return (0);
	i = -1;
	while (max > min + ++i)
	{
		range[i] = min + i;
	}
	return (range);
}
