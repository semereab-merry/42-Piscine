/*The Moulinette gave me a time out error for this exercise*/
#include <stdlib.h>

int	find_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*find_length(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (strs[i] != NULL)
		i += find_len(strs[i]);
		i++;
	while (sep[j] != '\0')
		j++;
	j *= (size - 1);
	i += j;
	if (size == 0)
		i = 0;
	res = (char *)malloc ((i + 1) * sizeof(char));
	return (res);
}

char	*add_str(char *des, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		temp;
	char	*res;
	int		i;

	i = 0;
	temp = 0;
	res = find_length(size, strs, sep);
	while (i < size)
	{
		add_str(&res[temp], strs[i]);
		temp += find_len(strs[i]);
		if (i != size - 1)
		{
			add_str(&res[temp], sep);
			temp += find_len(sep);
		}
		i++;
	}
	res[temp + 1] = '\0';
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	char **rest;
	char *sep;
	char *result;

	rest = (char **)malloc(7*sizeof(char));
	rest[0] = (char *)malloc(2*sizeof(char));
	rest[1] = (char *)malloc(2*sizeof(char));
	rest[2] = (char *)malloc(2*sizeof(char));
	rest[0] = "hh";
	rest[1] = "kk";
	rest[2] = "ll";
	sep = "//";
	result = ft_strjoin(3, rest, sep);
	printf("%s", result);
}
*/