#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		write(1, &str[ctr++], 1);
	}
}

int	main(int argc, char *argv[])
{
	int	ctr;

	ctr = argc - 1;
	while (ctr > 0)
	{
		ft_putstr(argv[ctr]);
		ctr--;
		write(1, "\n", 1);
	}
	return (0);
}

/*
argc contains the number of arguments passed through the command line.

argv[] is an array of character pointers, containing the parameters.

We count the total number of arguments, minus one becuase we want 
one less than argc since argc includes program name.
*/
