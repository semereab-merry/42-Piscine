#include <unistd.h>

int	find_sign(char *str, int *point_i)
{
	int	counter;
	int	i;

	i = 0;
	counter = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	i++;
	while (str[i] && (str[i] == 45 || str[i] == 43))
	{
		if (str[i] == 45)
		counter *= -1;
		i++;
	}
	*point_i = i;
	return (counter);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	sign = find_sign (str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	char s[] = " ---+--+1457ab567";
	printf("%d", ft_atoi (s));
	return (0);
}*/