/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:55:39 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/03 08:59:40 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (nb > i)
	{
		n = n * (nb - i);
		i++;
	}
	return (n);
}