char	*ft_strcpy(char *dest, char *src)
{
	int	ctr;

	ctr = 0;
	while (src[ctr] != '\0')
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	dest[ctr] = '\0';
	return (dest);
}

/*
int main()
{
    char str1[] = "I am rather tired.";
    char str2[] = "But it will be ok!";

    printf("Before: %s\n", str1);
    ft_strcpy(str1, str2);
    printf("After: %s\n", str1);
    return 0;
}
*/
