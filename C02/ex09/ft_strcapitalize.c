/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:47:08 by palexand          #+#    #+#             */
/*   Updated: 2024/08/07 18:27:42 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] = str[0] - 32;
		if ((str[i] > 0 && str[i] < '0')
			|| (str[i] > 'z')
			|| (str[i] > 'Z' && str[i] < 'a')
			|| (str[i] > '9' && str[i] < 65))
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
char	str[]= "salut, hello, bonjour==ahlo quatre_vint";
	printf("%s", ft_strcapitalize(str));
}*/
