/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 09:28:49 by seongjun          #+#    #+#             */
/*   Updated: 2020/09/07 09:28:51 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	rstr_cap(char *str);
int		is_space(char c);

int		main(int ac, char **av)
{
	int i;
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		rstr_cap(av[i]);
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	rstr_cap(char *str)
{
	int len;
	int i;

	len = ft_strlen(str);
	i = 0;
	while (is_space(str[i]))
		i++;
	while (i < len)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		if (is_space(str[i]) && i > 0 && 'a' <= str[i - 1] && str[i - 1] <= 'z')
			str[i - 1] -= 32;
		i++;
	}
	if ('a' <= str[i - 1] && str[i - 1] <= 'z')
		str[i- 1] -= 32;
}
int		is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\r' || c == '\v' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
