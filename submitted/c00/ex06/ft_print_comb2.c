#include <unistd.h>

void	print_out(int a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	v1;
	int	v2;

	v1 = 0;
	while (v1 < 100)
	{
		v2 = 0;
		while (v2 < 100)
		{
			if (v1 < v2)
			{
				print_out(v1 / 10 + '0');
				print_out(v1 % 10 + '0');
				write (1, " ", 1);
				print_out(v2 / 10 + '0');
				print_out(v2 % 10 + '0');
				if (v1 == 98 && v2 == 99)
					break ;
				write (1, ",", 1);
				write (1, " ", 1);
			}
		v2++;
		}
	v1++;
	}
}

