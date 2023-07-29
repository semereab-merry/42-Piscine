#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*dest;

	range = max - min;
	i = 0;
	if (min >= max)
		return (0);
	dest = (int *)malloc ((range + 1) * sizeof(int));
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	int *res;
	int i;

	i = 0;
	res =  ft_range(1, 8);
	while (res[i] != '\0')
	{
		printf("%d", res[i]);
		i++;
	}
	return (0);
}
*/