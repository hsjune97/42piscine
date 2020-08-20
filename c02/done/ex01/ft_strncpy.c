/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehwang <sehwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 16:44:52 by sehwang           #+#    #+#             */
/*   Updated: 2020/08/13 15:23:07 by sehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cur;

	cur = 0;
	while (cur < n && src[cur] != 0)
	{
		dest[cur] = src[cur];
		cur++;
	}
	while (cur < n)
	{
		dest[cur] = '\0';
		cur++;
	}
	return (dest);
}
