#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);

char    *ft_strdup(char *src)
{
	int size = ft_strlen(src);
	char *dest;
	char *dst;

	dest = (char*)malloc(sizeof(char) * size + 1);
	dst = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dst);
}

int







int		main()
{
	char *s1 = "hello";
	char *s2 = ft_strdup(s1);

	printf("%s\n", s2);
}
