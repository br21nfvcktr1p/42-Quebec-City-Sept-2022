/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:59:15 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/02 20:37:09 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		populate_dictarrs(char *strdict, long *nbrs, char **words);

char	*get_dict(char *dict_path);

int	parse_dict(char *dict_path, long **nbrs, char ***words)
{	
	char	*str_dict;
	int		dict_size;
	int		i;

	str_dict = get_dict(dict_path);
	dict_size = 1;
	i = 0;
	while (str_dict[i] != '\0')
	{
		if (str_dict[i] == '\n')
			dict_size++;
		i++;
	}
	*nbrs = malloc(dict_size * sizeof(**nbrs)); //0x7ffeebb9d9a0,
	*words = malloc(dict_size * sizeof(**words)); //0x7ffeebb9d9a8
	return (populate_dictarrs(str_dict, *nbrs, *words));
}