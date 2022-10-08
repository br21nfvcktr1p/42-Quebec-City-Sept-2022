/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:09:29 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/20 09:48:32 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_rush(char c, int size, int x)
{
	int		i;

	i = 0;
	if (c == '-')
		write(1, "o", 1);
	while (++i <= size)
	{
		write(1, &c, 1);
	}
	if (c == '-' && x > 1)
		write(1, "o", 1);
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if (x > 0 && y > 0)
	{
		ft_print_rush('-', x -2, x);
		ft_print_rush('\n', 1, x);
		while (i < y -2)
		{
			if (x > 1)
			{
				ft_print_rush('|', 1, x);
				ft_print_rush(' ', x - 2, x);
			}
			ft_print_rush('|', 1, x);
			ft_print_rush('\n', 1, x);
			i++;
		}
		if (y > 1)
			ft_print_rush('-', x -2, x);
	}
}
