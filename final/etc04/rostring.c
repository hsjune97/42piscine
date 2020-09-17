/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjun <seongjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 00:40:23 by seongjun          #+#    #+#             */
/*   Updated: 2020/09/17 00:40:47 by seongjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		is_space(char c);
int		ft_strlen(char *str);
void	rostring(char *str);
void	ft_strcpy(char *dest, char *src, int start, int end);

int		main(int ac, char **av)
{
	if (ac >= 2)
		rostring(av[1]);
	ft_putchar('\n');
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
		ft_putchar(str[i++]);
}
int		is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\v' || c == '\t')
		return (1);
	return (0);
}
int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
int		cnt_word(char *str)
{
	int i = 0;
	int cnt = 0;
	int len;
	len = ft_strlen(str);

	while (is_space(str[i]))
		i++;
	while (i < len)
	{
		if (!is_space(str[i]))
		{
			cnt++;
			while (!is_space(str[i]) && i != len)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}
void	ft_strcpy(char *dest, char *src, int start, int end)
{
	while (start < end)
		*dest++ = src[start++];
	*dest = '\0';
}

void	rostring(char *str)
{
	char **s_ary, **p_print, **tmp;
	int i = 0;
	int j;
	int cnt;
	int len;

	len = ft_strlen(str);
	cnt = cnt_word(str);

	s_ary = (char**)malloc(sizeof(char*) * cnt);
	p_print = s_ary;
	while (i < len)
	{
		if (!is_space(str[i]))
		{
			j = i;
			while (!is_space(str[i]) && i != len)
				i++;
			*s_ary = (char*)malloc(sizeof(char) * (i - j + 1));
			ft_strcpy(*s_ary, str, j, i);
			s_ary++;
		}
		else
			i++;
	}
	i = 1;
	tmp = p_print++;
	while (i < cnt)
	{
		ft_putstr(*p_print++);
		ft_putchar(' ');
		i++;
	}
	ft_putstr(*tmp);
}
