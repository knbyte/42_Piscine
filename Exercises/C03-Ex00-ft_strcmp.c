
/*
     MANUAL PAGE:
	 The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2.
*/
#include <stdio.h>
#include <strings.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ctr;

	ctr = 0;
	while (s1[ctr] && s2[ctr] && s1[ctr] == s2[ctr])
		ctr++;
	return (s1[ctr] - s2[ctr]);
}
#ifdef DO_MAIN

int	main(void)
{
	int	result;

	result = ft_strcmp("abcd", "abc de");
	printf("%d\n", result);
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_strcmp.c

/*
The value it returns is the difference between the ascii values
- in this example it is 100(d) - 32(sp) = 68
*/
