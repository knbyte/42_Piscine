#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(1, 1);
	write(1, "\n", 1);
	rush(1, 5);
	write(1, "\n", 1);
	rush(4, 4);
	return (0);
}


/*
Other testing examples

rush(5, 3);
rush(111, 20);
rush(0, 1);
rush(1, 5);
rush(-10, 3);
*/
