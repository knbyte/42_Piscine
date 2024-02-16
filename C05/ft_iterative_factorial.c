include <unistd.h>

int    ft_iterative_factorial(int nb)
{
    int    num;

    num = 1;
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (num);
    while (nb > 0)
    {
        num *= nb;
        nb--;
    }
    return (num);
}

#ifdef DO_MAIN
int    main()
{
    int    result;

    result = ft_iterative_factorial(5);
    printf("%d", result);
}
#endif
