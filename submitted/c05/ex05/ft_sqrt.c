int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb && i < 46350)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main(void)
{
	// printf("%d",ft_sqrt(0));
	// printf("%d",ft_sqrt(-275));
	// printf("%d",ft_sqrt(3));
	// printf("%d",ft_sqrt(16));
	// printf("%d",ft_sqrt(4));
	// printf("%d",ft_sqrt(144));
	// printf("%d",ft_sqrt(12));
	return (0);
}*/