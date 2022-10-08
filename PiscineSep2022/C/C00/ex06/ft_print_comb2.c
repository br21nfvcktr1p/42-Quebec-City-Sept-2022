/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:26:00 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/19 10:12:41 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	toprint[5];
	int		numb1;
	int		numb2;

	numb1 = 0;
	numb2 = 1;
	toprint[2] = 32;
	while (numb1 <= 98)
	{
		while (numb2 <= 99)
		{
		toprint[0] = numb1 / 10 + '0';
		toprint[1] = numb1 % 10 + '0';
		toprint[3] = numb2 / 10 + '0';
		toprint[4] = numb2 % 10 + '0';
			if (numb2 > 1)
				write(1, ", ", 2);
			write(1, &toprint, 5);
		numb2++;
		}
		numb2 = ++numb1 + 1;
	}
}