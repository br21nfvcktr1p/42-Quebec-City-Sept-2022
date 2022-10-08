/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:42:21 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/05 13:29:10 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(max));
	if (max > min)
	{
		tab[i] = min;
		i++;
		while (max - 1 > i)
		{
			tab[i] = i + 1;
			i++;
		}
	}
	return (tab);
}


/*romain code(KO)
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (i < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
*/ 
