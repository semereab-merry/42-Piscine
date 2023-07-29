int	ft_str_is_alpha(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if ((str[len] >= 'a' && str[len] <= 'z')
			|| (str[len] >= 'A' && str[len] <= 'Z'))
			len++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
    ft_str_is_alpha("s");
}*/
