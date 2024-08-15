/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:41:26 by palexand          #+#    #+#             */
/*   Updated: 2024/08/15 20:43:16 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

int	*ft_range(int min, int max);
int	ft_strlen(int min, int max);
/*
int	main (int argc, char **argv)
{
	if (argc > 0)
	{}
	int	i = 0;
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	*range = ft_range(min, max);
	while (i < (max - min))
		{
			printf("%d\n", range[i]);
			i++;
		}	
}
*/

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	range = 0;
	size = ft_strlen(min, max);
	range = malloc(sizeof(int) * size);
	i = 0;
	if (range == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range[i] = '\0';
	return (range);
}

int	ft_strlen(int min, int max)
{
	int	size;

	size = max - min;
	return (size);
}
