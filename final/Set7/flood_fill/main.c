#include "flood_fill.h"
#include "flood_print.h"

int     main()
{
    t_point size = {8, 5};
    t_point begin = { 2, 2};

    char row1[] = "11111111";
    char row2[] = "10001001";
    char row3[] = "10010001";
    char row4[] = "10110001";
    char row5[] = "11100001";

    char *area[] = {row1, row2, row3, row4, row5};

	print_tab(area, size);

	flood_fill(area, size, begin);
	ft_putchar('\n');

	print_tab(area, size);
	return (0);
}
