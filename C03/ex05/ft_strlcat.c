#include <unistd.h>

unsigned int	ft_counter(char	*dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return(i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	ft_counter(dest);
	size = size - dest[i];
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}
#include <stdio.h>
int	main(void)
{
	char	dest[] = "Once upon a time";
	char	src[] = "there was a Queen";
	int	size = 50;
	ft_strlcat(dest, src, size);
	printf("%s", dest);

}
