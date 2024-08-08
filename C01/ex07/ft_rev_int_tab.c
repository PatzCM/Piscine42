/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:39:26 by palexand          #+#    #+#             */
/*   Updated: 2024/08/05 18:42:18 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = temp;
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int	main(void)
{	
	int	i = 0;
	int	tab [] ={0, 1, 2, 3, 4, 5};
	int 	size = 6;
	
	ft_rev_int_tab(tab, size);
	while (i != size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
