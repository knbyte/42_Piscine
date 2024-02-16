#include <stdio.h>

int    ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    if (power > 0)
    {
        return (nb * ft_recursive_power(nb, power - 1));
    }
    return (1);
}

#ifdef DO_MAIN
int main()
{
    int    result;

    result = ft_recursive_power(5, 5);
    printf("%d", result);
}
#endif
