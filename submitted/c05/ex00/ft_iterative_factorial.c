int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		res = 1;
	else if (nb < 0)
		res = 0;
	while (nb > 0)
	{
		res *= nb;
		nb --;
	}
	return (res);
}

/*int main(void)
{
	// printf("%d",ft_iterative_factorial(0));
	// printf("%d",ft_iterative_factorial(-275));
	// printf("%d",ft_iterative_factorial(3));
	// printf("%d",ft_iterative_factorial(2));
	// printf("%d",ft_iterative_factorial(4));
	// printf("%d",ft_iterative_factorial(7));
	// printf("%d",ft_iterative_factorial(12));
	return (0);
}*/