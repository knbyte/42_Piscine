#include <unistd.h>

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb / 10)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
}
#ifdef DO_MAIN
int main()
{
    ft_putnbr(42);
}
#endif
