// FILE READING EXAMPLE

#include <unistd.h>
#include <stdlib.h>
#include <sys/fcntl.h>
// sys/fcntl.h> is for O_RDONLY (open for reading only), open and close
// stdlib is for malloc/memory allocation

int	main(void)
{
	char	*var;
	int		fd;
	int		ctr;

	var = malloc(8);
	fd = open("./example.txt", O_RDONLY);
	ctr = 0;
	read(fd, &var, 8);
	write(1, &var, 8);
	close(fd);
}

// to run, call 'make' then './rush-02'
// ./rush-02 is the executable file made by our makefile
