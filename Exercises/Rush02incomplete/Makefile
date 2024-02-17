CC = cc
CFLAGS = -Wall -Wextra -Werror -g
BINARY = rush-02

rush-02: rush02.c utils.h rush02.c ft_libstrings.c ft_atoi.c
	$(CC) $(CFLAGS) -o rush-02 rush02.c ft_libstrings.c ft_atoi.c

fclean:
	rm -f $(BINARY)
