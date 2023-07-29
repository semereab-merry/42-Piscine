char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*int main(void)
{
    char mm [] = "sja";
    char nn []= "sfa";
    ft_strcpy(mm, nn);
    return(0);
}*/