/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <sehwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 09:35:41 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/16 16:31:32 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_flag(char c)
{
	if ('a' <= c && c <= 'z')
		return (0);
	if ('A' <= c && c <= 'Z')
		return (0);
	if ('0' <= c && c <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i] != 0)
	{
		if ('a' <= str[i] && str[i] <= 'z' && flag == 1)
		{
			str[i] = str[i] - 32;
			flag = 0;
			i++;
			continue ;
		}
		if ('A' <= str[i] && str[i] <= 'Z' && flag == 0)
			str[i] = str[i] + 32;
		if ('A' <= str[i] && str[i] <= 'Z' && flag == 1)
			flag = 0;
		if ('0' <= str[i] && str[i] <= '9')
			flag = 0;
		if (ft_flag(str[i]) == 1)
			flag = 1;
		i++;
	}
	return (str);
}
