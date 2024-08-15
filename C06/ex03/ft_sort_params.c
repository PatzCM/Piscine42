/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:38:27 by palexand          #+#    #+#             */
/*   Updated: 2024/08/15 14:50:23 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_strcmp(char **argv, int i, int t);
void	ft_putchar(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	t;

	i = 1;
	if (argc != 0)
	{
		while (argv[i] != 0)
		{
			t = i + 1;
			while (argv[t] != 0)
			{
				ft_strcmp(argv, i, t);
				t++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putchar(argv[i]);
		i++;
		write (1, "\n", 1);
	}
}

void	ft_strcmp(char **argv, int i, int t)
{
	int		s;
	char	*temp;

	s = 0;
	while (argv[i][s] == argv[t][s] && argv[i][s] != '\0' && argv[t][s] != '\0')
	{
		s++;
	}
	if ((argv[i][s] - argv[t][s]) > 0)
	{
		temp = argv[i];
		argv[i] = argv[t];
		argv[t] = temp;
	}
}

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
