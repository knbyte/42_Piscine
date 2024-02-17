/*
     MANUAL PAGE:
	 The strcat() and strncat() functions append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, then add a termi-
     nating `\0'.  The string s1 must have sufficient space to hold the
     result.

     The strncat() function appends not more than n characters from s2, and
     then adds a terminating `\0'.
*/
#include <unistd.h>
#include <stdio.h>

void	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ctr1;
	unsigned int	ctr2;

	ctr1 = 0;
	ctr2 = 0;
	while (dest[ctr1])
		ctr1++;
	while (src[ctr2] && ctr2 < nb)
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
	char	src[] = "We'll add this on the end.";
	char	dest[] = "Here's our first string. ";

	printf("Src: %s\n", src);
	printf("Dest Before: %s\n", dest);
	ft_strncat(dest, src, 27);
	printf("Dest After: %s\n", dest);
}
*/

