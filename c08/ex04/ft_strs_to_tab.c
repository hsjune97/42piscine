/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 03:13:54 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 07:47:58 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char		*dest;
	int			i;

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*rtn;
	int			i;

	rtn = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (rtn == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		rtn[i].size = ft_strlen(av[i]);
		rtn[i].str = ft_strdup(av[i]);
		rtn[i].copy = ft_strdup(av[i]);
		i++;
	}
	rtn[i].str = 0;
	return (rtn);
}
