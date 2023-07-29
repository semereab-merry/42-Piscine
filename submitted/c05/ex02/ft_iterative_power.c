int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		res = 1;
	else if (power < 0)
		res = 0;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*int main(void)
{
	// printf("%d",ft_iterative_power(0,0));
	// printf("%d",ft_iterative_power(0,-275));
	// printf("%d",ft_iterative_power(3,0));
	// printf("%d",ft_iterative_power(4,3));
	// printf("%d",ft_iterative_power(57,5));
	// printf("%d",ft_iterative_power(12,4));
	return (0);
}*/