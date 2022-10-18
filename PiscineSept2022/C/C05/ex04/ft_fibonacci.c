/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:17:06 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/03 09:14:14 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (index);
	else if (index == 1)
		return (index);
	else if (index > 1)
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	else
		return (-1);
}