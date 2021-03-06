/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <hsjung97@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:26:28 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/11 15:19:11 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int cur;

	cur = 0;
	while (src[cur] != 0)
	{
		dest[cur] = src[cur];
		cur++;
	}
	dest[cur] = '\0';
	return (dest);
}
