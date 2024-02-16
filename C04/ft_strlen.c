#include <unistd.h>
#include <strings.h>

void    ft_strlen(char *str)
{
    int    ctr;

    ctr = 0;
    while (str[ctr] != '\0')
        ctr++;
    return (ctr);
}

#ifdef DO_MAIN
int main()
{
    char str[] = "Counting string length";
     int result = ft_strlen(str);
     printf("The length of the string is %d.\n", result);
    return 0;
}
#endif
