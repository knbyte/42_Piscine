#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

int    ft_atoi(char *str)
{
    int    ctr;
    int    neg;
    int    num;

    ctr = 0;
    neg = -1;
    num = 0;
    while (str[ctr] == ' ' || str[ctr] == '\n' || str[ctr] == '\t' || str[ctr] == '\v' || str[ctr] == '\f' || str[ctr] == '\r')
        ctr++;
    while (str[ctr] == '-' || str[ctr] == '+')
    {
        if (str[ctr] == '-')
        {
            neg *= -1;
        }
        ctr++;
    }
    while (str[ctr] >= '0' && str[ctr] <= '9')
    {
        num = num * 10 + (str[ctr] - '0');
        ctr++;
    }
    return (num * neg);
}
#ifdef DO_MAIN
int    main(void)
{
    int    result;

    result = ft_atoi("     ---+--+1234ab567");
    printf("%d", result);
}
#endif
