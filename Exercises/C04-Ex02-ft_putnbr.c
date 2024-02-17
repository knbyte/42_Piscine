#include <unistd.h>

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
#ifdef DO_MAIN

int	main(void)
{
	ft_putnbr(42);
}
#endif

/*
When we are working with a negative number we need to
print the negative and then using the *= operator
(which multiplys its value and reassigns it - we are 
miltiplying by -1 to make the number we're printing positive)

-----

When you have a 2 digit number (eg. 19) when you divide it
by 10 then you get 1 - which gives you the first digit (of 19 for instance).

Then finding the remainder (%) gives you the second digit.

The function is recursive (calls itself) which is what makes it work
with numbers larger than 2 digits as it keeps looping through.
For example if you have for example 123 if you / 10 you get
12 and remainder 3, then it loops through again to get 1 and remainder 2.
 */


// You could also do it this way:

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
