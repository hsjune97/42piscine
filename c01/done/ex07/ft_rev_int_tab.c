/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:20:03 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 14:53:01 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cur;
	int tmp[size];

	cur = 0;
	while (cur < size)
	{
		tmp[cur] = tab[size - 1 - cur];
		cur++;
	}
	cur = 0;
	while (cur < size)
	{
		tab[cur] = tmp[cur];
		cur++;
	}
}
