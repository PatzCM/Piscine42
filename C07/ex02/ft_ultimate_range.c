#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	i = 0;
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	range = (min, max);
	if (argc > 0)
	{}
	while ( i < (max - min))
	{
		printf("Mine: %i\n:", ft_ultimate_range(range, min, max));
		i++;
	}
}
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	
	size = (max - min);
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = malloc(sizeof(char) * size +1);
	if (range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	range[0][i] = '\0';
	return (size);
}
