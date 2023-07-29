char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (void)
{
	char r [] = "sakf";
	char t [] = "sahakj";
    printf("%s", ft_strcat(r , t));
	return (0);
}*/