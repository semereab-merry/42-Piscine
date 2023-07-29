char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
	dest[len] = '\0';
	len++;
	}
	return (dest);
}

/*int main(void)
{
    char mm [] = "kladg";
    char nn []= "sfasgf";
    printf("%s", ft_strncpy(mm, nn, 2));
    return(0);
}*/