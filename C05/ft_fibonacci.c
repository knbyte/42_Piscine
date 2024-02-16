int ft_fibonacci(int index)
{
    int result;

    if  (index < 0)
        return (-1);
    if (index == 0 || index == 1)
        return (index);
    else
    {
        result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
        return (result);
    }
}

#ifdef DO_MAIN
int    main(void)
{
    int    result;

    result = ft_fibonacci(6);
    printf("%d", result);
}
#endif
