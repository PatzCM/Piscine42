/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:55:53 by palexand          #+#    #+#             */
/*   Updated: 2024/08/01 13:31:20 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	b;

	c = 'N';
	b = 'P';
	if (n >= 0)
	{
		write (1, &b, 1);
	}
	else
	{
		write (1, &c, 1);
	}
}

/* int main (void)
{
	ft_is_negative(3);
	return 0; */
}
