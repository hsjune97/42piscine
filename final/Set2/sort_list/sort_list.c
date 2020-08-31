/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seougjun <seougjun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 18:01:45 by seougjun          #+#    #+#             */
/*   Updated: 2020/08/30 18:01:47 by seougjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
// don't need to use malloc or free because it dosen't need to remove or add node
// do not need to change nodes address, just change datas in nodes

int ascending(int a, int b)
{
	return (a <= b);
}

void	swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *curr;
	t_list *tmp;
	//int i = 0;

	if (lst == NULL)
		return (lst);
	curr = lst;
	tmp = lst;
	while (curr)
	{
		tmp = curr->next;
		while (tmp)
		{
			if (!(*cmp)(curr->data, tmp->data))
				swap(&curr->data, &tmp->data);
			tmp = tmp->next;
		}
		curr = curr->next;
	}
	return (lst);
}

int		main(void)
{
	t_list *head;
	t_list *curr;
	int ary[] = {1, 2, 2, 0, 5, 6, 0, 3, 9};
	int i = 0;
	int	size = sizeof(ary)/sizeof(int);

	t_list *list = (t_list*)malloc(sizeof(t_list));
	curr = list;
	head = list;
	while (i < size)
	{
		list->data = ary[i];
		if (i != size -1)
		{
			list->next = (t_list*)malloc(sizeof(t_list));
			list = list->next;
		}
		i++;
	}
	list = NULL;

	while (curr != NULL)
	{
		printf("%d ", curr->data);
		curr = curr->next;
	}
	printf("\n");

	head = sort_list(head, ascending);

	while (head)
	{
		printf("%d ", head->data);
		head = head->next;
	}
}
