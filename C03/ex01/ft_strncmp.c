/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:28:46 by palexand          #+#    #+#             */
/*   Updated: 2024/08/12 12:36:05 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s2[i] != '\0' && i < n && s1[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' || s2[i] == '\0') && n > 1)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[]="united";
	char	s2[]="";
	int	n = 0;
	ft_strncmp(s1, s2, n);
	printf("Mine:  %d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp( s1, s2, n));
}
*/
