#include <stdio.h>
#include <stdlib.h>
//#include "list.h"
// don't need to use malloc or free because it dosen't need to remove or add node


typedef	struct		s_list
{
	int				data;
	struct	s_list	*next;
}					t_list;

int ascending(int a, int b)
{
	return (a <= b);
}

// t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
// {

// }

int main(void)
{
	int i;
	int num[] = {1, 2, 3, 2, 2, 5, 3};

	t_list *link;
	t_list *curr;

	i = 0;
	link = (t_list*)malloc(sizeof(t_list));
	curr = link;
	while(i < 7)
	{
		link->data = num[i];
		link->next = (t_list*)malloc(sizeof(t_list));
		link = link->next;
	}
	link->data = 4;
	link->next = NULL;;

	while (curr)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}


// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = 2;
// 	int e = 2;
// 	int f = 5;
// 	int g = 3;


	// link = (t_list*)malloc(sizeof(t_list));//(t_list*) * caution!
	// link->data = a;
	// link->next = (t_list*)malloc(sizeof(t_list));
	// link->next->data = b;
	// link->next->next = (t_list*)malloc(sizeof(t_list));
	// link->next->next->data = c;
	// link->next->next->next = (t_list*)malloc(sizeof(t_list));
	// link->next->next->next->data = d;
	// link->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	// link->next->next->next->next->data = e;
	// link->next->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	// link->next->next->next->next->next->data = f;
	// link->next->next->next->next->next->next = (t_list*)malloc(sizeof(t_list));
	// link->next->next->next->next->next->next->data = g;
	// link->next->next->next->next->next->next->next = NULL;
