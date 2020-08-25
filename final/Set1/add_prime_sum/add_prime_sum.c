/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:57:04 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/25 12:57:09 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_positive(char *str);
int		is_prime(unsigned int num);
unsigned int	to_int(char *str);
void	ft_putnbr(unsigned int n);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	unsigned int x;
	unsigned int n;
	unsigned int sum;

	if (argc != 2 || is_positive(argv[1]) == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = to_int(argv[1]);
	sum = 0;
	x = 0;
	while (++x <= n)
	{
		if (is_prime(x) == 1)
			sum += x;
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}

int		is_positive(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 0 && str[i] > 9)
			return (0);
		i++;
	}
	if (str[0] == '0')
		return (0);
	return (1);
}

unsigned int	to_int(char *str)
{
	unsigned int sum;
	int i;

	sum = 0;
	i = 0;
	while (str[i] != 0)
	{
		sum += str[i] - '0';
		i++;
	}
	return (sum);
}

int		is_prime(unsigned int num)
{
	unsigned int x;

	if (num == 0 || num == 1)
		return (0);
	if (num == 2 || num == 3)
		return (1);
	x = 1;
	while (++x < num && x <= 67000)
	{
		if (num % 2 == 0 || num % 3 == 0)
			return (0);
		if (num % x == 0)
			return (0);
	}
	return (1);
}
void	ft_putnbr(unsigned int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
