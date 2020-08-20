/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:06:58 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/05 19:13:21 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int cur;

	cur = 0;
	if (str[cur] == 0)
	{
		return (str);
	}
	while (str[cur] != 0)
	{
		if ('a' <= str[cur] && str[cur] <= 'z')
		{
			str[cur] = str[cur] - 32;
		}
		cur++;
	}
	return (str);
}
