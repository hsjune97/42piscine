#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_printhex(int n);

void	print_memory(const void *addr, size_t size)
{
	unsigned char *t = (unsigned char *)addr;
	size_t	i = 0;
	int		col;
	size_t	tmp = 0;

	while (i < size)
	{
		col = -1;
		tmp = i;
		while (++col < 16)//????
		{
			if (i < size)
			{
				if (t[i] < 16)
					ft_puchar('0');//????
				ft_printhex(t[i]);
			}
			else
				ft_pustr("  ");
			ft_putchar( (i++ & 1));
		}

	}

}




void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_printhex(int n)
{
	int c;

	if (n >= 16)
		ft_printhex(n/16);
	c = n % 16 + (n % 16 < 10 ? '0' : 'a' - 10);
	ft_putchar(c);
}



int		main(void)
{
	int		tab[15] = {3772900067, 58597, 59111,
		59625, 60139, 60653, 61167, 61681, 62195, 62709, 63223, 63737, 64251,
	64765, 65279};

	print_memory(tab, sizeof(tab));
	return (0);
}
