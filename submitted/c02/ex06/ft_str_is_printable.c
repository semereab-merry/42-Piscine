int	ft_str_is_printable(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 32 && str[len] <= 127)
			len++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
    ft_str_is_printable(56);
}*/