/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:19:16 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/04 13:19:17 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	octet = octet << 4 | octet >> 4;
	return (octet);
}

int		main()
{
	unsigned char a = '9' + 1;
	unsigned char b;

	b = swap_bits(a);

	printf("a: %c, %d, %x\n", a, a, a);
	printf("b: %c, %d, %x\n", b, b, b);
	return (0);
}
