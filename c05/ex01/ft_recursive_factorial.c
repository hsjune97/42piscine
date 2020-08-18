/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:36:24 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/18 19:36:32 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (1 == nb)
	{
		return (nb);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
