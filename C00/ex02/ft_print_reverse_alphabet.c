/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:57:44 by palexand          #+#    #+#             */
/*   Updated: 2024/08/01 12:14:41 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' ;
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/*int main (void)
{
	ft_print_reverse_alphabet();
	return 0;
}*/
