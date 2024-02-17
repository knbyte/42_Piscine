
/*
     FROM MANUAL PAGE:
	 Same as strcmp except...
     The strncmp() function compares not more than n characters.
     Characters that appear after a `\0' character are not compared.
*/
#include <stdio.h>
#include <strings.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ctr;

	ctr = 0;
	if (n == 0)
		return (0);
	while (s1[ctr] && s2[ctr] && (s1[ctr] == s2[ctr]) && n > 1)
	{
		ctr++;
		n--;
	}
	return (s1[ctr] - s2[ctr]);
}
#ifdef DO_MAIN

int	main(void)
{
	int	result;

	result = ft_strncmp("abcde", "abcde", 5);
	printf("My ft_strncmp: %d\n", result);
	result = strncmp("abcde", "abcde", 5);
	printf("Regular Strncmp: %d\n", result);
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_strncmp.c
