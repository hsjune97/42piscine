#include "flood_fill.h"
#include <stdlib.h>

void    flood_fill(char **tab, t_point size, t_point begin)
{
	char tmp;
	t_point p;

	tmp = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';

	if (tab[begin.y + 1][begin.x] == tmp && begin.y < size.y - 1)
	{
		p.x = begin.x;
		p.y = begin.y + 1;
		flood_fill(tab, size, p);
	}

	if (tab[begin.y - 1][begin.x] == tmp && begin.y > 0)
	{
		p.x = begin.x;
		p.y = begin.y - 1;
		flood_fill(tab, size, p);
	}

	if (tab[begin.y][begin.x + 1] == tmp && begin.x < size.x - 1)
	{
		p.x = begin.x + 1;
		p.y = begin.y;
		flood_fill(tab, size, p);
	}

	if (tab[begin.y][begin.x - 1] == tmp && begin.x > 0)
	{
		p.x = begin.x - 1;
		p.y = begin.y;
		flood_fill(tab, size, p);
	}
}


char **make_area(char **a, t_point size)
{
	char **rtn;
	int i, j;

	rtn = malloc(sizeof(char *) * size.y);//??
	i = 0;
	while (i < size.y)
	{
		rtn[i] = malloc(sizeof(char) * (size.x + 1));
		j = 0;
		while (j < size.x)
		{
			rtn[i][j] = a[i][j];
			j++;
		}
		i++;
	}
	return (rtn);
}
