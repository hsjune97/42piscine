/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:56:06 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/18 20:18:07 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int tmp;

	tmp = nb;
	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		nb *= tmp;
		power--;
	}
	return (nb);
}
