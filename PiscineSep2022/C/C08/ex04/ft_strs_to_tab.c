/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:16:35 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/05 18:16:36 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			index;

	ptr = (t_stock_str *)malloc(sizeof(*ptr) * (ac + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		ptr[index].size = ft_strlen(av[index]);
		ptr[index].str = av[index];
		ptr[index].copy = ft_strdup(av[index]);
		index++;
	}
	ptr[index].str = 0;
	return (ptr);
}