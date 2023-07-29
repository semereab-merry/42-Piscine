#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 'z';
	while (r >= 'a')
	{
		write(1, &r, 1);
		r--;
	}
}
