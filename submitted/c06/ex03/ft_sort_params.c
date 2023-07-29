#include <unistd.h>

void	write_params(char *param)
{
	int	len;

	len = 0;
	while (param[len] != '\0')
	{
		write(1, &param[len], 1);
		len++;
	}
	write(1, "\n", 1);
}

void	swap_params(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	compare_params(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	r;

	r = 1;
	while (r < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			i = 0;
			if (compare_params(argv[j], argv[j + 1]) > 0)
				swap_params(&argv[j], &argv[j + 1]);
			j++;
		}
	r++;
	}
	j = 1;
	while (j < argc)
	{
		write_params(argv[j]);
		j++;
	}
	return (0);
}
