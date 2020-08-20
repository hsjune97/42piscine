/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:30:27 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/05 18:31:51 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int cur;

	cur = 0;
	if (str[cur] == 0)
		return (1);
	while (str[cur] != 0)
	{
		if ('A' <= str[cur] && str[cur] <= 'Z')
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
