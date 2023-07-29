int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb -1);
	}
	else if (nb < 0)
		res = 0;
	return (res);
}

/*int main(void)
{
	// printf("%d",ft_recursive_factorial(0));
	// printf("%d",ft_recursive_factorial(-275));
	// printf("%d",ft_recursive_factorial(3));
	// printf("%d",ft_recursive_factorial(2));
	// printf("%d",ft_recursive_factorial(4));
	// printf("%d",ft_recursive_factorial(7));
	printf("%d",ft_recursive_factorial(12));
	return (0);
}*/