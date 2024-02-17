/*
     MANUAL PAGE:
	 The strstr() function locates the first occurrence of the null-terminated
     string needle in the null-terminated string haystack.

	 RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.
*/
#include <strings.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	ctr1;
	int	ctr2;

	ctr1 = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[ctr1])
	{
		ctr2 = 0;
		while (str[ctr1 + ctr2] == to_find[ctr2])
		{
			if (to_find[ctr2 + 1] == '\0')
			{
				return (&str[ctr1]);
			}
			++ctr2;
		}
		++ctr1;
	}
	return (0);
}
#ifdef DO_MAIN

int	main(void)
{
	char	*str;
	char	*to_find;
	char	*result;

	str = "looking for a needle in a haystack";
	to_find = "needle";
	result = strstr(str, to_find);
	printf("String: %s\n", str);
	printf("Sub-string to find: %s\n", to_find);
	printf("Found: %s\n", result);
}
#endif
