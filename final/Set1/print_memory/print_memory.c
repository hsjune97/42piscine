#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);

void	print_memory(const void *addr, size_t size)














void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}
