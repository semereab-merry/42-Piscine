char	*ft_strlowcase(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'A' && str[len] <= 'Z')
			str[len] = str[len] + 32;
		len++;
	}
	return (str);
}

/*int main(void)
{
    char mm[] = "afsjhk";
	ft_strlowcase(mm);
}*/