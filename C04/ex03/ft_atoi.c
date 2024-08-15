/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:58:25 by palexand          #+#    #+#             */
/*   Updated: 2024/08/12 23:22:09 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

/*int	ft_atoi(char *str);
int	main (int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ft_atoi(&argv[1][0]));
}*/
int	ft_atoi(char *str)
{
	int		n;
	int		i;
	char	sign;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] <= '\r' && str[i] >= '\t') || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}
