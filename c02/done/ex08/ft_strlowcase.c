/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:12:46 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 22:20:27 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int cur;

	cur = 0;
	if (str[cur] == 0)
	{
		return (str);
	}
	while (str[cur] != 0)
	{
		if ('A' <= str[cur] && str[cur] <= 'Z')
		{
			str[cur] = str[cur] + 32;
		}
		cur++;
	}
	return (str);
}
