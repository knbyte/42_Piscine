

int ft_seperate()
{
    int fd = open("file.txt", O_RDONLY);
    char *num_str = malloc(1);
    char *buf = malloc(1);
    char *word = malloc(32);
    int i = 0;
    while(read(fd, buf, 1))
    {
        if (ft_is_numeric(*buf))
        {
            *num_str = *buf;
            break;
        }
    }
    while(read(fd, buf, 1))
    {
        if (*buf == ':')
            break;
    }
    while(read(fd, buf, 1))
    {
        if (*buf == '\n')
            break;
        word[i] = *buf;
        i++;
    }
}
