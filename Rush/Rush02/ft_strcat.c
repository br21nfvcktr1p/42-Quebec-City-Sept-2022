/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:51:59 by fgeslin           #+#    #+#             */
/*   Updated: 2022/10/02 14:33:42 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	shift;

	i = 0;
	shift = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[shift + i] = src[i];
		i++;
	}
	dest[shift + i] = ' ';
	dest[shift + i + 1] = '\0';
	return (dest);
}