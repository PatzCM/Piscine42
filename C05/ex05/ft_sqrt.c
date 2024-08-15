/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:32:47 by palexand          #+#    #+#             */
/*   Updated: 2024/08/13 23:34:31 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_sqrt(int nb);
int	main(void)
{
	int	nb = 9;
	printf("%d", ft_sqrt(nb));
}
*/

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	i = 2;
	result = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			result = i;
		else if (result * result == nb)
			return (result);
		i++;
	}
	return (0);
}
