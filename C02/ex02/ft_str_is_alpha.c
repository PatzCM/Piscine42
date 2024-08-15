/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:13:21 by palexand          #+#    #+#             */
/*   Updated: 2024/08/07 20:24:47 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a')
			|| (str[i] <= 'Z' && str[i] >= 'A'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	printf("%i", ft_str_is_alpha(str));
	
}*/
