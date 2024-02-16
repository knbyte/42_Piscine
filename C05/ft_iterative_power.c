#include <stdio.h>

int    ft_iterative_power(int nb, int power)
{
    int    result;

    result = nb;
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (power > 1)
    {
        result *= nb;
        power--;
    }
    return (result);
}

#ifdef DO_MAIN
int    main()
{
    int    result;

    result = ft_iterative_power(5, 5);
    printf("%d", result);
}
#endif
