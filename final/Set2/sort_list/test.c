#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}


int		tri(t_list *lst, int (*cmp)(int, int))
{
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
			return (0);
		lst = lst->next;
	}
	return (1);
}

t_list 	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *first;
	int swap;

	swap = 0;
	first = lst;
	while (tri(first, croissant) == 0)
	{
		lst = first;
		while (lst->next != NULL)
		{
			if ((*cmp)(lst->data, lst->next->data) == 0)
			{
				swap = lst->data;
				lst->data = lst->next->data;
				lst->next->data = swap;
			}
			lst = lst->next;
		}
	}
	return (first);
}

int main(void)
{
	t_list *lst;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = 20;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = 10;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->data = 0;
	lst->next->next->next = NULL;

	lst = sort_list(lst, croissant);

	while (lst != NULL)
	{
		printf("%d\n", lst->data);
	    lst = lst->next;
	}

	return (0);
}
