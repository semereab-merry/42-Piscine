int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int main(void)
{
	// printf("%d",ft_fibonacci(0));
	// printf("%d",ft_fibonacci(-275));
	// printf("%d",ft_fibonacci(3));
	// printf("%d",ft_fibonacci(2));
	// printf("%d",ft_fibonacci(4));
	// printf("%d",ft_fibonacci(18));
	// printf("%d",ft_fibonacci(12));
	return (0);
}*/