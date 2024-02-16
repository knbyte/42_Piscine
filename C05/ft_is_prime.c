#include <stdio.h>

int    ft_is_prime(int nb)
{
    int    num;

    num = 2;
    if (nb <= 1)
        return (0);
    while (num <= nb / num)
    {
        if (nb % num == 0)
            return (0);
        num++;
    }
    return (1);
}

#ifdef DO_MAIN
int    main()
{
    int    test1;
    int test2;

    test1 = ft_is_prime(7);
    test2 = ft_is_prime(8);
    printf("Prime Number Test: %d\n", test1);
    printf("Not a Prime Number Test: %d\n", test2);
}
#endif
