
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:14:26 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/28 13:54:01 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	if (size <= len)
		return (size + ft_strlen(src));
	size = size - len - 1;
	while ((src[i] != '\0') && (size-- > 0))
	{
		dest[len++] = src[i++];
		dest[len] = 0;
	}
	return (len + ft_strlen(src));
}