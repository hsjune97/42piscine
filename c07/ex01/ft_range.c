/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 08:49:06 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 08:41:49 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min >= max)
		return (0);//(void*)0
	range = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (!range)
		return (0);//
	i = -1;
	while (max > min + ++i)
	{
		range[i] = min + i;
	}
	return (range);
}
