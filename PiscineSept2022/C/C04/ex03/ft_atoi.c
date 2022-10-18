/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:50:38 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/29 17:35:17 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_char_flag(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c == ' ' || (c >= 9 && c <= 13))
		return (2);
	else if (c == '+')
		return (3);
	else if (c == '-')
		return (4);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (ft_char_flag(str[i]) == 2)
		i++;
	while (ft_char_flag(str[i]) >= 3)
	{
		if (ft_char_flag(str[i]) == 4)
			sign *= -1;
		i++;
	}
	while (ft_char_flag(str[i]) == 1)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}