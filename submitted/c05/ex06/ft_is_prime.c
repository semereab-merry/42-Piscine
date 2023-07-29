int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb < -2147483648 || nb > 2147483647)
		return(0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	// printf("%d",ft_is_prime(0));
	// printf("%d",ft_is_prime(-275));
	// printf("%d",ft_is_prime(3));
	// printf("%d",ft_is_prime(5));
	// printf("%d",ft_is_prime(4));
	// printf("%d",ft_is_prime(2));
	// printf("%d",ft_is_prime(1));
	return (0);
}*/