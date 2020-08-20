/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:57:58 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 19:58:37 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		cur;
	char	tmp;

	cur = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[cur] != 0)
	{
		tmp = str[cur];
		if (!(('a' <= tmp && tmp <= 'z') || ('A' <= tmp && tmp <= 'Z')))
		{
			return (0);
		}
		cur++;
	}
	return (1);
}
