#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

int cmp(void *data, void *data_ref)
{
	int *i = data;
	int *j = data_ref;

	if (*i == *j)
		return (0);
	return (1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;
	while ((*begin_list) || (*begin_list)->next)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			*begin_list
		}

	}

}


int main(void)
{
	t_list *lst;
	int i = 1;
	int j = 2;
	int k = 3;
	int l = 4;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = &i;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = &j;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->data = &k;
	lst->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->data = &l;
	lst->next->next->next->next =  NULL;

	ft_list_remove_if(&lst, &j, cmp);

	while (lst != NULL)
	{
		printf("%d\n", *(int*)lst->data);
		lst = lst->next;
	}

	return (0);
}
