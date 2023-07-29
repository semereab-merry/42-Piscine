int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		res = 1;
	else if (power > 0)
		res = nb * ft_recursive_power(nb, power -1);
	else
		res = 0;
	return (res);
}

/*int main(void)
{
	// printf("%d",ft_recursive_power(0,0));
	// printf("%d",ft_recursive_power(3,0));
	printf("%d",ft_recursive_power(2,-8));
	// printf("%d",ft_recursive_power(4,3));
	// printf("%d",ft_recursive_power(57,5));
	// printf("%d",ft_recursive_power(12,4));
	return (0);
}*/