/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:04:52 by exam              #+#    #+#             */
/*   Updated: 2020/09/17 13:01:24 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	swap_elements(int *tab, unsigned int p1, unsigned int p2)
{
	int tmp = tab[p1];
	tab[p1] = tab[p2];
	tab[p2] = tmp;
}

void	bubble_sort(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				swap_elements(tab, j, j + 1);
			j++;
		}
		i++;
	}
}

void	sort_int_tab(int *tab, unsigned int size)
{
	if (size <= 1)
		return ;
	bubble_sort(tab, size);
}



int		main(void)
{
	int tab[] = { -1, 6, 7, 3, -6, 7, 2, 4, 5, 2147483647, -2147483648 };
	unsigned int size = 3;
	unsigned int i = 0;

	sort_int_tab(tab, size);
	printf("size: %d\n", size);

	while (i < 11)
		{
			printf("element %d: %d\n", i, tab[i]);
			i++;
		}

	// while (size < 11)
	// {
	// 	i = 0;
	// 	sort_int_tab(tab, size);
	// 	printf("size: %d\n", size);
	// 	while (i < 11)
	// 	{
	// 		printf("element %d: %d\n", i, tab[i]);
	// 		i++;
	// 	}
	// 	printf("-------------------------\n");
	// 	size++;
	// }


	return 0;
}
