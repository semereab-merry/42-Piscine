#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	r;

	r = 'a';
	while (r <= 'z')
	{
		write(1, &r, 1);
		r++;
	}
}
