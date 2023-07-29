int	ft_str_is_lowercase(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
			len++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
    ft_str_is_lowercase("fddgdhjh");
}*/
