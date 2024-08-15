/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:15:15 by palexand          #+#    #+#             */
/*   Updated: 2024/08/14 16:33:04 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int	ft_find_next_prime(int nb);
int	main(void)
{
	printf("%i\n", ft_find_next_prime(7));
	printf("%i\n", ft_find_next_prime(-75));
	printf("%i\n", ft_find_next_prime(44));
	printf("%i\n", ft_find_next_prime(0));
}
*/
int	ft_find_next_prime(int nb)
{
	int	i;
	int	c;

	c = 1;
	i = 2;
	while (nb < i)
		nb++;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			c = 0;
		while (c == 0)
		{
			nb++;
			c = 1;
		}
		i++;
	}
	return (nb);
}
