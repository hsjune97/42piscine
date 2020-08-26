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
	t_list *curr;
	t_list *tmp;
	int i;
	i = 0;
	if (*begin_list == NULL)
		return;
	while ((*cmp)((*begin_list)->data, data_ref) == 0) // on heads
	{
		tmp = (*begin_list)->next; // caution on (): (*begin_list)
		free(*begin_list);
		(*begin_list) = tmp;
	}
	curr = *begin_list;
	tmp = *begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			tmp->next = curr->next;
			free(curr);
			curr = tmp;
			i = 0;
		}
		if (i > 0)//don't move tmp if the curr was target over
			tmp = tmp->next;
		if(curr != NULL)
			curr = curr->next;
		i++;
	}
}


int main(void)
{
	t_list *lst;
	int i = 1;
	int j = 2;
	int k = 2;
	int l = 4;
	int t = 2;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = &i;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = &j;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->data = &k;
	lst->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->data = &l;
	lst->next->next->next->next =  NULL;

	ft_list_remove_if(&lst, &t, cmp);

	while (lst != NULL)
	{
		printf("%d\n", *(int*)lst->data);
		lst = lst->next;
	}

	return (0);
}
