#include "ft_stock_str.h"
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_cpy(char *src)
{
	int		i;
	char	*dest;
	int		size;

	i = 0;
	size = str_len(src) + 1;
	dest = (char *)malloc(size * sizeof(char));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (array == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		array[i].size = str_len(av[i]);
		array[i].str = av[i];
		array[i].copy = str_cpy(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

// #include <stdio.h>
// int main (void)
// {
// 	char **r = malloc(11*sizeof(char));
// 	r[0] = malloc(5*sizeof(char));
// 	r[1] = malloc(4*sizeof(char));
// 	r[2] = malloc(2*sizeof(char));
// 	r[0] = "hello";
// 	r[1] = "world";
// 	r[2] = "hi";	
// 	int m = 3;
// 	struct s_stock_str res = *ft_strs_to_tab(m, r);

// printf("%d", res.size);
// printf("%s", res.str);
// printf("%s", res.copy);

// 	return(0);
// }