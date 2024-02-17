#include <unistd.h>
#include <strings.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
		ctr++;
	return (ctr);
}

/*
int main()
{
    char str[] = "Counting string length";
     int result = ft_strlen(str);
     printf("The length of the string is %d.\n", result);
    return 0;
}
*/
