/*
	 MANUAL PAGE:
     The strcat() and strncat() functions append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, then add a termi-
     nating `\0'.  The string s1 must have sufficient space to hold the
     result.
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_strcat(char *dest, char *src)
{
	unsigned int	ctr1;
	unsigned int	ctr2;

	ctr1 = 0;
	ctr2 = 0;
	while (dest[ctr1])
		ctr1++;
	while (src[ctr2])
	{
		dest[ctr1] = src[ctr2];
		ctr1++;
		ctr2++;
	}
	dest[ctr1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "We'll add this on the end";
	char	dest[] = "Here's our first string";

	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	ft_strcat(src, dest);
	printf("Result: %s\n", dest);
	return (0);
}
*/
// cc -Wall -Wextra -Werror ft_strcat.c

