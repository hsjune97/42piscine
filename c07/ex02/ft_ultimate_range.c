/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:46:20 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 03:12:47 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *buff;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buff = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (buff == NULL)
		return (-1);
	*range = buff;
	i = 0;
	while (min + i < max)
	{
		buff[i] = min + i;
		i++;
	}
	return (max - min);
}
