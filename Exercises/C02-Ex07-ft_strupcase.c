
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		if (str[ctr] >= 97 && str[ctr] <= 122)
			str[ctr] = str[ctr] - 32;
		ctr++;
	}
	return (str);
}

/*
int main ()
{
	char str[] = "abcde";
	printf("%s/n", ft_strupcase(str));
	return 0;
}
*/
