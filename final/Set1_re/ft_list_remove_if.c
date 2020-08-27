#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int cmp(void *data, void *data_ref)
{
	int *i = data;
	int *j = data_ref;

	if (*i == *j)//careful! comparing value at the pointers
		return(0);
	else
		return(1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;
	t_list *tmp;
	int i = 0;

	if (begin_list == NULL || *begin_list == NULL)
		return;
	while ((*cmp)((*begin_list)->data, data_ref) == 0)
	{//have to use while because list could have multiple target on head
		tmp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	curr = *begin_list;
	tmp = *begin_list;
	while (curr)
	{
		if ((*cmp)(data_ref, curr->data) == 0)
		{
			tmp->next = curr->next;
			free(curr);
			curr = tmp->next;
			i = 0;
		}
		if (i != 0)
			tmp = tmp->next;
		if (curr)
			curr = curr->next;
		i = 1;
	}
}

int main(void)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 4;
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	list->data = &a; // pointer
	list->next = (t_list*)malloc(sizeof(t_list));
	list->next->data = &b;
	list->next->next = (t_list*)malloc(sizeof(t_list));
	list->next->next->data = &c;
	list->next->next->next = (t_list*)malloc(sizeof(t_list));
	list->next->next->next->data = &d;
	list->next->next->next->next = NULL;

	ft_list_remove_if(&list, &a, cmp);//cmp = function pointer
	// put & on list

	t_list *curr = list;

	while (curr)
	{
		printf("%d\n", *(int*)curr->data);//void* to int* and take the value in the pointer
		curr = curr->next;
	}
	return (0);
}
