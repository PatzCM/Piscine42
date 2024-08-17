#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep);
int	ft_strlen (int size, char **str);
int	ft_seplen (char *sep);
/*
int	main(void)
{
	char	*s[] = {NULL};
	char	sep [] = "";
	printf("Mine: %s\n", ft_strjoin(0, s, sep));
}
*/
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int	j;
	int	i;
	int	c;
	int	s;
	size_t	total_size;
/*
	if (strs == NULL)
		return (NULL);
	if (size == 0)
		return (0);*/
	j = 0;
	i = 0;
	c = 0;
	s = 0;
	total_size = 0;
	total_size = ft_strlen(size, strs);
	total_size = total_size + (ft_seplen(sep) * (size -1));
	string = malloc(total_size * sizeof(char) + 1);
	if (string == NULL)
		return (NULL);
	while (j < size)
	{
		while (strs[j][c] != '\0')
		{
			string[i] = strs[j][c];
		 	i++;
		 	c++;
		}
		if (j != size-1)
		{
			while (sep[s] != '\0')
			{
				string[i] = sep[s];
				i++;
				s++;
			}
			c = 0;
			s = 0;
		}
		j++;
	}
	string [i] = '\0';
	return (string);
}

int	ft_strlen(int size, char **str)
{
	int	svalue;
	int	i;
	int	total;
	
	total = 0;
	i = 0;
	svalue = 0;
	while (svalue < size)
	{
		i = 0;
		while (str[svalue][i])
		{
			i++;
			total++;
		}
		svalue++;
	}
	return (total);
}
int	ft_seplen(char *sep)
{
	int	i;
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}
