#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int		cycle_detector(const t_list *list)
{
	const t_list *a;
	const t_list *b;

	a = list;
	b = list;

	if (!list)
		return (0);
	while (a && a->next)
	{
		b = b->next;
		a = a->next->next;
		if (a == b)
			return (1);
	}
	return (0);
}




int		main()
{
	t_list *cycle1;
	t_list *cycle2;
	t_list *head1;
	t_list *head2;
	t_list *tmp;

	int num[] = {1,2,3,4,5,6,7};
	int i = 0;
	int size;

	size = sizeof(num)/sizeof(int);

	cycle1 = (t_list*)malloc(sizeof(t_list));
	cycle2 = (t_list*)malloc(sizeof(t_list));
	head1 = cycle1;
	head2 = cycle2;

	while (i < size)
	{
		cycle1->data = num[i];
		cycle2->data = num[i];
		if (i == size - 1)//do not allocate memroy at all
		{
			cycle1->next = NULL;
			cycle2->next = head2;
		}
		else
		{
			cycle1->next = (t_list*)malloc(sizeof(t_list));
			cycle2->next = (t_list*)malloc(sizeof(t_list));
			cycle1 = cycle1->next;
			cycle2 = cycle2->next;
		}
		i++;
	}

	printf("cycle1: %d\n", cycle_detector(cycle1));
	printf("cycle2: %d\n", cycle_detector(cycle2));

	while (head1 != NULL)
	{
		printf("link1: %d ", head1->data);
		//printf("link2: %d\n", head2->data);
		tmp = head1;
		head1 = head1->next;
		free(tmp);
		//head2 = head2->next;
	}
	printf("\n");
	i = 0;
	while (head2)
	{
		//printf("link1: %d ", head1->data);
		printf("link2: %d ", head2->data);
		//head1 = head1->next;
		head2 = head2->next;
		if (i == 20)
		{
			printf("\nstop\n");
			break ;
		}
		i++;
	}
	printf("\n");
	return (0);
}
