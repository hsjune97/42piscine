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
