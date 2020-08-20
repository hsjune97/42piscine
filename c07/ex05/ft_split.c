/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 00:42:45 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 00:42:49 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_set(char c, char *set)
{
	int i;

	i = -1;
	while (set [++i] != 0)
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

int		ft_cnt_strs(char *str, char *charset)
{
	int n;

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cur;

	cur = 0;
	while (cur < n && src[cur] != '\0')
	{
		dest[cur] = src[cur];
		cur++;
	}
	while (cur < n)
	{
		dest[cur] = '\0';
		cur++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**rtn;
	char	*sptr;
	int		i;

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
			rtn[i] = (char*)malloc(str - sptr + 1);
			ft_strncpy(rtn[i++], sptr, str - sptr);
		}
		str++;
	}
	rtn[i] = 0;
	return (rtn);
}
