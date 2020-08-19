/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 15:02:08 by seongjun          #+#    #+#             */
/*   Updated: 2020/08/19 15:02:10 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
		return (0);
	while (++i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) != 0)
			return nb;
		nb++;
	}
}
