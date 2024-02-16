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

int    ft_find_next_prime(int nb)
{
    int    nbr;

    nbr = 2;
    while (1)
    {
        if (ft_is_prime(nb))
            return (nb);
        ++nb;
    }
}

#ifdef DO_MAIN
int    main()
{
    int    test1;
    int test2;
    int test3;

    test1 = ft_find_next_prime(6);
    test2 = ft_find_next_prime(21);
    test3 = ft_find_next_prime(38);
    printf("Testing 5: %d\n", test1);
    printf("Testing 21: %d\n", test2);
    printf("Testing 37: %d\n", test3);
}
#endif
