/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 00:42:45 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 14:24:42 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				is_in_set(char c, char *set)
{
	int i;

	i = -1;
	while (set[++i] != 0)
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

unsigned int	ft_cnt_strs(char *str, char *charset)
{
	unsigned int n;

	n = 0;
	while (*str)
	{
		if (is_in_set(*str, charset) == 0)
		{
			n++;
			while (is_in_set(*str, charset) == 0 && *str)
				str++;
		}
		str++;
	}
	return (n);
}

void			ft_strcpy(char *dest, char *src, char *str)
{
	while (src < str)
		*dest++ = *src++;
	*dest = '\0';
}

char			**ft_split(char *str, char *charset)
{
	char			**rtn;
	char			*sptr;
	unsigned int	i;

	rtn = (char **)malloc(sizeof(char*) * (ft_cnt_strs(str, charset) + 1));
	if (!rtn)
		return (0);
	i = 0;
	while (*str)
	{
		if (!is_in_set(*str, charset))
		{
			sptr = str;
			while (is_in_set(*str, charset) == 0 && *str)
				str++;
			rtn[i] = (char*)malloc(sizeof(char) * (str - sptr + 1));
			ft_strcpy(rtn[i++], sptr, str);
		}
		str++;
	}
	rtn[i] = 0;
	return (rtn);
}
