char	*ft_strupcase(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 'a' && str[len] <= 'z')
			str[len] = str[len] - 32;
		len++;
	}
	return (str);
}

/*int main(void)
{
    char mm[] = "afsjhk";
	ft_strupcase(mm);
}*/
