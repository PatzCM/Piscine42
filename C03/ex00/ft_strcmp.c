/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:41:01 by palexand          #+#    #+#             */
/*   Updated: 2024/08/07 23:33:13 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while ((s1[i] == s2[t]) && s1[i] != '\0')
	{
		i++;
		t++;
	}
	return (s1[i] - s2[t]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[]="caranguejo";
	char	s2[]="panela";
	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	printf("%s", "\n");
	printf("%d", strcmp(s1, s2));
}
*/
