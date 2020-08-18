#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int n;
	int i;

	if (nb == 0)
	{
		return (1);
	}

	while (i <= nb)
	{
		n *= i;
		i++;
	}
	return (n);
}

int main(void) 

{ 

int n; 

 

n = -2; 

while (n < 7) 

{ 

printf("fact(%d) = %d\n", n, ft_iterative_factorial(n)); 

n++; 

} 

} 