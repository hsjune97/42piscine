/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:08:53 by seongjun          #+#    #+#             */
/*   Updated: 2020/09/01 16:08:55 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int i = 0;
	char c1;
	char c2;

	c1 = 'a';
	c2 = 'B';

	while (i < 26)
	{
		if (i % 2 == 0)
		{
			write(1, &c1, 1);
			c1 += 2;
		}
		else
		{
			write(1, &c2, 1);
			c2 += 2;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
