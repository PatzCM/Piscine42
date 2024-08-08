/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:28:46 by palexand          #+#    #+#             */
/*   Updated: 2024/08/07 23:30:16 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[i] && i < n)
		{
			i++;
			if (s1[i] == '\0' || s2[i] == '\0')
				return (0);
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[]="unity";
	char	s2[]="apple";
	int	n = 3;
	ft_strcmp(s1, s2, n);
	printf("%d", ft_strcmp(s1, s2, n));
}*/
