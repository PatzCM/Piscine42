/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:15:22 by palexand          #+#    #+#             */
/*   Updated: 2024/08/04 14:13:32 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y -1 && col == x -1))
				ft_putchar('A');
			else if ((col == 0 && row == y -1) || (col == x -1 && row == 0))
				ft_putchar('C');
			else if ((row == 0 || row == y -1) || (col == 0 || col == x -1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		write (1, "\n", 1);
		row++;
	}
}
