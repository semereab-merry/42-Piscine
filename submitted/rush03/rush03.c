#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	d;
	int	i;

	i = 1;
	while (i <= y && x > 0)
	{
		d = 1;
		while (d <= x)
		{
			if ((d == 1 && i == 1) || (d == 1 && i == y))
				ft_putchar('A');
			else if ((d == x && i == 1) || (d == x && i == y))
				ft_putchar('C');
			else if ((d == 1) || (d == x) || (i == 1) || (i == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			d++;
		}
		ft_putchar('\n');
		i++;
	}
}
