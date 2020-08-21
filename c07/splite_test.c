/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splite_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 13:51:42 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 14:02:54 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int				is_same_charset(char c, char *charset)
{
	while (*charset != 0)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

unsigned int	count_word(char *str, char *charset)
{
	unsigned int count;

	count = 0;
	while (*str != 0)
	{
		if (is_same_charset(*str, charset) == 0)
		{
			count++;
			while (is_same_charset(*str, charset) == 0 && *str != 0)
				str++;
		}
		str++;
	}
	return (count);
}

void			ft_strcpy(char *result, char *temp, char *str)
{
	while (temp < str)
		*result++ = *temp++;
	*result = '\0';
}

char			**ft_split(char *str, char *charset)
{
	char			**result;
	char			*temp;
	unsigned int	w_num;
	unsigned int	index;

	index = 0;
	w_num = count_word(str, charset);
	result = (char**)malloc(sizeof(char*) * (w_num + 1));
	while (*str != 0)
	{
		if (is_same_charset(*str, charset) == 0)
		{
			temp = str;
			while (is_same_charset(*str, charset) == 0 && *str != 0)
				str++;
			result[index] = (char*)malloc(sizeof(char) * (str - temp + 1));
			ft_strcpy(result[index], temp, str);
			index++;
		}
		str++;
	}
	result[index] = 0;
	return (result);
}
