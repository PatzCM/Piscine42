/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:13:10 by palexand          #+#    #+#             */
/*   Updated: 2024/08/15 19:14:42 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);
/*
char	*ft_strdup( char *src);

int	main(int argc, char **argv)
{ 
	if (argc > 0)
	printf("FT_Strdup: %s\n", ft_strdup(argv[1])); 
	printf("Strdup: %s", strdup(argv[1]));
}
*/

char	*ft_strdup(char *src)
{
	int		size;
	char	*destination_string;
	int		i;

	i = 0;
	size = ft_strlen(src);
	destination_string = malloc(size +1);
	if (destination_string == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		destination_string[i] = src[i];
		i++;
	}
	destination_string[i] = '\0';
	return (destination_string);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
