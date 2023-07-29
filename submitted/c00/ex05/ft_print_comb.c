#include <unistd.h>

void	print_out(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' & b != '8' & c != '9')
		write(1, ",", 1);
		write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	f;
	int	s;
	int	t;

	f = '0';
	while (f <= '7')
	{
		s = '1';
		while (s <= '8')
		{
			t = '2';
			while (t <= '9')
			{
				if (s > f && t > s)
					print_out(f, s, t);
			t++;
			}
		s++;
		}
	f++;
	}
}

