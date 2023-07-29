#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*dest;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc (size * sizeof(int));
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	*range = dest;
	return (size);
}

/*
#include <stdio.h>
int main(void)
{
	int res;
	int *size;
	int m = 1;
	int n = 8;
	
	size = (int*)5;
	res = ft_ultimate_range(&size , m, n);
	printf("%d", res);
	return (0);
}
*/