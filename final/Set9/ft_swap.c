#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int		main()
// {
// 	int *a;
// 	int *b;
// 	int x = 1;
// 	int y = 2;

// 	a = &x;
// 	b = &y;

// 	printf("%d %d\n", *a, *b);
// 	ft_swap(a, b);
// 	printf("%d %d\n", *a, *b);
// 	return (0);

// }
