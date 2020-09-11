/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:34:05 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/11 11:34:07 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
int		is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\v' || c == '\r' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
int		cnt_str(char *str)
{
	int cnt = 0;
	int i = 0;
	int len;
	len = ft_strlen(str);
	while (is_space(str[i]))
		i++;
	while (i < len)
	{
		if (!is_space(str[i]))
		{
			cnt++;
			while (!is_space(str[i]) && i < len)
				i++;
		}
		i++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *src, int start, int end)
{
	int i = 0;
	while (start < end)
	{
		dest[i++] = src[start++];
	}
}
char	**ft_split(char *str)
{
	char 	**rtn;
	int		cnt = 0;
	int		start;
	int		len;
	len = ft_strlen(str);
	int		num_strs;
	num_strs = cnt_str(str);
	rtn = (char**)malloc(sizeof(char*) * num_strs);
	int i = 0;
	while(i < len)
	{
		if(!is_space(str[i]))
		{
			start = i;
			while (!is_space(str[i]) && i < len)
				i++;
			rtn[cnt] = (char*)malloc(sizeof(char) * (i - start));
			ft_strcpy(rtn[cnt++], str, start, i);
		}
		i++;
	}
	return (rtn);
}

int		main()
{
	int i;
	int cnt;
	char str[] = "Seongjun Can make it always right?  ";
	printf("original: %s\n", str);

	printf("str len: %d\n", ft_strlen(str));

	cnt = cnt_str(str);
	printf("total cnt: %d\n", cnt);

	char test[30];
	ft_strcpy(test, str, 3, 6);
	printf("strcpy: %s\n", test);

	char **str_ary;
	str_ary = ft_split(str);

	i = 0;
	while (i < cnt)
	{
		printf("string no.%d: %s\n", i, str_ary[i]);
		i++;
	}
	return (0);
}
