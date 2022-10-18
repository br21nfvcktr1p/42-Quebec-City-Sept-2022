/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:14:26 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/28 13:54:01 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{.
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + i) != '\0')
	{
		if (ft_strcmp(str + i, to_find) == 1)
			return (str + i);
		i++;
	}
	return (0);
}