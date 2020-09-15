/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:14:00 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/15 15:14:01 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int *rge;
	int *rtn;

	if (end >= start)
	{
		rge = (int*)malloc(sizeof(int) * (end - start + 1));
		rtn = rge;

		while (start <= end)
		{
			*rge = start;
			rge++;
			start++;
		}
	}
	else
	{
		rge = (int*)malloc(sizeof(int) * (start - end + 1));
		rtn = rge;

		while (start >= end)
		{
			*rge = start;
			rge++;
			start--;
		}
	}
	return (rtn);
}

int		main()
{
	int i = 0;
	int *ary;

	ary = ft_range(1, -3);

	while (i < 6)
	{
		printf("%d ", ary[i]);
		i++;
	}
	return (0);
}
