/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:50:07 by palexand          #+#    #+#             */
/*   Updated: 2024/08/13 23:57:45 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
int	ft_is_prime(int	nb);
int	main(void)
{
	printf("%i\n", ft_is_prime(1));
	printf("%i\n", ft_is_prime(-17));
	printf("%i\n", ft_is_prime(6));
	printf("%i\n", ft_is_prime(19));
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
