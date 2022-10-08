/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:22:28 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/17 21:18:59 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_rush(char c, int size, int x, int verif)
{
	int	i;

	i = 0;
	if (c == 'B' && verif == 1)
		write(1, "A", 1);
	while (++i <= size)
	{
		write(1, &c, 1);
	}
	if (c == 'B' && x > 1 && verif == 1)
		write(1, "A", 1);
}

void	ft_last_line(int x, int y)
{
	if (y > 1)
	{
		write(1, "C", 1);
		ft_print_rush('B', x -2, x, 0);
		write(1, "C", 1);
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if (x > 0 && y > 0)
	{
		ft_print_rush('B', x -2, x, 1);
		ft_print_rush('\n', 1, x, 0);
		while (i < y -2)
		{
			if (x > 1)
			{
				ft_print_rush('B', 1, x, 0);
				ft_print_rush(' ', x - 2, x, 0);
			}
			ft_print_rush('B', 1, x, 0);
			ft_print_rush('\n', 1, x, 0);
			i++;
		}
		ft_last_line(x, y);
	}
}