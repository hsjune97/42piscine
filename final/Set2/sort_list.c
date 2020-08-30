#include <stdio.h>
#include <stdlib.h>
#include "list.h"
// don't need to use malloc or free because it dosen't need to remove or add node


// typedef	struct		s_list
// {
// 	int				data;
// 	struct	s_list	*next;
// }					t_list;

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{

}

int		main(void)
{
	t_list *curr;
	//t_list *tmp;
	int ary[] = {1, 2, 2, 0, 5, 6, 0, 3, 9};
	int i = 0;
	int	size = sizeof(ary)/sizeof(int);

	t_list *list = (t_list*)malloc(sizeof(t_list));
	curr = list;

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

}
