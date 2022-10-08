/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_dictarrs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:16:18 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/02 20:36:55 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "includes/base_func.h"

char	*word_til_nl(char *str)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	word = malloc((i + 1) * sizeof(char)); //0x7fa012c05a50 a 0x7fa012c05c40
	//printf("add of word = %p\n", word);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	*skip_mid_format(char *str)
{
	while (*str == ' ')
		str++;
	if (*str == ':')
		str++;
	else
		return (NULL);
	while (*str == ' ')
		str++;
	return (str);
}

int	populate_dictarrs(char *strdict, long *nbrs, char **words)
{
	int	i;

	i = 0;
	while (*strdict)
	{
		if (ft_atoi(strdict) > 4294967295)
			break ;
		nbrs[i] = ft_atoi(strdict);
		strdict += get_magnitude(nbrs[i]);
		strdict = skip_mid_format(strdict);
		if (strdict == NULL)
			return (-1);
		words[i] = word_til_nl(strdict);
		while (*strdict != '\n' && *strdict != '\0')
		{
			if (*strdict < 32)
				return (-1);
			strdict++;
		}
		if (*strdict != '\0')
			strdict++;
		i++;
	}
	return (0);
}