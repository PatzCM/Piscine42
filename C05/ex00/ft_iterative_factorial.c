/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:44:14 by palexand          #+#    #+#             */
/*   Updated: 2024/08/13 15:48:17 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
int	ft_iterative_factorial(int nb);
int	main(void)
{
	int	nb =3254-3 ;
	printf("%i\n", ft_iterative_factorial(nb));
}
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb != '\0')
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
