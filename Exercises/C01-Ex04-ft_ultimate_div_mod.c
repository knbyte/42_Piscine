
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*
int main()
{
    int a;
    int b;
    
    a = 16;
    b = 5;
    printf("a: %d, b: %d", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("a: %d, b: %d", a, b);
}
*/
