#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j;
	int tmp;

	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
int		main()
{
	int i;
	int size = 0;
	while (size < 12)
	{
		int tab[] = { -1, 6, 7, 3, -6, 7, 2, 4, 5, 2147483647, -2147483648 };
		sort_int_tab(tab, size);
		i = 0;
		printf("size: %d:   ", size);
		while (i < 11)
		{
			printf("%d ", tab[i]);
			i++;
		}
		size++;
		printf("\n");
	}
	return (0);
}
