/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>    +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:27:45 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/29 10:51:06 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		iswitch;

	i = 0;
	iswitch = 1;
	str = ft_strlowcase(str);
	while (str[i])
	{
		c = str[i];
		if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		{
			if (iswitch && !(c >= '0' && c <= '9'))
				str[i] -= 32;
			iswitch = 0;
		}
		else
			iswitch = 1;
		i++;
	}
	return (str);
}