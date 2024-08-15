/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarta-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:26:57 by jmarta-m          #+#    #+#             */
/*   Updated: 2024/08/04 15:56:29 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int		row;
	int		col;
	char	b;

	b = 92;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y - 1 && col == x - 1))
				ft_putchar('/');
			else if ((row == y - 1 && col == 0) || (row == 0 && col == x - 1))
				ft_putchar(b);
			else if ((row == 0 || row == y - 1) || (col == 0 || col == x -1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
