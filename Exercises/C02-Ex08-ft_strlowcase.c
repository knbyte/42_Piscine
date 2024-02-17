#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		if (str[ctr] >= 65 && str[ctr] <= 90)
			str[ctr] = str[ctr] + 32;
		ctr++;
	}
	return (str);
}

/*
int main ()
{
	char str[] = "abcde";
	printf("%s/n", ft_strlowcase(str));
	return 0;
}
*/
