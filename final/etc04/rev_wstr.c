/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:30:02 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/16 17:30:04 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		is_space(char c);
void	ft_putchar(char c);
void	rev_wstr(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	ft_putchar('\n');
	return (0);
}
int		ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\f' || c == '\r' || c == '\v' || c == '\t')
		return (1);
	return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rev_wstr(char *str)
{
	int i;
	int j;
	int tmp;
	int len;
	len = ft_strlen(str);
	i = len - 1;

	while (i >= 0)
	{
		if (!is_space(str[i]))
		{
			j = i;
			while (!is_space(str[i]) && i != 0)
				i--;
			if (i != 0)
				tmp = i + 1;
			else
				tmp = 0;
			while (tmp <=  j)
			{
				ft_putchar(str[tmp]);
				tmp++;
			}
			if (i != 0)
				ft_putchar(' ');
		}
		i--;
	}
}
