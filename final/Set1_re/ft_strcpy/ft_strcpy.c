#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}


int		main(void)
{
	char str1[] = "tired";
	char str2[] = "pleas";

	printf("%s\n", str1);
	printf("%s\n", str2);

	// char strt[] = ft_strcpy(str1, str2);
	// makes error
	//	ft_strcpy is pointer, strt[] is arry
	// can't put directly when they declared first with  *

	printf("%s\n", str1);
	printf("%s\n", str2);
}
