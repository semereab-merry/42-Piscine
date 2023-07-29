int	ft_str_is_numeric(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= '0' && str[len] <= '9')
			len++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
    ft_str_is_numeric("9");
}*/