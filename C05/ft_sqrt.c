#include <stdio.h>

int    ft_sqrt(int nb)
{
    int    root;

    root = 1;
    if (nb < 0)
        return (0);
    while (root * root < nb)
        root++;
    if ((nb % root) == 0)
        return (root);
    return (0);
}

#ifdef DO_MAIN
int    main(void)
{
    int    result;

    result = ft_sqrt(25);
    printf("%d", result);
}
#endif
