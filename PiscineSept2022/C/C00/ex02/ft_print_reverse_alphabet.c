/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:31:19 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/09/15 08:53:27 by fjean-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
	{
	char	c;	

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
				c--;
	}
}