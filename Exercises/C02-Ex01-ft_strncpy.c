#include <strings.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ctr;

	ctr = 0;
	while (src[ctr] != '\0' && ctr < n)
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	while (ctr < n)
	{
		dest[ctr] = '\0';
		ctr++;
	}
	return (dest);
}

/*
int    main(void)
{
    char    src[] = "hello";
    char    dest[] = "hi";

    printf("Src: %s\n", src);
    printf("Before: %s\n", dest);
    ft_strncpy(dest, src, 5);
    printf("After: %s\n", dest);
}
*/
