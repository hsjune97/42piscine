
#include <unistd.h>

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

unsigned char   reverse_bits(unsigned char octet)
{
    return ((octet >> 7) & 1) |
        ((octet >> 5) & 2) |
        ((octet >> 3) & 4) |
        ((octet >> 1) & 8) |
        ((octet << 7) & 128) |
        ((octet << 5) & 64) |
        ((octet << 3) & 32) |
        ((octet << 1) & 16);
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
