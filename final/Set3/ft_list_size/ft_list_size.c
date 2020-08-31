#include "ft_list.h"

#include <stdio.h>
#include <stdlib.h>
int		ft_list_size(t_list *begin_list)
{
	int count = 0;

	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

// int main(void)
// {
// 	int ary[] = {1,2,3,4,5, 6};
// 	int i = 0;
// 	int size = sizeof(ary)/sizeof(int);

// 	t_list *list;
// 	t_list *curr;
// 	t_list *test;

// 	list = (t_list*)malloc(sizeof(t_list));
// 	curr = list;
// 	test = list;

// 	while (i < size)
// 	{
// 		list->data = &ary[i];
// 		if (i != size -1)
// 		{
// 			list->next = (t_list*)malloc(sizeof(t_list));
// 			list = list->next;
// 		}
// 		i++;
// 	}
// 	list = NULL;

// 	while (curr)
// 	{
// 		printf("%d ", *(int*)(curr->data));
// 		curr = curr->next;
// 	}
// 	printf("\n");
// 	printf("total: %d", ft_list_size(test));
// 	return (0);
// }
