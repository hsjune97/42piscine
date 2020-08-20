/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <sehwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 09:33:06 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/16 16:56:10 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i + 1 < size)
	{
		if (src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		else if (src[i] == 0)
			break ;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
