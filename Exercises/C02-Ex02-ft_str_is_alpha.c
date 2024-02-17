#include <strings.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		if ((str[ctr] >= 65 && str[ctr] <= 90) || \
				(str[ctr] >= 97 && str[ctr] <= 122))
			ctr++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("aaa: %d", ft_str_is_alpha("hello"));
}
*/

