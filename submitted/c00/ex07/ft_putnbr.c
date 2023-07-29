#include <unistd.h>

void	print_char(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr (int nb)
{
	if (nb == -2147483648)
	{
		print_char ('-');
		print_char ('2');
		ft_putnbr (147483648);
	}
	else if (nb < 0)
	{
		print_char ('-');
		nb = -nb;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		print_char (nb + 48);
	}
}
