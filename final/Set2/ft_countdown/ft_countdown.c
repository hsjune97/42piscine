/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 17:15:35 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/27 17:15:38 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	char num;

	num = '9';
	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
	write(1, "\n", 1);
	return (0);
}
