/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:27:53 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/20 17:27:56 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **str, char *sep)
{
	int		i;
	int		len_sum;
	char	*ptr;
	char	*ret_str;

	if (size == 0)
		return ((char*)malloc(sizeof(char)));
	len_sum = ft_strlen(str[0]);
	i = 0;
	while (++i != size)
	{
		len_sum += ft_strlen(sep);
		len_sum += ft_strlen(str[i]);
	}
	ret_str = (char*)malloc(sizeof(char) * len_sum + 1);
	if (!ret_str)
		return (0);
	ptr = ft_strcat(ret_str, str[0]);
	i = 1;
	while (i < size)
	{
		ptr = ft_strcat(ptr, sep);
		ptr = ft_strcat(ptr, str[i++]);
	}
	*ptr = '\0';
	return (ret_str);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}
