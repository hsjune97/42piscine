/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 15:08:57 by seougjun          #+#    #+#             */
/*   Updated: 2020/09/08 15:08:59 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_exp(char *str);
int		is_space(char c);
int		ft_strlen(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
		print_exp(av[1]);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_exp(char *str)
{
	int i = 0;
	int flag = 0;
	int len;
	len = ft_strlen(str);
	while (is_space(str[i]))
		i++;
	while (i < len)
	{
		flag = 0;
		while (is_space(str[i]))
		{
			i++;
			flag = 1;
		}
		if (flag && str[i])
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i < len - 1)
			ft_putchar(str[i]);
		i++;
	}
}

int		is_space(char c)
{
	if (c == ' ' || c == '\v' || c == '\r' || c == '\f' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
