/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:13:20 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/14 17:13:27 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i = 0;
	int len;
	char tmp;

	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

int 	main()
{
	char str1[] = "1234567";
	char *str2;

	printf("original: %s\n", str1);
	str2 = ft_strrev(str1);
	printf("rev: %s\n", str1);
	printf("rtn: %s\n", str2);
}
