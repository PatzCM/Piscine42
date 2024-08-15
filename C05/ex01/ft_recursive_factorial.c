/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:25:47 by palexand          #+#    #+#             */
/*   Updated: 2024/08/13 17:36:30 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
/*
int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%i\n", ft_recursive_factorial(nb));
}
*/
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		result = result * nb;
		nb--;
		ft_recursive_factorial(nb);
		if (nb == 0)
			return (result);
	}
	return (result);
}
