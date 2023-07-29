#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_char('-');
		print_char('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		print_char('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		print_char(nb + 48);
	}
}

/*
#include <stdio.h>
int main(void)
{
    int n = 2147483647;
    // int m = 0;
    // int o = 3;
    // int p = 475728568;
    ft_putnbr(n);
    // ft_putnbr(m);
    // ft_putnbr(o);
    // ft_putnbr(p);
	return (0);
}*/