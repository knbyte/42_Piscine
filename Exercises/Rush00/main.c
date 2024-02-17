#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	rush(111, 20);
	rush(0, 1);
	rush(1, 5);
	rush(-10, 3);
	return (0);
}
