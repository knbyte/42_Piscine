#include <unistd.h>
#include <strings.h>

void    ft_putstr(char *str)
{
    unsigned int    ctr;

    ctr = 0;
    while (str[ctr] != '\0')
    {
        write(1, &str[ctr], 1);
    }
}

#ifdef DO_MAIN

int main()
{
    ft_putstr("Hello");
}
#endif
