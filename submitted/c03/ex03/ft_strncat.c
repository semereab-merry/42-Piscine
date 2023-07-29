char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	h;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	h = 0;
	while (src[j] != '\0' && h < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (void)
{
	char r [] = "sakf";
	char t [] = "mmmakj";
    printf("%s", ft_strncat(r , t , 3));
	return (0);
}*/
