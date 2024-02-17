#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	abc;

	abc = 'z';
	while (abc >= 'a')
	{
		write(1, &abc, 1);
		abc--;
	}
}

/*
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
