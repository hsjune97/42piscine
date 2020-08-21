/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splite_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 13:51:42 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/21 14:16:54 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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







bool	is_char_in_string(char c, char *set)
{
	while (true)
	{
		if (*set == '\0')
			return (c == '\0');
		if (*set == c)
			return (true);
		set++;
	}
	return (false);
}


int		count_occur(char *str, char *charset)
{
	int		count;
	char	*previous;
	char	*next;

	count = 0;
	previous = str;
	next = str;
	while (true)
	{
		if (is_char_in_string(*str, charset))
			next = str;
		if (next - previous > 1)
			count++;
		if (*str == '\0')
			break ;
		previous = next;
		str++;
	}
	return (count);
}


int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	printf("count occ: %d\n", count_occur("  a  b   b   ", " a   "));
	//split = ft_split("ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu", "yenORYQ");
	split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}
