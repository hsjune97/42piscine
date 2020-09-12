/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:24:08 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/10 15:24:09 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int hcf(unsigned int a, unsigned int b)
{
	unsigned int rtn;
	if (a < b)
		rtn = a;
	else
		rtn = b;
	while (a % rtn != 0 || b % rtn != 0)
		rtn--;
	return (rtn);
}
unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int m;
	m = (a * b) / hcf(a, b);
	return (m);
}

int		main()
{
	unsigned int a = 3;
	unsigned int b = 7;
	unsigned int c;

	c = lcm(a, b);

	printf("%d\n", c);

	return (0);
}
