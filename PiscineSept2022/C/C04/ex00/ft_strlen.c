/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:36:09 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/27 18:28:16 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (i);
	while (str[i])
	{
		i++;
	}
	return (i);
}