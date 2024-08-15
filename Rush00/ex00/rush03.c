/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mida-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:55:25 by mida-cos          #+#    #+#             */
/*   Updated: 2024/08/04 14:48:28 by mida-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

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
			if ((row == 0 || row == y - 1) && col == 0)
				ft_putchar('A');
			else if ((row == 0 || row == y - 1) && col == x - 1)
				ft_putchar('C');
			else if (row == 0 || row == y - 1)
				ft_putchar('B');
			else if (col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar (' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
