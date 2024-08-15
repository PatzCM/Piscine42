/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:29:41 by palexand          #+#    #+#             */
/*   Updated: 2024/08/13 19:30:35 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
int	ft_fibonacci(int index);
int	main(void)
{
	printf("Fibonacci 00: %i\n", ft_fibonacci(0));
	printf("Fibonacci 01: %i\n", ft_fibonacci(1));
	printf("Fibonacci 03: %i\n", ft_fibonacci(3));
	printf("Fibonacci 10: %i\n", ft_fibonacci(10));
}
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
