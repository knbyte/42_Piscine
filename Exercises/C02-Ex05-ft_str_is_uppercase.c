
#include <strings.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		if ((str[ctr] >= 65 && str[ctr] <= 90))
			ctr++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("aaa: %d", ft_str_is_uppercase("GODHELPME"));
}
*/
