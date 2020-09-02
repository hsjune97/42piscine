#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	octet = (octet << 4 | octet >> 4);

	return (octet);
}

int	main(void)
{
	unsigned char c;

	c = 'z' - '0';//&
	printf("before: %x\n", c);
	printf("before: %d\n", c);
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);

	printf("after: %x\n", c);
	printf("after: %d\n", c);
	write(1, &c, 1);//d
	write(1, "\n", 1);
	return (0);
}
