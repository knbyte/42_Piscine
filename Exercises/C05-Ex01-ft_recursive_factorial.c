#include <stdio.h>

int    ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    while (nb > 1)
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
    return (1);
}

#ifdef DO_MAIN
int main()
{
    int    result;

    result = ft_recursive_factorial(5);
    printf("%d", result);
}
#endif
