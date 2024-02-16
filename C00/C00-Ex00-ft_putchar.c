#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

#ifdef DO_MAIN
int main(void) {
    ft_putchar('C');
    return (0);
}
#end if

/*
To compile, run: 
  cc -Wall -Werror -Wextra -DDO_MAIN ft_putchar.c
Moulinette will not compile with -DDO_MAIN so you can leave it in when submitting.
It does however have to be Norminette compliant.
*/
