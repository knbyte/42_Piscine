
#include <strings.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		if ((str[ctr] >= 48 && str[ctr] <= 57))
			ctr++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("aaa: %d", ft_str_is_numeric("12345"));
}
*/
