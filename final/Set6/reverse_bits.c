#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rtn;
	int i = 0;
	rtn = 0;

	while (i < 8)
	{
		rtn *= 2;
		rtn += octet % 2;
		octet /= 2;
		i++;
	}
	return (rtn);
}

// unsigned char reverse_bits(unsigned char b)
// {
// 	b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
// 	b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
// 	b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
// 	return b;
// }


// unsigned char reverse_bits(unsigned char b)
// {
// 	unsigned char	r = 0;
// 	unsigned		char_len = 8;

// 	while (char_len--)
// 	{
// 		r = (r << 1) | (b & 1);
// 		b >>= 1;
// 	}
// 	return (r);
// }

// int		main()
// {
// 	unsigned char a = 127;
// 	unsigned char t;

// 	t = reverse_bits(a);
// 	printf("ori: %x\n", a);
// 	printf("tras: %x\n", t);
// }


int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	printf("%d\n", c);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);

	printf("%d\n", c);
	return (0);
}
