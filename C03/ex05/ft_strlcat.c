/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:57:25 by palexand          #+#    #+#             */
/*   Updated: 2024/08/12 12:39:13 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_counter(char	*dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = 0;
	d = ft_counter(dest);
	s = ft_counter(src);
	if (size == 0 || size <= d)
		return (s + size);
	while (src[i] != '\0' && i < (size - d - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}
/*#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	dest[] = "1337";
	char	src[] = "42Born to code";
	int	size = 30;
	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat( dest, src, size));
	printf("Dest after: %s\n", dest);
	printf("Original: %zu\n", strlcat(dest, src, 30));
}*/
