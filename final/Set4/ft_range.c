/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:31:37 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/01 14:32:09 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *rtn;
	int i = 0;
	rtn = (int*)malloc(sizeof(int) * (end - start + 1));

	while (i < end - start + 1)
	{
		rtn[i] = end - i;
		i++;
	}
	return (rtn);
}
