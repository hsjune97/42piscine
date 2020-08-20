/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:44:35 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 22:00:03 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int cur;

	cur = 0;
	while (str[cur] != 0)
	{
		if ('a' <= str[cur] && str[cur] <= 'z')
		{
			cur++;
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
