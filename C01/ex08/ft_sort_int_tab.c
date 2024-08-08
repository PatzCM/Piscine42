/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:52:36 by palexand          #+#    #+#             */
/*   Updated: 2024/08/05 19:54:30 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	t;

	i = 0;
	while (i < size)
	{
		t = i +1;
		while (t < size)
		{
			if (tab[i] > tab[t])
			{
				temp = tab[i];
				tab[i] = tab[t];
				tab[t] = temp;
			}
			t++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = { 1, 5, 2, 0, 3, 6};
	int size = 6;
	int i = 0;
		
	while (i < size)
		i++;
	
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
	printf("%d", tab[i]);
	i++;
	}
}*/
