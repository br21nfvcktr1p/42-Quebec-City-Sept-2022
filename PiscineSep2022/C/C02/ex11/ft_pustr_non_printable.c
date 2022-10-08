/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:03:51 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/28 19:40:32 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_converttohex(char c)
{
	unsigned char	c2;
	char			*hex;

	hex = "0123456789abcdef";
	c2 = (unsigned char) c;
	ft_putchar('\\');
	ft_putchar(hex [c2 / 16]);
	ft_putchar(hex [c2 % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			ft_converttohex(str[i]);
			i++;
		}
	}
}