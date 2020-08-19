#include <stdbool.h>
#include <stdio.h>
#include <limits.h>


int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 2)
		return (0);
	while (++i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}



int main(void)

{

int index;



index = -2;

while (index < 100)

{

printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));

index++;

}

printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));

}
