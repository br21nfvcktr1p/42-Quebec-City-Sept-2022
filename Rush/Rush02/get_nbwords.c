/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nbwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:35:16 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/02 19:10:22 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/base_func.h"

int	populate_nbwords(unsigned int nb, long *nbrs, char **words, char *str)
{
	int		i;
	char	*temp_str;

	i = 0;
	while (i > -1)
	{
		if (nb >= nbrs[i] && nb < nbrs[i + 1])
		{
			if (nb >= 100)
			{
				temp_str = words[i];
				populate_nbwords(nb / nbrs[i], nbrs, words, str);
				ft_strcat(str, temp_str);
			}
			else
				ft_strcat(str, words[i]);
			if (nb - nb / nbrs[i] * nbrs[i] > 1)
				populate_nbwords(nb - nb / nbrs[i] * nbrs[i], nbrs, words, str);
			if (nb - nbrs[i] == 1)
				ft_strcat(str, words[1]);
			return (1);
		}
		i++;
	}
	return (-1);
}

char	*get_nbwords(unsigned int nb, long *nbrs, char **words)
{
	char				*str;
	unsigned int		mag;

	mag = get_magnitude(nb);
	str = malloc(mag * 120 * sizeof(char));
	if (populate_nbwords(nb, nbrs, words, str) == -1)
		return (NULL);
	return (str);
}