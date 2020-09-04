#include "flood_fill.h"
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c);
void	print_tab(char **tab, t_point size);
char	**make_area(char **zone);

void	flood_fill(char **tab, t_point size, t_point begin)
{
    char tmp;
    int i;
    int j;
    int x_flag;

    i = begin.y - 1;
    tmp = tab[begin.y - 1][begin.x - 1];

    while (i < size.y)
    {
        j = 0;
        x_flag = 0;
        while (j < size.x)
        {
            if (tab[i][j] == tmp)
            {
                tab[i][j] = 'F';
                x_flag = 1;
            }
            if (x_flag && tab[i][j] != tmp)
                break ;
            j++;
        }
        i++;
    }
}


int main(void)
{
    //char **area;
    t_point size = { 8, 5 };
    t_point begin = { 2, 2 };
    char **zone = {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11100001"
    };
    //area = make_area(zone);
    //print_tab(area, size);
    flood_fill(zone, size, begin);
    printf("\n");
    print_tab(zone, size);
    return (0);
}


void	print_tab(char **tab, t_point size)
{
    int i = 0;
    int j = 0;

    while (i < size.y)
    {
        j = 0;
        while (tab[i][j])
        {
            ft_putchar(tab[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }

}
char	**make_area(char **zone)
{
    char **rtn;
    rtn = zone;
    return (rtn);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
