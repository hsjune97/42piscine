/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:56:06 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/19 21:59:31 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ret;

	if (power < 0)
		return (0);
	ret = 1;
	while (power-- > 0)
		ret *= nb;
	return (ret);
}
