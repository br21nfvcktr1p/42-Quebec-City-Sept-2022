/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:24:08 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/15 08:39:24 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positif;
	char	negatif;

	positif = 80;
	negatif = 78;
	if (n >= 0)
		write(1, &positif, 1);
	else
		write(1, &negatif, 1);
}
