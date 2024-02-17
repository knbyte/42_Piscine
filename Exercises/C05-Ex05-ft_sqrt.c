#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb > 0)
	{
		while (root * root <= nb && root <= 46340)
		{
			if (root * root == nb)
				return (root);
			root++;
		}
	}
	return (0);
}

#ifdef DO_MAIN

int	main(void)
{
	int	result;

	result = ft_sqrt(25);
	printf("%d", result);
}
#endif

/*
Max int = 2147483647
46340 x 46340 = 2147395600
*/
