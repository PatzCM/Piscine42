/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:53:04 by palexand          #+#    #+#             */
/*   Updated: 2024/08/13 18:56:06 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
int	ft_recursive_power(int nb, int power);
int	main (void)
{
	int	nb = 10;
	int	power = 0;
       printf("%i\n", ft_recursive_power(nb, power));	
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, --power));
	return (0);
}
